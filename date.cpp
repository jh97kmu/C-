#include <iostream>
using namespace std;

int leapYear(int);
int calculate(int, int, int*);

int main()
{
  int num, year, month, day;
  int monthList[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
  cin >> num;

  for(int i=0;i<num;i++)
  {
    cin >> year >> month >> day;

    if(leapYear(year) == 1) // 윤년
    {
      monthList[1] = 29;
    }
    else
    {
      monthList[1] = 28;
    }

    cout << calculate(month, day, monthList) << endl;
  }

  return 0;
}

int leapYear(int year) // 1 윤년 0 평년
{
  if(year%4 == 0)
  {
    if(year%100 == 0)
    {
      if(year%400 == 0)
      {
        return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}

int calculate(int month, int day, int *monthList)
{
  int output = 0;
  for(int i=0; i< month-1;i++)
  {
    output += monthList[i];
  }

  output += day;

  return output;
}
