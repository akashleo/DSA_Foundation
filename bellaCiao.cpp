// C++ program to count no of coconuts
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int t;
    int D,d,P,Q;
    cin>>t;
    while(t--)
    {
        cin>>D>>d>>P>>Q;

        int intervals = D/d;
        int remainderDays = D%d;

        int totalP = intervals* P;
        int totalQ = intervals* (intervals-1)* Q/2;
        int totalMoneyPrinted = d*(totalP + totalQ) + remainderDays*(P + intervals*Q);

        cout<<totalMoneyPrinted<<endl;
    }
    return 0;

}