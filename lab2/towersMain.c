#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
int n;
int from;
int dest;
 if (argc == 1){
n = 3;
    from = 1;
    dest = 3;
    towers(n, from, dest);
    exit(0);
}else 
if (argc == 2){
n = atoi(argv[1]);
    from = 1;
    dest = 2;
    
if(n<=0){
fprintf(stderr,"ERROR: number of disks cant be less than zero");
exit(1);
}
towers(n, from, dest);
}

else if (argc == 3){
fprintf(stderr,"ERROR: destination value is not specified");
exit(1);
}

else if (argc == 4){
n = atoi(argv[1]);
    from = atoi(argv[2]);
    dest = atoi(argv[3]);
 if((n<=0) || (from<=0) || (dest<=0) || (from>=4) || (dest>=4) ||(from==dest) ){
            fprintf(stderr,"ERROR: # of disks cant be less then zero, from and dest cant be same, destination and from cant be greater then '4'");
            exit(1);
}
towers(n, from, dest);
}
exit(0);
}

