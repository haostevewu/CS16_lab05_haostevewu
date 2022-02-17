// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
#include "utility.h"
#include <iostream>

bool isOdd(int x) {
  if(x%2 == 0){	
  	return false;
  }else{
  	return true;
  } 
}
bool isEven(int x) {
  if(x%2 != 0){	
  	return false;
  }else{
	return true;
  }
}
bool isPrime(int x) {
  if(x < 2){
	  return false;
  }
  if(x == 2){
	  return true;
  }
  for(int i = 2; i < x; i++){
  	if(x%i == 0){
		return false;
		break;
	}
  }
  return true;
}
