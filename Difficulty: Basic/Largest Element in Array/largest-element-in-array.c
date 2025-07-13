#include<limits.h>
int largest(int arr[], int n) {
    // Code Here
    if(n<=0)
    {
        return INT_MIN;
    }
    int max = INT_MIN;
     
     for (int i = 0; i<n; i++)
     {
         if(arr[i] > max)
         {
             max = arr[i];
         }
     }
     return max;
}