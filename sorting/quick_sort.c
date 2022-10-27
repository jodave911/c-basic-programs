#include<stdio.h>

void swap(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

int part(int a[], int l, int h){
  int pivot_val = a[h];
  int i=l;
  for(int j = l; j<h; j++){
    if(a[j] <= pivot_val){
      swap(&a[i], &a[j]);
      i++;
    }
  }
  swap(&a[i], &a[h]);
  return i;
}


void quicksortrec(int a[], int l, int h){
  if (l<h){
    int pivot = part(a, l, h);
    quicksortrec(a, l, pivot-1);
    quicksortrec(a, pivot+1, h);
  }
}

void quicksort(int a[], int n){
  quicksortrec(a, 0, n-1);
}



int main(){
  int a[] = {20, 45, 67, 1, 6, 7, 4 ,13};
  int n = 8;
  quicksort(a, n);

  for(int i=0; i<n; i++)
    printf("%d, ", a[i]);
  printf("\n");

  return 0;
}


