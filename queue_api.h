/*! \brief  xxx_api.h
 *  
 *  A set of functions for managing a queue
 */

#ifndef QUEUE_API_H
#define QUEUE_API_H

Queue_ptr CreateQueue()
{
    // Create and init a new Queue

    Queue_ptr qp = malloc(sizeof(Queue));

    qp->head_ptr = NULL;
    qp->tail_ptr = NULL;
    qp->num_elements = 0;

    return qp;
}

void AddToQueue(Queue_ptr queue_ptr, Item_ptr item_ptr)
{
    if (queue_ptr == NULL)
        ; // error

    if (item_ptr == NULL)
        ; // error

    item_ptr->next_ptr = queue_ptr->head_ptr;
    queue_ptr->head_ptr = item_ptr;

    // etc etc etc.
}

#endif