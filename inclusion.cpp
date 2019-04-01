#include <iostream>
using namespace std;

int testInclusion(int, int, int);

int main(void)
{
int t;
int a, b, m;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> a >> b >> m;
        cout << testInclusion( a, b, m ) << endl;
    }
    return 0;
}

int testInclusion(int a, int b, int m)
{
  if(m >= a)
  {
    if(b >= m)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
}
