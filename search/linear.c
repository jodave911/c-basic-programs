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

int linearsearch(int arr[], int target, int n){

  for(int i=0;i<n;i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    printf("%d \n", arr[i]);
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
  key=linearsearch(arr, traget, n);
  if (key==-1){
    printf("invalid\n");
    print(arr, n);
  }
  else{
    printf("the index is :%d \n", key+1);
  }
}
