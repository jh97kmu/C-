#include <iostream>
using namespace std;

int main()
{
  int num, total, output;
  cin >> num;

  int candidateNum;
  for(int i=0;i<num;i++)
  {
    total = 0;
    output = 0;
    cin >> candidateNum;
    int candidate[candidateNum];
    for(int j=0;j<candidateNum;j++)
    {
      cin >> candidate[j];

      total += candidate[j];
    }
    for(int j=0;j<candidateNum;j++)
    {
      if(candidate[j] == 0)
      {
        continue;
      }
      if(total/candidate[j] < 2)
      {
        output = j+1;
        break;
      }
    }

    cout << output << endl;

  }
  return 0;
}
