#include <iostream> 
#include <vector>
#include <algorithm>


// create a function to search to the number in the array which number is taken from user

//cpp style 

int find_element(std::vector<int> &vec , int num )
{
  auto counter = std::find(vec.begin(),vec.end(),num);
  if(counter == vec.end())
  {
    return -1 ;
  }

  return std::distance(vec.begin(), counter) ;
}





// C style 

int func(int* arr, int size ,int num ) 
{
  int index = -1 ;  
  if (arr != nullptr )
  {
    for (int i = 0; i < size; i++)
      {
        /* code */

        if (arr[i] == num)
        {
          index = i ;
        }

      }
  }

  return index;
  
}



int main() {

    int arr[10]{5,7,1,66,8,0,4,230,12,55};

    std::cout << " Enter the number you want : ";
    int num ;

    std::cin>> num ;


    int index = func(arr,10,num);
    if (index == -1)
    {
      /* code */
      std::cout << "Number not found \n";
    }
    else 
    {
      std::cout << " the number index = "<< index <<std::endl;
    }





    



    std::vector<int> vec {5,7,1,66,8,0,4,230,12,55};
    index = find_element(vec,num);
    if (index == -1)
    {
      /* code */
      std::cout << "Number not found \n";
    }
    else 
    {
      std::cout << " the number index = "<< index <<std::endl;
    }
    








  


  return 0;
}
