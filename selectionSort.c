#include <stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int selectionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
}
int main()
{
    int arr[20], i, n;
    printf("Enter no.of Elements:");
    scanf("%d", &n);
    printf("Enter array:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    selectionSort(arr, n);
    printf("Sort array is : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}