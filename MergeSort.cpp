#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[], int l, int m, int r){
    int len1=m-l+1;
    int len2=r-m;
    int leftArray[len1];
    int rightArray[len2];
    for(int i=0;i<len1;i++){
        leftArray[i]=arr[l+i];
    }
    for(int i=0;i<len2;i++){
        rightArray[i]=arr[m+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < len1 && j < len2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        }
        else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < len1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < len2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}
int main(){
    int arr[] = {1, 22, 13, 42, 56, 61, 73, 21, 4};
    int n = sizeof(arr)/ sizeof(arr[0]);
   
    MergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
