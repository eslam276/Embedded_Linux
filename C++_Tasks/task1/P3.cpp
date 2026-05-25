#include <iostream> 
#include <vector>
#include <algorithm>


// delete number in array




int main() {

   
  std::vector<int> vec {5,7,1,66,12,8,0,4,230,12,55};

  vec.erase(std::remove(vec.begin(),vec.end(),12),vec.end());

  for(int num : vec)
  {
    std::cout<< num <<std::endl ;
  }

  // c++20 and later
  /*
      std::erase(vec,3);
  */


  


  return 0;
}
