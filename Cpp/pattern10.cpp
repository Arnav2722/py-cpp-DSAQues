// OUTPUT:-
// 1, starts from 1
// 2 1, starts from 2
// 3 2 1, starts from 3
// 4 3 2 1, starts from 4
// lOGIC :- n = input, rows = n; Now see that every rows has the 1st element starting from the row number only. If we want to reverse the numbers in the rows, we will simply subtract j from i and then add 1 to that.

// Lest take an example, n=4. iteration will start from 1, now when I =1 and j =1 then 1-1+1=1, seems correct. then going to 2nd iteration, where i=2 and j=1, mind you, j will run 2 iterations. So, 2-1+1 = 2 and then 2-2+1=1, and so on. That means this formula will work.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (i - j) + 1 << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
