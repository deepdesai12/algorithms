void mySort(int arr[], unsigned int n)
{
int i,j,k;

for(i=0; i<n; i++){
  j=arr[i];
for(k=(i-1); k>=0 && arr[k]> j ; k--){
  arr[k+1] = arr[k];
}
  arr[k+1] = j;
}


}




