#include <iostream>
using namespace std;

int main()
{
  int origNum, num, rem, sum = 0;
cin >> origNum;

  num = origNum;

  while(num != 0)
  {
      digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
  }

  if(sum == origNum)
    cout << origNum << " yes";
  else
    cout << origNum << " no";

  return 0;
}
