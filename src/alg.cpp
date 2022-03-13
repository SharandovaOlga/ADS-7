// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  bool a = true;
    for (int j = 1; j < value; j++) {
      if ((value % j == 0) && (j != 1)) {
        a = false;
        break;
      }  
    }
    return (a);
}

uint64_t nPrime(uint64_t n) {
  int b = 1;
  int y = 0;
  int j = 2;
  while (y < n) {
    bool a = true;
    for (int sr = 2; sr < j; sr++) {
      if (j %r sr == 0) {
        a = false;
        break;
      }
    }
      if (a) {
        b = j;
        y++;
      }
      j++;
  }
  return(b);
}

uint64_t nextPrime(uint64_t value) {
  int sr = value;
  while (true) {
    bool a = true;
    sr++;
    for (int j = 2; j< sr; j++) {
      if (sr % j == 0){
        a = false;
        break;
      }
    }
    if (a) {
      return (sr);
      break;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t j = 2; j < hbound; j++) {
    if (checkPrime(j)) {
      sum += j;
    }
  }
  return sum;
}
