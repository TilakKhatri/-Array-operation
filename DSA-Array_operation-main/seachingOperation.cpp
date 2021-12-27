// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// binary search using recursion method:
int binarySearchRec(int A[],int l,int r, int key)
{
    if(l<=r)
    {
        int mid = (l+r)/2;
        if(A[mid] == key){
              cout<<"Equal to"<<endl; 
            return mid; // This is base case
        }
        else if(A[mid]<key)
        {
              cout<<"key greater"<<endl;
            return binarySearchRec(A,mid+1,r,key);
        }
          cout<<"key less"<<endl;
        return binarySearchRec(A,l,mid-1,key);
    }
    return -1;
}

// binary search using iteration method
int binarySearchIter(int A[],int l,int r,int key)
{
   if(l<=r)
   {
   
    int mid = (l+r)/2;
  if(key == A[mid]){
    
       return mid;
   }
else if(key < A[mid]){
  
    r = mid-1;
}
l = mid+1;
   }
   return -1;
}
int main() {
    int key = 10;
int array [] = {1,3,5,6,7};
int size = sizeof(array)/sizeof(array[0]);
int position = binarySearchIter(array,0,size-1,key);
int recPos = binarySearchRec(array,0,size-1,key);
if( position && recPos == -1)
{
    cout<<"The key "<<key<<" is not found in this array."<<endl;
}
else {
    cout<<key<<" found at "<<recPos<<"."<<endl;
}
return 0;
}
