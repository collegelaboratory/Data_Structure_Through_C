#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int bubbleSort(int arr[], int n)
{
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if(flag = 0)
            break;
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
    bubbleSort(arr, n);
    printf("Sort array is : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}