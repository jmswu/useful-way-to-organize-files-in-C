/*! \brief xxx_types.h file
 *  
 *  Type declrations
 */

#ifndef QUEUE_TYPES_H
#define QUEUE_TYPES_H

struct item_struct
{
    Item_ptr next_ptr;
    Item_ptr prev_ptr;
};

struct queue_struct
{
    int num_elements;
    Item_ptr head_ptr;
    Item_ptr tail_ptr;
};

#endif