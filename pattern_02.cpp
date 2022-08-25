/* 
			  1
			2 3 2
		      3 4 5 4 3
		    4 5 6 7 6 5 4
*/

#include<iostream>
using namespace std;

int main()
{
  int r, c, s, n = 4, k = 1;

      //  For Row 
  for (r = 1; r <= n; r++)
    {
      //  For Space
      for (s = r; s < n; s++)
	{
	  cout << " ";
	}
      //  For 1st Number 
	int t=r;
      for (c = 1; c <= r; c++)
	{
	  cout << t++;
	}
      //  For 2st Number
      cout << endl;
    }
  return 0;
}
