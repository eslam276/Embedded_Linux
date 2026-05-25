#include <iostream> 
#include <vector>
#include <algorithm>


// merge two arrays together




int main() {

   
  std::vector<int> vec {5,7,1,66,12,8,0,4,230,12,55};
  std::vector<int> vec2 {1,2,3,4,5,6,7,8};

  // Reserve memory beforehand to prevent multiple reallocations (good performance practice)
    vec.reserve(vec.size() + vec2.size());
    vec.insert(vec.end(),vec2.begin(),vec2.end());

  for(int num : vec)
  {
    std::cout<< num <<std::endl ;
  }

  


  


  return 0;
}
