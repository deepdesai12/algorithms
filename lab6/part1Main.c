#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  int ch;
  int start=0;
  int end=0;
  int top;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    //
    if (isalpha(ch))
    {       
        push(ch);
    }

    
   else if (ch =='/')
    {
        start=pop();
        end=getchar();
        getchar();
        if (start!=end)
        {
            if (start==10000)
               { printf ("underflow\n");}
            
            printf("not valid\n");
            
            exit(1);
        }
       
        //compare poped with the next getchar
    }
       
  }
  
   if (isEmpty()==0){
      printf("not valid\n");
     
      exit(1);
  }else if(isEmpty()!=0)
  {
      printf("valid\n");
      exit(0);
  }
}


