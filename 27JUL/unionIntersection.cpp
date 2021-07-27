// C++ code for program
// to cyclically rotate
// an array by one
#include <bits/stdc++.h>
using namespace std;

void getUnion(int a[], int n, int b[], int m)
{
	set<int> u;

    for( int i =0; i<n;i++)
    {
        u.insert(a[i]);
    }
    for( int i =0; i<m;i++)
    {
        u.insert(b[i]);
    }

    cout << "The union set of both arrays is :" << endl;
    for (auto itr = u.begin(); itr != u.end(); itr++)
        cout << *itr << " ";


}

void getIntersection(int a[], int n, int b[], int m)
{
	set<int> x;
    set<int> y;

    for( int i =0; i<n;i++)
    {
        y.insert(a[i]);
    }
    for( int i =0; i<m;i++)
    {
        if(y.count(b[i]))
            x.insert(b[i]);
    }

    cout << "The intersection set of both arrays is :" << endl;
    for (auto itr = x.begin(); itr != x.end(); itr++)
        cout << *itr << " ";
    

}


int main()
{
    int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };
 
    getUnion(a, 9, b, 10);
    cout<<endl;
    getIntersection(a, 9, b, 10);
}

