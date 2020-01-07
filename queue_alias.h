/*! \brief xxx_alias.h file
 *  
 *  This define a typedef that aliases both the struct names and 
 *  the struct pointer type names. This must appear before the 
 *  actual definition of the struct
 */

#ifndef QUEUE_ALIAS_H
#define QUEUE_ALIAS_H

/* examples */
typedef struct item_struct Item, * Item_ptr;
typedef struct queue_struct Queue, * Queue_ptr;

#endif