// C++ program reverse the array with iteration
#include<iostream>
#include<climits>
using namespace std;

struct Pair
{
  int min;
  int max;
}; 

struct Pair findMaxMin(int a[] , int n){

    struct Pair storage;

    if( n == 1){
        storage.max=a[0];
        storage.min=a[0];
    }
    if(n>1)
    {
        if(a[0]>a[1]){
            storage.max=a[0];
            storage.min=a[1];
        }
        else
        {
            storage.max=a[1];
            storage.min=a[0];
        }
    }

    for(int i=2;i<n;i++)
    {
        if(storage.max<a[i])
        {
            storage.max = a[i];
        }
        if(storage.min>a[i])
        {
            storage.min = a[i];
        }
    }

    return storage;

}



int main()
{
    int arr[] = { 77, 31, 56, 61 , 97, 91, 25, 73};

    
    int n =( sizeof(arr) / sizeof(arr[0]));
    

    struct Pair minmax;
    minmax = findMaxMin(arr, n);

    cout<<"MIN element - " << minmax.min<<endl;
    cout<<"MAX element - " << minmax.max<<endl;

    return 0;

}

