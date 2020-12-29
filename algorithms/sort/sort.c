#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void switch_values(int *, int *); 
void shuffle(int *, int, int); 
void print_arr(int *, int); 
void bubble_sort(int *, int);
void selection_sort(int *, int, int);
// void merge_sort(); 
// void merge(); 

int main(){
  // add stuffs
  int a[10] = {10, 8, 23, 3, 4, 90, 54, 12, 2, 7}; 
  size_t len = sizeof(a) / sizeof(a[0]); 
  time_t t; 
  // initialize the randomizer 
  srand((unsigned) time(&t)); 
  // call shuffle 
  shuffle(a, 5, len); 
  // bubble sort
  bubble_sort(a, len); 
  // print array out 
  printf("Bubble sort: "); 
  print_arr(a, len);
  
  // call shuffle again
  shuffle(a, 10, len);
  // selection sort
  selection_sort(a, len, 0); 
  // print array out
  printf("Selection sort: ");
  print_arr(a, len);

  return 0; 
}

void switch_values(int *a, int *b){
  // switch values 
  int temp = *a; 
  *a = *b; 
  *b = temp; 
}

void shuffle(int *a, int times, int len){
  for (int i=0; i < times; i++){
    int x = rand() % len, y = rand() % len; 
    switch_values(&a[x], &a[y]); 
  }
}

void print_arr(int *a, int len){
  for (int i=0; i < len; i++){
    printf("%d ", a[i]);
  }
  printf("\n"); 
}

// Average case: Theta(n^2)
void bubble_sort(int *a, int len){
  for (int i=0; i < len-1; i++){
    for (int j = 0; j < len-i-1; j++){
      if (a[j] > a[j+1]){
        switch_values(&a[j], &a[j+1]);  
      }
    }
  }
}

void selection_sort(int *a, int len, int asc){
  int max = 0;
  for (int i=0; i < len-1; i++){
    max = i; 
    for (int j=i+1; j < len; j++){
      if (a[max] > a[j] && asc){
        max = j; 
      }
      else if (a[max] < a[j] && !asc){
        max = j; 
      }
    }
    int temp = a[max]; 
    a[max] = a[i]; 
    a[i] = temp; 
  }
}





