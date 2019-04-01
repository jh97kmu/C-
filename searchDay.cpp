#include <iostream>
using namespace std;

int isLeapYear(int);

int main()
{
  int t, year, day, leap;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    day = 5;
    cin >> year;
    for(int j=1582;j<year;j++)
    {
      if(isLeapYear(j)==0)
      {
        day++;
      }
      else
      {
        day += 2;
      }
    }

    cout << day % 7 << endl;
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
