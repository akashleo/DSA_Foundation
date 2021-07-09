// C++ program reverse the array with iteration
#include<iostream>
#include<climits>
using namespace std;

void printArray( int arr[] ,int n)
{
    for( int i=0;i <n ;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray( int arr[] ,int begin, int end )
{
    int temp;
    if(begin<end)
    {
        temp = arr[begin];
        arr[begin] = arr[end];
        arr[end] = temp;
        reverseArray(arr , begin+1, end-1); 
    }
    else
    {
        return;
    }
}

int main()
{
    int arr[] = { 1, 3, 5, 6 , 7, 9};

    
    int n =( sizeof(arr) / sizeof(arr[0]));
    int begin =0;
    int end = n-1;
   

    //printing before operation
    printArray(arr, n);
    
    reverseArray(arr, begin, end);
    
    //printing after operation
    printArray(arr, n);

    return 0;

}

