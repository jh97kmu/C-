#include <iostream>
using namespace std;

int searchZero(int*, int);

int main()
{
  int t, n;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    cin >> n;
    int num[n];
    for(int j=0;j<n;j++)
    {
      cin >> num[j];
    }
    cout << searchZero(num, n) << endl;
  }

  return 0;
}

int searchZero(int *num, int n)
{
  int num2=0, num5=0;
  for(int i=0;i<n;i++)
  {
    while(num[i]%2==0)
    {
      num[i] = num[i] / 2;
      num2++;
    }

    while(num[i]%5==0)
    {
      num[i] = num[i] / 5;
      num5++;
    }
  }

  if(num2 < num5)
  {
    return num2;
  }
  else
  {
    return num5;
  }
}
