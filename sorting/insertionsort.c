#include<stdio.h>

void insertionsort(int arr[], int n){
  int i, value, j;
  for (i=1; i<n; i++){
    value=arr[i];
    j=i-1;
    while (j>=0 && arr[j] >value){
      arr[j+1] = arr[j];
      j=j-1;
    }
    arr[j+1] = value;
  }
}

void print(int arr[], int n){
  for (int i=0; i<n; i++){
    printf("%d \n", arr[i]);
  }
}

int main(){
  int arr[]={ 12, 32, 11, 5, 7, 31};
  int n=6;
  insertionsort(arr, n);
  print(arr, n);
}
