//implementing linear search in an unsorted array
//It is an iterative algorithm

#include<iostream>
#include<stdlib.h>
using namespace std;

//time complexity O(n)
//searches iteratively
int linearSearch(int a[], int size,int key)
{
  for(int i = 0; i < n; i++)
  {
    if(a[i] == key)
    {
      //formatted output
      printf("%d is found at %d position",key,i+1);
      break;
    }
  }
}

int main(){
  int key,size;
  // int a[]={1,2,3,4,7,5,6,10,0,-1};
  // int size=sizeof(a)/sizeof(a[0]);
  cout<<"Enter the size of an array ";
  cin>>size;
  cout<<"\nEnter the array elements :";
  int a[size];
  for(int i=0;i<size;i++){cin>>a[i];}
  cout<<"\nEnter the element to be searched : ";
  cin>>key;
  int result=linearSearch(a,size,key);
  if(result==-1){cout<<"No such element";}
  else cout<<"Position of "<<key<<" is "<<result+1;
  return 0;
}
