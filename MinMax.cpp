Simple iterative approach
#include <bits/stdc++.h>

using namespace std;

void MinMax(int arr[], int n){

    // Initialize both max and min to first element of array
    int Min=arr[0];
    int Max=arr[0];
    // Traverse through the array, and compare max and min with other elements of array, then update it 
    for(int i=1; i<n;i++){
        if(arr[i]>Max)
            Max=arr[i];
        else if(arr[i]<Min)
            Min=arr[i];
    }

    cout<<Max<<"\t"<<Min;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6,7};
    int n = sizeof(arr)/ sizeof(arr[0]);

    MinMax(arr,n);
    return 0;
}
