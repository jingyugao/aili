#ifndef SQL_REWRITE_REWRITE_H
#define SQL_REWRITE_REWRITE_H
#include "../node/query.h"
#include "select.h"

Query * rewrite(Node* raw){
    Query * qry;
    switch(raw->kind){
        case NodeSelect:    
            qry=rewrite_select(raw);
            break;
        default:
    break;
    }

    return qry;
};



#endif