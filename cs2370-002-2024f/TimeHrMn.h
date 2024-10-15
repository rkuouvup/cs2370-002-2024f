#ifndef TIMEHRMN_H
#define TIMEHRMN_H

#include <iostream>
using namespace std;

class TimeHrMn {
  private:
    int hour;
    int minute;
  public:
    TimeHrMn(int h=0, int m=0);
    TimeHrMn operator+(TimeHrMn other);
    TimeHrMn operator+(int h);
    void Print() const;

    friend TimeHrMn operator+(int h, TimeHrMn other);
};

TimeHrMn operator+(int h, TimeHrMn other);



#endif