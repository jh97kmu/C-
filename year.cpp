#include <iostream>
using namespace std;

int isLeapYear(int year);

int main(void)
{
int t;
int year;
    cin >> t;
    for(int i=0; i<t; i++)
{
        cin >> year;
        cout << isLeapYear( year ) << endl;
    }
    return 0;
}

int isLeapYear(int year)
{
  int output;

  if(year%4 == 0)
  {
    if(year%100 == 0)
    {
      if(year%400 == 0)
      {
        output = 1;
      }
      else
      {
        output = 0;
      }
    }
    else
    {
      output = 1;
    }


  }
  else
  {
    output = 0;
  }

  return output;
}
