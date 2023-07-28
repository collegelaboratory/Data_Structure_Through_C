#include <stdio.h>
int insertionSort(int arr[], int n)
{
    int i, value, index;
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        index = i;
        while (index > 0 && arr[index-1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}
int main()
{
    int arr[20], i, n;
    printf("Enter no.of Elements:");
    scanf("%d", &n);
    printf("Enter array:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    insertionSort(arr, n);
    printf("Sort array is : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}