#ifndef SQL_REWRITE_SELECT_H
#define SQL_REWRITE_SELECT_H

#include"../node/query.h"

Query * rewrite_select(Node *raw){
    Query*qry=new Query();
    qry->cmdKind=CmdSelect;
    
    SelectNode*node=(SelectNode*)raw;

    qry->cond=node->cond;
    


    return qry;
}

#endif // !RITE_SELECT_H