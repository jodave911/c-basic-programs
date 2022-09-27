#include <stdio.h>

void selection(int a[], int n){
  int i, j, temp;
  for(i=0;i!=n;i++){
    for(j=i+1;j!=n;j++){
      if (a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
}

void call(int a[], int n){
  for(int i=0; i<n; i++){
    printf("%d \n", a[i]);
  }
}

int main(){

  int n=5;
  int a[]={10, 20, 4, 7, 12};
  

  call(a, n);
  printf("\n \n");
  selection(a, n);
  call(a, n);
  return 0;
}
