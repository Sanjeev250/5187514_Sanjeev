#include "demo2.h"

int Leapyear(int year){
    if (year % 400 == 0) {
      return 1;
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      return 0;
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      return 1;
   }
   // all other years are not leap years
   else {
      return 0;
   }
}