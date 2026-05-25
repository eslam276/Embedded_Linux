#include <iostream> 
#include <vector>
#include <algorithm>


// Write a lambda function to calculate the square of a given number.



int main() {


  auto square = [](int n ){ return n*n ; };
  std::cout<< square(5);


  return 0;
}
