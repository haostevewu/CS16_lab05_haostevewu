#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  // Fill this in with exactly four tests that determine whether your
  // code for sumOdds() correctly sums up all the odd numbers in
  // arrays of various sizes.  Include both positive, negative and
  // zero values in your test arrays.
  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(15,sumOdds(fiveThrees,5),"sumOdds(fiveThrees,5)");

  int zeros[3]={0,0,0};
  assertEquals(0,sumOdds(zeros,3),"sumOdds(zeros,3)");

  int fiveInts[5]={12,3,4,-9,5};
  assertEquals(-1,sumOdds(fiveInts,5),"sumOdds(fiveInts,5)");
  assertEquals(3,sumOdds(fiveInts,3),"sumOdds(fiveInts,3)");

  return 0;
}
