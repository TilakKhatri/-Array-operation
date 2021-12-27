// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  
   int A[5] = {1,4,5,6,3};
   int n = 5;
   int element = 4500;
   int pos = 5;
   int i = n;
   // increase a size;
   n = n+1;
   while(i>pos)
   {
       A[i] = A[i-1];
       i= i-1;
   }
   A[pos] = element;
   
for(int i = 0;i<n;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
