#include <iostream>
using namespace std;

int reverse(int);

int main()
{
  int num, n;
  cin >> num;

  for(int i=0;i<num;i++)
  {
    cin >> n;
    cout << reverse(n) << endl;
  }
  return 0;
}
int reverse(int n)
{
  int cnt=1, res, output=0;

  if(n < 10)
  {
    return n;
  }
  else  {  }

  res = n;
  while(res >= 10)
  {
    res = res / 10;
    cnt++;
  }
  int ary[cnt];
  for(int i=0;i<cnt;i++)
  {
    ary[i] = n % 10;
    n = (n - ary[i]) / 10;
  }
  for(int i=0;i<cnt;i++)
  {
    int ten=1;
    for(int j=1;j<cnt-i;j++)
    {
      ten = ten * 10;
    }
    output += ten * ary[i];
  }
  return output;
}
