//Recursive Binary Search


#include <bits/stdc++.h>

using namespace std;

int fnBinSearch(int A[], int low, int high, int k){

    if(high>=low){
        int mid=(low+high)/2;
        if(A[mid]==k){
            return A[mid];
        }
        else if(k>A[mid]){
            return fnBinSearch(A,mid+1,high,k);
        }
        else
            return fnBinSearch(A, low, mid-1,k);
    }
    return -1;
}


int main(){


    int arr[] = {1, 2, 3, 4, 5, 6,7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<fnBinSearch(arr,0,n-1,4);
    return 0;
}

