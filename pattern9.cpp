/*
                        D  
                        C D
                        B C D
                        A B C D
*/
#include<iostream>
using namespace std;

int main()
{
    int i=1,n;
    cin >> n;
    while (i <= n)
    {
        char ch = 'A'+n-i;
        int j=1;
        while(j<=i)
        {   
            cout <<" " << ch;
            ch ++;
            j ++;
        }
        cout<<endl;
        i++;
    }
}