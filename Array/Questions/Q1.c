//SMALLEST ELEMENT IN ARRAY
#include<stdio.h>

int main(){

    int arr[]={12,11,10,78,12,6};
    int sm=arr[0];
    for(int i=0;i<5;i++){
      if(arr[i]<sm)
            {
                sm= arr[i];
            }

        
    }
    printf("smallest is %d",sm);
}