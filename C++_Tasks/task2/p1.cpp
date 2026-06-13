#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//You will be given an array of integers and you have to print the integers in the reverse order.
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int num ; 
    cin>>num;
    int*arr =(int*) malloc(num*sizeof(int));
    for (int i = 0; i < num; i++)
    {
      /* code */
      cin>>arr[i];
    }
    for (int i = num-1; i >= 0; i--)
    {
      /* code */
      cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
