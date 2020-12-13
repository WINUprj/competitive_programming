#include <stdio.h> 

int linear_search(int *, int); 
int binary_search(int *, int); 

int main(){
  // binary search
  int a[9] = {1, 2, 3, 4, 6, 7, 10, 12, 15}; 
  int b = 15;
  printf("Search result with linear search: %d\n", linear_search(a, b)); 
  printf("Search result with binary search: %d\n", binary_search(a, b)); 
  return 0; 
}

int linear_search(int *a, int b){
  for (int i=0; i < 9; i++){
    if (a[i] == b)
      return i; 
  }
  return -1; 
}

int binary_search(int *a, int b){
  int lo = 0, hi = 8; 
  
  while (lo <= hi){
    int mid = (lo + hi) / 2; 
    if (a[mid] == b)
      return mid; 
    else if (a[mid] < b)
      lo = mid+1; 
    else
      hi = mid-1;
  }
  return -1; 
}

