#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  int ch;
  int Btag=0;
  int Etag=0;
  int i;
  int array[2][100];
  
  for(i=0;i<100;i++)
  {
  array[0][i]=0;    
  array[1][i]=0;
  }
  
  
  
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    //
    
    if (ch =='/')
    {
        Btag=pop();
        Etag=getchar();
        getchar();
        if (Btag!=Etag)
        {
            if (Btag==10000)
                printf ("underflow\n");
            
            printf("not valid\n");
            
            exit(1);
        }
       
        //compare poped with the next getchar
    }
    else if (isalpha(ch))
    {       
        push(ch);
        i=0;
        while(array[0][i]!=0)
        {
            if(array[0][i]==ch)
            {
               array[1][i]++;
               break;
            }
            else
                i++;
        }
        if (array[1][i]==0)
        {
           array[1][i]++; 
        }
        array[0][i]=ch;
        
    }
    
  }
  
   if (isEmpty()==0){
      printf("not valid\n");
     
      exit(1);
  }else if(isEmpty()!=0)
  {
      printf("valid\n");
      i=0;
      while(array[0][i]!=0)
      {
          
      printf("%c %d\n",array[0][i],array[1][i]);
      i++;
      }
      exit(0);
  }
}

