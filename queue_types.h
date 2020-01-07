/*! \brief xxx_types.h file
 *  
 *  Type declrations
 */

#ifndef QUEUE_TYPES_H
#define QUEUE_TYPES_H

#include "queue_alias.h"

typedef struct item_struct
{
    Item_ptr next;
    Item_ptr prev;
};

typedef struct queue_struct
{
    int num_elements;
    Item_ptr head;
    Item_ptr tail;
};

#endif