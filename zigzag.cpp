#include <iostream>
using namespace std;

void outputZigZag(int n, int k);

int main(void)
{
int t;
int n, k;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> n >> k;
        outputZigZag( n, k );
    }
    return 0;
}

void outputZigZag(int n, int k)
{
  int str=1;
  for(int i=0;i<k;i++)
  {
    str +=i;
  }

  if(k%2==0)
  {
    str += (k-1);
  }



  for(int i=0;i<k;i++)
  {

    if(k%2==0) // 짝수
    {
      cout << str;
      if(i<k-1)
      {
        cout << "*";
      }
      --str;
    }
    else // 홀수
    {
      cout << str;
      if(i<k-1)
      {
        cout << "*";
      }
      ++str;
    }

  }

  cout << endl;
  return;

}
