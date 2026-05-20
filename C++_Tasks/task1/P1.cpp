#include <iostream> 
#include <vector>
#include <algorithm>


// 1- create a function to ﬁnd the maximum number of array

//cpp style 

int Find_Max(std::vector<int> vec)
{

    if (!vec.empty())
    {
      /* code */
      
      return *std::max_element(vec.begin(),vec.end());
    }
    

}




// C style 

int func(int* arr, int size) 
{
  int max = arr[0];
  
  if (arr != nullptr )
  {
    for (int i = 0; i < size; i++)
      {
        /* code */

        if (arr[i] > max)
        {
          max = arr[i];
        }

      }
  }

  return max;
  
}



int main() {



  int arr[10]{5,7,1,66,8,0,4,230,12,55};

  std::cout<< "max: " << func(arr, 10)<< std::endl;




  std::vector<int> vec = {5,7,1,66,8,0,4,230,12,55};

  std::cout<< "max: " << Find_Max(vec)<< std::endl;



  


  return 0;
}
