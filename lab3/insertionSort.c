#include "mySort.h"
#include "metrics.h"
void mySort(int array[], unsigned int first, unsigned int last)
{

int h,k,temporary ;

for ((h  = first + 1); h <= last; h++)
{
  myCopy(&array[h], &temporary );
  k = (h-1);
  	
	while (k>=0 && myCompare(array[k], temporary ) > 0)
		{		
			mySwap(&array[k+1], &array[k]);
	      	k--;
		}
		
	myCopy(&temporary , &array[k + 1]);

}



} 


