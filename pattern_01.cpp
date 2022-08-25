/*
    1 3 5 7
    3 5 7 1
    5 7 1 3
    7 1 3 5
*/
#include<iostream>
using namespace std;

int main()
{
    int r,c,n=4;
    
    for(r=1; r <= (n*2-1); r++)
    {
        for(c=r; c <= (n*2-1); c++)
        {
            cout << c;
        }
            cout << endl;
    }
    return 0;
} 
