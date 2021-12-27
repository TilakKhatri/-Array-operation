// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
   int A[5] = {1,4,5,6,3};
   int n = 5;
   int pos = 2; // you can take position from user 
   int i = n;
  // Here we replace a pos of delection index with next index.
for(int i = pos;i<n;i++)
{
    A[i] = A[i+1];
}
  // after removing the pos we need to reduce a size
for(int i = 0;i<n-1;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
