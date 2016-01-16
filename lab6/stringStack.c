#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
static int top = 0;
static char *stack[100];


char * pop()
{
if(top==0){
  fprintf(stderr,"STACK IS EMPTY\n");
  exit(1);
  }
  else {
  
   top=top-1;
  }

  return stack[top];  
}


void push(char*thing2push)
{
if(top>100){
 fprintf(stderr,"stack Overflow\n");
 exit(1);
}
else{
stack[top]=thing2push;
top++;
}

}


int isEmpty()
{
if(top==0){
return 'e';
          }
else{
  return 0;} 
}
