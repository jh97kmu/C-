#include <iostream>

using namespace std;

int main()
{
  int var = 65;
  int *iptr = &var;

  cout << "iptr = " << iptr << endl;
  cout << "*ipt = " << *iptr << endl;

  char *cptr;
  cptr = (char *)&var;

  cout << "cptr = " << (void *)cptr << endl;
  cout << "*cptr = " << cptr << endl;

  return 0;
}
