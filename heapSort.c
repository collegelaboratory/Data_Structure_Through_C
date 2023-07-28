#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int heapify(int arr[], int index, int n)
{
    int left = 2 * index + 1;
    int right = left + 1;
    int max = index;

    if (left <= n && arr[left] > arr[max])
        max = left;
    if (right <= n && arr[right] > arr[max])
        max = right;
    if (index != max)
    {
        swap(&arr[max], &arr[index]);
        heapify(arr, max, n);
    }
}
int buildHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
        heapify(arr, i, n);
}
int heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    while (n > 0)
    {
        swap(&arr[0], &arr[n]);
        n--;
        heapify(arr, 0, n);
    }
}
int main()
{
    int arr[10], n;
    printf("Enter noof elements : ");
    scanf("%d", &n);
    printf("Enter elements into the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    heapSort(arr, n - 1);
    printf("Sort array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}