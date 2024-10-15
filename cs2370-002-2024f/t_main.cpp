#include <iostream>
#include "TimeHrMn.h"
using namespace std;

int main() {
  TimeHrMn t1(2, 34); 
  TimeHrMn t2(3, 45); 
  TimeHrMn t3 = t1 + t2;
  // t1.operator+(t2)
  TimeHrMn t4 = t1 + 3;
  // t1.operator+(3)
  TimeHrMn t5 = 3 + t1;
  // operator+(3, t1)

  t1.Print();
  t2.Print();
  t3.Print();
  t4.Print();
  t5.Print();
  
  return 0;
}