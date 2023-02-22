// LARGEST ELEMENT IN ARRAY
#include <stdio.h>

int main()
{

    int arr[] = {12, 11, 10, 78, 13, 6};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
         
        if (arr[i] > max)
        {
            max = arr[i];

        }
       
      
    }
    printf("smallest is %d", max);
}