#include <iostream>
using namespace std;

int lengthOfIntervalIntersection(int a, int b, int c, int d);

int main(void)
{
int t;
int a, b, c, d;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> a >> b >> c >> d;
        cout << lengthOfIntervalIntersection( a, b, c, d ) << endl;
    }
    return 0;
}

int lengthOfIntervalIntersection(int a, int b, int c, int d)
{
  int output;

  if(a > c)
  {
    if(d >= b)
    {
      output = b - a;
    }
    else
    {
      if(a <= d)
      {
        output = d - a;
      }
      else
      {
        output = -1;
      }
    }
  }
  else
  {
    if(b >= d)
    {
      output = d - c;
    }
    else
    {
      if(c <= b)
      {
        output = b - c;
      }
      else
      {
        output = -1;
      }
    }
  }

  return output;
}
