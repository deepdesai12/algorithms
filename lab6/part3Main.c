
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

extern char *  pop();
extern void push(char*);
extern void add(char*,int);
extern int isEmpty();
extern void in();
extern void print();


int main(int argc, char * argv[])
{
  int ch,i,size;
  char temp[100],temp2[100];
  char* str;
  in();
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
        if(ch != '<')
	  continue;    
	   {
		ch = getchar();
		if(isalpha(ch))
                {
		      i=0;
		      temp[i++]=ch;
				 
		      while((ch=getchar())!='>')
                      {
			   temp[i++]=ch;  
		      }
		           temp[i]= 0;
					
			   size = (i+1)*sizeof(char);
		           str = malloc(size);
		           strcpy(str,temp);
			   push(str);
			   add(str,i+1); 
		}
				 
			         if(ch=='/')
                                   {
			 
			                 i = 0;
				         while((ch=getchar())!='>')
                                           {
				                 temp[i++]=ch;
				           }
				         temp[i]=0;
				         if(isEmpty()=='a')
                                           {
				                pop();
				                exit(1);
				           }
                                                     
                                                          else
                                                          {
				
				                          strcpy(temp2,pop());
				                          if(strcmp(temp,temp2)!=0)
                                                            {
				                               printf("NOT VALID \n");
				                               exit(1);
				                            }
			                                  }	  
				 
				  }
    
          }
    
  }
                        
                        if(isEmpty()=='e')
                        {
			    printf("Valid\n");
			    print();
						  
                        }else
						printf("not valid");


  exit(0);
}
