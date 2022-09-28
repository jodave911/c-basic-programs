#include <stdio.h>
 
void swap(int* xp, int* yp)
{
    	int temp = *xp;
    	*xp = *yp;
    	*yp = temp;
}
 
void bubblesort(int arr[], int n)
{
    	int i, j;
    	for (i = 0; i < n - 1; i++)
        	for (j = 0; j < n - i - 1; j++)
            		if (arr[j] > arr[j + 1])
                		swap(&arr[j], &arr[j + 1]);
}
 
void print(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    	printf("\n");
}
 
int main()
{
    	int arr[10], n;
	
	printf("enter the no of digits :");
	scanf("%d", &n);

	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("\n before\n"); 
	print(arr, n);

	bubblesort(arr, n);
	printf("Sorted array: \n");
        print(arr, n);
        return 0;
}
