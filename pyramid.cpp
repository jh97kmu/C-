#include <iostream>
using namespace std;

void outputPyramid(int n, int k);

int main(void)
{
int t;
int n, k;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> n >> k;
        outputPyramid( n, k );
    }
    return 0;
}
void outputPyramid(int n, int k)
{
  int output = k;
  for(int i=0;i<k;i++)
  {
    cout << output;

    if(i<k-1)
    {
      cout << "*";
    }

    output += (n-i-1);
  }
  cout << endl;


  return;
}
