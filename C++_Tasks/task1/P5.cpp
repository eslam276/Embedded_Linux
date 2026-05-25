#include <iostream> 
#include <vector>
#include <algorithm>


// ﬁnd the even and odd numbers in the array




int main() {

   
  std::vector<int> vec {5,7,1,66,12,8,0,4,230,12,55};
  std::vector<int> even;
  std::vector<int> odd ;


  even.reserve(vec.size()/2);
  odd.reserve(vec.size()/2);

  for(int num : vec)
  {
    if (num%2==0)
    {
      /* code */
      even.push_back(num);
    }
    else
    {
      odd.push_back(num);
    }
    
  }

  


  


  return 0;
}
