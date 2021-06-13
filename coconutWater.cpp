// C++ program to count no of coconuts
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int t;
    int xa, xb, Ra, Rb;
    cin>>t;
    while(t--)
    {
        cin>>xa>>xb>>Ra>>Rb;
        int noOfWater = Ra/xa;
        int noOfPulp = Rb/xb;
        cout<<noOfWater+noOfPulp<<endl;
    }
    return 0;

}