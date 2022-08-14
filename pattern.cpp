/*  Here made this pattern -
                            1
                            23
                            345
                            4567
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
        int val = i;
        while(j <= i)
        {
            cout << val;
            val += 1;
            j++;
        }
        cout<<endl;
        i++;
    }
}