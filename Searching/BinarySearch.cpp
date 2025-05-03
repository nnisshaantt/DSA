#include <iostream>

//Iterative Approach
int BinarySearchItr(int arr[],int n, int data){
  int low = 0;
  int high = n-1;

  while(low <= high){
    int mid = low + (high - low)/2;
    if(arr[mid] == data){
      return mid;
    }else if(arr[mid] > data){
      high = mid - 1;
    }else low = mid + 1;
  }
  return -1;
}

//Recursive Approach
int BinarySearchRec(int arr[],int low,int high, int data){
  if(low > high) return - 1;
  int mid = low + (high - low)/2;
  if(arr[mid] == data){
    return mid;
  }
  else if(arr[mid] > data){
    return BinarySearchRec(arr,low,mid - 1,data);
  }else return BinarySearchRec(arr,mid + 1,high,data);
}

int main() {
    int arr[] = {1,3,5,7,9,11,12};
    int indexItr = BinarySearchItr(arr,7,4);
    int indexRec = BinarySearchRec(arr,0,6,12);
    std::cout<<"\n"<<"This is index (Rec): "<<indexRec<<"\n";
    std::cout<<"\n"<<"This is index (Itr): "<<indexItr<<"\n";
    return 0;
}