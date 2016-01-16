#include <stdlib.h>   //For NULL and free(...)
#include "node.h"
/**Deep Desai */

/** 
 * If the list is empty, there is nothing to delete!
 * In this case, the message
 * "Illegal attempt to delete from an empty list"
 * is printed to stderr and the program terminates with
 * exit(-1);
 * Otherwise, the list has at least one item. The head
 * of the list's value is returned after freeing the
 * memory it occupied.
 * The head of the list is modified.
 */
int delete(nodePtr_t *h) {
    //FIX THIS!
   int val;
    nodePtr_t p;
    p = *h;
    *h = p->next;
    val = p->value;
    return val;
}


