
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


#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int l1 = m - l + 1;
    int r1 = r - m;
 
    int L[l1], R[r1];
    for (i = 0; i < l1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < r1; j++)
        R[j] = arr[m + 1 + j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < l1 && j < r1) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < l1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < r1) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;   
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
 

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
int main()
{
		printf("Enter the no of elements :");
		int arr[100],no;
		scanf("%d", &no);
		for(int i=0; i<no; i++){
				printf("Enter the value of element %d: ",i+1);
				scanf("%d",&arr[i]);
		}
					
 		int arr_size;
 		arr_size=no;
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
