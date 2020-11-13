//Simple iterative approach
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


//Divide and conquer approach
#include <bits/stdc++.h>

using namespace std;

static int arr[100];

void MaxMin(int a[],int low,int high, int *max, int *min){

    int mid,max1,max2,min1,min2;
    if(high-low == 1)
    {
        if(a[low] > a[high]){
            *max = a[low];
            *min = a[high];
        }
        else{
            *max = a[high];
            *min = a[low];
        }
    }
    else if(low == high){
        *min = *max = a[low];
    }
    else if(low<high)
    {
        mid=(low+high)/2;
        MaxMin(a,low,mid,&max1,&min1);
        MaxMin(a,mid+1,high,&max2,&min2);
            if(max1 > max2)
                *max = max1;
            else
                *max = max2;
            if(min1 < min2)
                *min = min1;
            else
                *min = min2;
    }
}

int main(){


    int arr[] = {1, 2, 3, 4, 5, 6,7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int Min=arr[0];
    int Max=arr[0];

    //MinMax(0,n-1,Min, Max);
    MaxMin(arr, 0, n-1, &Max, &Min);
    cout<<Max<<"\t"<<Min;
    return 0;
}
//Make use of global variable if afraid of using pointer

