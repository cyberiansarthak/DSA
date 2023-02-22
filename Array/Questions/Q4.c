// kth smallest element of array
#include <stdio.h>
int main()
{

    int arr[] = {1, 5, 7, 3, 78, 26};
    int n = 6, k = 2;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < i - 1; j++)
        {
            if (arr[i ]< arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           
        }
         if (i == k - 1)
            {
                printf("%d", arr[i]);
            }
    }
}