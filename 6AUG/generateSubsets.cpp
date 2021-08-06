#include <bits/stdc++.h>
using namespace std;

void subsets(string s, int i=0 , string curr="")
{
	if(i == s.length())
    {
        cout<<curr<<" ";
        return;
    }

    subsets(s, i+1, curr + s.at(i));
    subsets(s, i+1, curr);

}

// Driver code
int main()
{
	string str = "ABCD";
	string curr ="";

	cout << "Given string is "<<str<<endl;

    cout << "All the subsets are : "<<endl;
	
	subsets(str);


	return 0;
}

