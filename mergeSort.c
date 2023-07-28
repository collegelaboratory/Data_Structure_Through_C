#include <stdio.h>
int merge(int originalArray[], int start, int midValue, int sizeOfArray1)
{
    int sizeOfSubArray1 = midValue - start + 1;
    int sizeOfSubArray2 = sizeOfArray1 - midValue;
    int SubArray1[sizeOfSubArray1], SubArray2[sizeOfSubArray2];

    for (int i = 0; i < sizeOfSubArray1; i++)
        SubArray1[i] = originalArray[start + i];
    for (int j = 0; j < sizeOfSubArray2; j++)
        SubArray2[j] = originalArray[midValue + 1 + j];

    int i = 0, j = 0, k = start;

    while (i < sizeOfSubArray1 && j < sizeOfSubArray2)
    {
        if (SubArray1[i] <= SubArray2[j])
        {
            originalArray[k] = SubArray1[i];
            i++;
        }
        else
        {
            originalArray[k] = SubArray2[j];
            j++;
        }
        k++;
    }

    while (i < sizeOfSubArray1)
    {
        originalArray[k] = SubArray1[i];
        i++;
        k++;
    }
    while (j < sizeOfSubArray2)
    {
        originalArray[k] = SubArray2[j];
        j++;
        k++;
    }
}
int mergeSort(int originalArray[], int start, int sizeOfArray1)
{
    if (start < sizeOfArray1)
    {
        int m = (start + sizeOfArray1) / 2;
        mergeSort(originalArray, start, m);
        mergeSort(originalArray, m + 1, sizeOfArray1);
        merge(originalArray, start, m, sizeOfArray1);
    }
}
int main()
{
    int sizeOfArray, start = 0;
    int originalArray[10];
    printf("Enter no.of elements : ");
    scanf("%d", &sizeOfArray);
    printf("Enter elements into array : ");
    for (int i = 0; i < sizeOfArray; i++)
        scanf("%d", &originalArray[i]);
    mergeSort(originalArray, start, sizeOfArray - 1);
    printf("Sort array is : ");
    for (int i = 0; i < sizeOfArray; i++)
        printf("%d ", originalArray[i]);
}