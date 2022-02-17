// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int  add( const int (&arr)[2], int size)
{
    int sum=0;
    for (int i =0 ; i< size; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}
int main() {
    // Write C++ code here
   
  int array[]={1,2};
  cout<<add(array,2)<<endl;
    return 0;
}
