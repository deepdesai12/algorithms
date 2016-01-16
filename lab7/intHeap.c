#include <stdio.h>

static int h[100];

static int key = -1;


int heapDelete()
{	
int maximum,temporary ,i;
maximum=h[0];
for(i=0;i<=key;i++){
if(maximum<h[i]){
maximum=h[i];}}
for(i=0;i<=key;i++){
if(maximum==h[i]){
break;}}
temporary  =h[i];
h[i]=h[key];
h[key]=temporary ;
key--;
return maximum;

}

int heapSize()
{
  return key;  //A dummy return statement
}


void addHeap(int thing2add)
{
	int p,temporary ;
	key++;
	p=key;
	h[key]=thing2add;
	while(p>0 && h[((p-1)/2)]<h[p]){
		temporary =h[p];
		h[p]=h[((p-1)/2)];
		h[((p-1)/2)]=temporary ;
		p=((p-1)/2);
	}
}


void printHeap(int i){
char j = '"';
	int temporary ;
	printf("\n");
	if(i<=key){
		for(temporary =(1+i)/2;temporary >0;temporary --){
			printf("\t");
			}
		printf("<node id=%c%d%c>",34,h[i],34);
		if((i*2)+1<=key){
		
			printHeap((i*2)+1);
			
		}
		if((i*2)+2<=key){
		
			printHeap((i*2)+2);
			
		}
	for(temporary =(1+i)/2;temporary >0;temporary --){
			if((i*2)+1<=key||(i*2)+2<=key){
			printf("\t");
			}}
	printf("</node>");
	}
	printf("\n");
}		
