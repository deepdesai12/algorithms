#include "node.h"
#include <stdlib.h>  //for NULL
/**Deep Desai */
/** Returns the number of items in the list. */
unsigned int list_size(nodePtr_t head) {
  
unsigned int count = 0;
    nodePtr_t temporary =head;
    while(temporary || NULL){
        temporary =temporary->next;
        count++;
    }
    
    return count;
}

