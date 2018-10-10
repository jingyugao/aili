#ifndef SQL_NODE_NODE_H
#define SQL_NODE_NODE_H
#include <string>
#include <vector>
using namespace std;
enum NodeKind
{

    NodeList,

    NodeTable,
    NodeField,
    NodeAttr,
    NodeCond,
    NodeValue,

    NodeSelect,

    NodeJoin,
    // NodeInsert,
    // NodeUpdate,
    // NodeDelete,

    // NodeCreateTable,
    // NodeDropTable,
    // NodeCrateDb,
    // NodeDropDb
};

struct Node
{
    NodeKind kind;
};

struct ListNode : public Node
{
    ListNode()
    {
        kind = NodeList;
    }
    vector<Node *> list;
};

enum ValueKind
{
    ValStr,
    ValInt,
    ValFloat,
};
struct ValueNode : public Node
{
    ValueNode()
    {
        kind = NodeValue;
    }
    ValueKind valKind;
    int len;
    string str;
    int i;
    float f;
};

struct TableNode : public Node
{
    TableNode()
    {
        kind = NodeTable;
    }
    string name;
};

struct FieldNode : public Node
{
    FieldNode()
    {
        kind = NodeField;
    }
    string name;
    Node *table;
};

struct AttrNode : public Node
{
    AttrNode()
    {
        kind = NodeAttr;
    }
    string name;
    ValueKind valKind;
    int len;
    bool primary;
    bool nulable;
};

// struct CreateTableNode : public Node
// {
//     TableNode *table;
//     vector<AttrNode *> attrs;
// };

enum CondOp
{
    OpAnd,
    OpOr,
    OpIs,
    OpNot,
    OpGt,
    OpEq,
    OpGe,
    OpLe,
    OpLt,
    OpNe,
};

struct CondNode : public Node
{
    CondNode()
    {
        kind = NodeCond;
    }
    CondOp op;

    Node *left;
    Node *right;
};

enum JoinKind
{
    JoinNatural
};
struct JoinNode : public Node
{
    JoinNode()
    {
        kind = NodeJoin;
    }
    Node *left;
   Node *right;
   Node *cond;
};
struct SelectNode : public Node
{
    SelectNode()
    {
        kind = NodeSelect;
    }
    Node *fields;
    Node*cond;
    Node *tables;
    Node *joins;
};

#endif // !SQL_NODE_NODE_H