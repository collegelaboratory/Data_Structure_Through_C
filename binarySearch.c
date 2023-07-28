#include <stdio.h>
int binarySearch (int n,int arr[],int s,int e,int k){
    int mid;
    while (s<=e)
    {
        mid = (s + e) / 2;
        if(arr[mid] == k)
            return mid;
        if(arr[mid] < k)
            s = mid + 1;
        else
            e = mid - 1;
    }
    
}
int main()
{
    int arr[20], start = 0, end, i, key, n,result;
    printf("Enter no.of Elements:");
    scanf("%d", &n);
    end = n;
    printf("Enter array:");
    for (i = 0; i < n;i++)
        scanf("%d", &arr[i]);
    printf("Enter key:");
    scanf("%d", &key);
    result = binarySearch(n,arr,start,end,key);
    if(arr[result] == key)
        printf("Element (%d) found at index (%d)", key, result);
    else
        printf("element is not found");
}