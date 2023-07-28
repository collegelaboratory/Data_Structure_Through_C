// #include <stdio.h>
// int swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int s, int e)
// {
//     int pvoit = arr[e];
//     int pindex = s;
//     for (int i = s; i < e; i++)
//         if (arr[i] < pvoit)
//         {
//             swap(&arr[i], &arr[pindex]);
//             pindex++;
//         }
//     swap(&arr[e], &arr[pindex]);
//     return pindex;
// }
// int qickSort(int arr[], int s, int e)
// {
//     int pindex;
//     if (s < e){
//         pindex = partition(arr, s, e);
//         qickSort(arr, s, pindex - 1);
//         qickSort(arr, pindex + 1,e);
//     }
// }
// int main()
// {
//     int arr[20], i, n, start = 0, end = 0;
//     printf("Enter no.of Elements:");
//     scanf("%d", &n);
//     end = n;
//     printf("Enter array:");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     qickSort(arr, start, end);
//     printf("Sort array is : ");
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }
#include<stdio.h>
int main(){
    int a = 200,b = 60;
    int c = a / b;
    int e = a / b;
    printf("%d/n", c);
    printf("%d", e);
}