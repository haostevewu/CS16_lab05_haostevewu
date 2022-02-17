#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  if(size < 1){
	  std::cerr << "ERROR: minOfArray called with size < 1" << std::endl;
	 exit(1);
  } 
  int sumOdd = 0;
  for(int i = 0; i < size; i++){
  	if(isOdd(a[i]) == true){
		sumOdd += a[i];
	}
  }
  return sumOdd;
}
