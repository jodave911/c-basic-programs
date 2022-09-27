/* Hey thanks for copying
 * now, you are really a software dev.
 * good luck. 
 *
 * by: Joshua David
 * :)
 * enjoy "_"
 *
 * do star my projects. 
 * thanks in adv.  -_- 
*/


#include<stdio.h>

int binarysearch(int arr[], int i, int first, int last){
  while(first<=last){
    int mid= first+ (last-first) /2;
    if (arr[mid] == i){
      return mid;
    }
    if (arr[mid]<i){
      first= mid+1;
    }
    else{
      last= mid-1;
    }
  }
  return -1;
  
}


void print(int arr[], int n){
  for(int i=0; i<0; i++){
    printf("%d",arr[i]);
  }
}

int main(){
  int key, arr[100], n, i, traget;
  printf("Enter the number of entries :");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }

  printf("\nenter the traget to get the index of :");
  scanf("%d", &traget);
  key=binarysearch(arr, traget, 0, n-1 );

  if (key==-1){
    printf("invalid\n");
    print(arr, n);
  }
  else{
    printf("the index is :%d \n", key+1);
  }
}
