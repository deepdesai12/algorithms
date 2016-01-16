#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define HASH_TABLE_SIZE 1057
extern int pop(char[],int);
extern int push(char*);

typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

void in() {
         int i;
         for (i = 0;i < HASH_TABLE_SIZE; i++)
		 hash_table[i].string = '\0';
                 hash_table[i].count = 0;
}

void add(char tag[], int j)
{
	int i, k, l=0;
        for (i = 0; i < j; i++) {
		//printf("j==%d  ",j);
		//printf("(%c-%d)\n",tag[i],tag[i]);
	l = l+tag[i];
	}
	k = l%HASH_TABLE_SIZE;
	//printf("==%d==\n\n\n",k);
	if (hash_table[k].string != NULL) {
	//printf("SH--31\n");
		if (strcmp(hash_table[k].string, tag)==0) {
		//printf("SH--33\n");
			hash_table[k].count++;
			}
		else {
			while (hash_table[k].string != NULL) {
			
				k++;
					if (hash_table[k].string != NULL) {
						if (strcmp(hash_table[k].string, tag)==0) {
						hash_table[k].count++;
			
						}
					}
				}
			}
		}
		
	if (hash_table[k].string == NULL) {
	
	hash_table[k].count++;
	
	hash_table[k].string=tag;
	}
}
void print() {
	int i;
		for (i = 0; i < HASH_TABLE_SIZE; i++) {
			if(hash_table[i].count!=0) {
			printf("%s %d\n", hash_table[i].string, hash_table[i].count);
			}
		}
	}
