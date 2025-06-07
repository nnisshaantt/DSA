#include <iostream>

// • This solution does not work if the given array is read only.
// • This solution will work only if all the array elements are positive.
// • If the elements range is not in 0 to # − 1 then it may give exceptions.

int SearchDuplicatesInArrayByNegation(int arr[],int n, int data){
  for(int i = 0; i < n; i++){

  }
  return -1;
}

int main() {
    int arr[] = {1,3,5,7,9,11,12};
    bool index = SearchDuplicatesInArrayByNegation(arr,7,4);
    std::cout << "\n" << "Do Duplicates exist : " << index ? "" : "";
    return 0;
}