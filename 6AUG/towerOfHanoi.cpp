#include <bits/stdc++.h>
using namespace std;

void toh(int n , char from, char to, char aux)
{
	if(n == 1)
    {
        cout<<"Move 1 from "<<from<<" to "<<to<<endl;
        return;
    }

    toh(n-1, from, aux, to);
    cout<<"Move "<<n<<" from "<<from<<" to "<<to<<endl;
    toh(n-1, aux, to, from);
}

// Driver code
int main()
{
	int noOfDisks;

	cout << "Enter no. of disks ";
    cin>>noOfDisks;

    cout << "The solution is : "<<endl;
	
	toh(noOfDisks, 'A', 'C', 'B');


	return 0;
}

