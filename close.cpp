#include <iostream>
using namespace std;

int closestNumber(int n, int m);

int main(void)
{
int t;
int n, m;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> n >> m;
        cout << closestNumber( n, m ) << endl;
    }
    return 0;
}
int closestNumber(int n, int m)
{
  int plus;
  int str = n;
  int over, less;
  if(n < 0)
  {
    n *= (-1);
  }
  if(m < 0)
  {
    m *= (-1);
  }

  plus = m;

  while(1)
  {
    if(m >= n)
    {
      break;
    }
    m += plus;
  }
  over = m;
  less = m - plus;
  if(over - n > n - less)
  {
    m = less;
  }
  else
  {
    m = over;
  }

  if(str < 0)
  {
    m *= (-1);
  }

  return m;
}
