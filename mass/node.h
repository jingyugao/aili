/**
 *    author:     UncP
 *    date:    2018-10-05
 *    license:    BSD-3
**/

#ifndef _node_h_
#define _node_h_

#include <stdint.h>

#define likely(x)   (__builtin_expect(!!(x), 1))
#define unlikely(x) (__builtin_expect(!!(x), 0))

// node type
#define Interior 0
#define Border   1

#define LOCK_BIT   ((uint32_t)1 << 31)
#define INSERT_BIT ((uint32_t)1 << 30)
#define SPLIT_BIT  ((uint32_t)1 << 29)
#define DELETE_BIT ((uint32_t)1 << 28)
#define ROOT_BIT   ((uint32_t)1 << 27)
#define BORDER_BIT ((uint32_t)1 << 26)

#define set_lock(n)   ((n) | LOCK_BIT)
#define set_insert(n) ((n) | INSERT_BIT)
#define set_split(n)  ((n) | SPLIT_BIT)
#define set_delete(n) ((n) | DELETE_BIT)
#define set_root(n)   ((n) | ROOT_BIT)
#define set_border(n) ((n) | BORDER_BIT)

#define unset_lock(n)   ((n) & (~LOCK_BIT))
#define unset_insert(n) ((n) & (~INSERT_BIT))
#define unset_split(n)  ((n) & (~SPLIT_BIT))

#define node_is_locked(n)    (n->version & LOCK_BIT)
#define node_is_inserting(n) (n->version & INSERT_BIT)
#define node_is_spliting(n)  (n->version & SPLIT_BIT)
#define node_is_deleted(n)   (n->version & DELETE_BIT)
#define node_is_root(n)      (n->version & ROOT_BIT)
#define node_is_border(n)    (n->version & BORDER_BIT)
#define node_is_interior(n)  (!node_is_border(n))

typedef struct interior_node
{
  uint32_t version;

  uint32_t nkeys;
  uint64_t keyslice[15];

  void    *child[16];

  struct interior_node *parent;
}interior_node;

typedef struct border_node
{
  uint32_t version;

  uint8_t  nremoved;
  uint8_t  keylen[15];
  uint64_t permutation;
  uint64_t keyslice[15];

  void *lv[15];

  struct border_node *prev;
  struct border_node *next;

  struct interior_node *parent;
}border_node;

// this is a little bit tricky, since both interior_node and border_node
// start with `version` field, we can convert them to `node` so that coding is easier
typedef struct node
{
  uint32_t version;
}node;

node* new_node(int type);
void free_node(node *n);

#endif /* _node_h_ */