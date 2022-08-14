/*
    Here we made this pattern  -    1
                                    21
                                    321
                                    4321
                                    54321
*/

#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cin >> n;

    while (i <= n)
    {
        int j=1;
                                        // or int val = i;
        while(j<=i)
        {
            cout << (i-j+1);            // or cout << val;
            j++;                        // or val -= 1;
        }
        cout<<endl;
        i++;
    }
}