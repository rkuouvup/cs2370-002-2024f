#include "TimeHrMn.h"

TimeHrMn::TimeHrMn(int h, int m) {
  int carry = 0;
  if (m < 0)  {
    this->minute = 0;
  } else if (m >=0 && m < 60) {
    this->minute = m;
  } else {
    carry = m / 60;
    this->minute = m % 60;
  }
  this->hour = h + carry;
}

TimeHrMn TimeHrMn::operator+(TimeHrMn other) {
  TimeHrMn t(this->hour + other.hour, this->minute + other.minute);
  return t;
}

TimeHrMn TimeHrMn::operator+(int h) {
  TimeHrMn t(this->hour + h, this->minute);
  return t;
}

void TimeHrMn::Print() const {
  cout << "H: " << hour << ", M: " << minute << endl;
}

TimeHrMn operator+(int h, TimeHrMn other) {
  TimeHrMn t(h + other.hour, other.minute);
  return t;
}