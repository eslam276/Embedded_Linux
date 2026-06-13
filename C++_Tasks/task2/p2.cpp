#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   
    int arrsize , query , k , i , j , num ;
    cin>>arrsize>>query;
    int**ParenrtArr =(int**) malloc(arrsize*sizeof(int*));
    int*result = (int*)malloc(query*sizeof(int));


    for ( i = 0; i < arrsize; i++)
    {
      /* code */
      cin>>k;
      ParenrtArr[i] =(int*) malloc(k*sizeof(int));

      for (int j = 0; j < k; j++)
      {
        /* code */
        cin>>ParenrtArr[i][j];
      }

      
    }
    
    for ( k = 0; k < query; k++)
    {
      /* code */
      cin>>i>>j;
      result[k] = ParenrtArr[i][j];
    }
    for ( k = 0; k < query; k++)
    {
      /* code */
      cout<<result[k]<<endl;
    }

    for ( i = 0; i < arrsize; i++)
    {
      /* code */
      free(ParenrtArr[i]);
    }
    free(ParenrtArr);
    free(result);
    


    
    
    return 0;
}
