// C++ program find kth smallest element using sort function
#include <bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int kthSmallest(int arr[] , int n, int k){

    sort(arr, arr+n);


    return arr[k-1];

}


void printArray( int arr[] ,int n)
{
    for( int i=0;i <n ;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    int arr[] = {22, 47, 12, 2, 99, 37, 85, 44, 56};

    
    int n =( sizeof(arr) / sizeof(arr[0]));

    int k;

    cout<<"Enter the KTH index  ";
    cin>>k;
   

    //printing before operation
    printArray(arr, n);
    
    int kthSmallestElem = kthSmallest(arr, n, k);
    
    //printing after operation
    printArray(arr, n);

    cout<<"KTH element " <<kthSmallestElem<<endl;

    return 0;

}

