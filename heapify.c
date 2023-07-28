#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int Heapify(int arr[], int index, int n)
{
    int letf = 2 * index + 1;
    int right = letf + 1;
    int max = index;

    if (letf <= n && arr[letf] > arr[max])
        max = letf;
    if (right <= n && arr[right] > arr[max])
        max = right;
    if (index != max)
    {
        swap(&arr[max], &arr[index]);
        Heapify(arr, max, n);
    }
}
int buildHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
        Heapify(arr, i, n);
}
int main()
{
    int arr[10], n;
    printf("Enter no.of elements : ");
    scanf("%d", &n);
    printf("Enter elements into the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    buildHeap(arr, n - 1);
    printf("HeapSort array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    // printf("\n\t\t%d\n", arr[0]);
    // printf("\t%d\t%d\t\n", arr[1], arr[2]);
    // printf("%d\t%d\t%d\t%d\n", arr[3], arr[4], arr[5], arr[6]);
}