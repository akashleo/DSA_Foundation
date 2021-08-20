// C++ program to count of steps until one
// of the two numbers become 0.
#include<bits/stdc++.h>
using namespace std;

// Returns count of steps before one
// of the numbers become 0 after repeated
// subtractions.
int countSteps(int x, int y)
{
    // If y divides x, then simply return
    // x/y.
    if (x%y == 0)
        return x/y;

    // Else recur. Note that this function
    // works even if x is smaller than y because
    // in that case first recursive call exchanges
    // roles of x and y.
    return x/y + countSteps(y, x%y);
}

// Driver code
int main()
{
   int x = 100, y = 19;
   cout << countSteps(x, y);
   return 0;
}
