#include <iostream> 
#include <vector>
#include <algorithm>


// Use lambda functions to sort an array of integers in ascending and descending order.



int main() {


  std::vector<int> vec {5, 2, 9, 1, 3};

  std::sort(vec.begin(),vec.end(),[](int a , int b ){return a < b ; });
  std::cout << "Ascending: ";

    for (int n : vec) std::cout << n << " ";
    std::cout << "\n";
  

  std::sort(vec.begin(),vec.end(),[](int a , int b ){return a > b ; });
  std::cout << "Descending: ";

    for (int n : vec) std::cout << n << " ";
    std::cout << "\n";
  
  




  return 0;
}
