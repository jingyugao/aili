#ifndef SQL_NODE_QUERY_H
#define SQL_NODE_QUERY_H

#include "node.h"

enum CmdKind{
    CmdInsert,
    CmdUpdate,
    CmdSelect,
    CmdDelete,
};

struct Query :public Node{
    
    
    vector<TableNode*> tables;

    vector<int> from;
    vector<FieldNode*> target;
};


#endif // SQL_NODE_QUERY_H