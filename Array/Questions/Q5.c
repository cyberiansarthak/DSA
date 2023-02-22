//SUM OF ALL ELEMENTS IN ARRAY
#include <stdio.h>

int main()
{

    int arr[] = {12, 11, 10, 78, 13, 6};
     int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum+arr[i];
       
      
    }
    printf("Sum of elements %d", sum);
}