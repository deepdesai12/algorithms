#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)

{
int middle , a;
int p,q;
int leftArray[MAX_SIZE_N_TO_SORT] , rightArray[MAX_SIZE_N_TO_SORT];

 if ( first < last)
{
    middle = ( first + last - 1 ) / 2 ;

mySort ( array , first ,middle ) ; 
mySort ( array , middle + 1 , last);

for ( p = 0 ; p < (middle - first + 1 ); p++) 
	{ 
		leftArray[p] = array[p +first];
	}
for ( q = 0 ; q < (last - middle) ; q++)
	{
		rightArray[q] = array [ middle + q + 1 ] ;
	}
//Assume Max integer is 10000000
 leftArray[ middle - first +1 ] = 10000000;
rightArray[ last - middle ] = 100000000;

p = 0 ;
q = 0 ;
 for( a = first ; a <= last ; a++ )
	{	
if ( myCompare ( leftArray[p] , rightArray[q]) < 0 ) {
	myCopy( &leftArray[p], &array[a]);
	p++;
        }
	else {
 	myCopy( &rightArray[q] , &array[a]);
	q++;
	}
 }
 }}
