#include <stdlib.h>
#include <stdio.h>

#include "queue_defs.h"         /* include this first   */
#include "queue_alias.h"        /* include this second  */
#include "queue_types.h"        /* include this third   */
#include "queue_api.h"          /* inlcude this last    */

int main(char *argv[], int argc){

    printf("Useful way to organize header files in C!\n");
    printf("Author  : %s\n", AUTHOR);
    printf("Link    : %s\n", LINK);

    /* create Queue     */
    Queue_ptr queue_ptr = CreateQueue();

    /* silly example    */
    AddToQueue(queue_ptr, NULL); // in reality we'd never pass NULL !

    /* to-do: add Queue destroy */

    return 0;
}