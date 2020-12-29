#include <stdio.h>

int get_median(int *, int *, int, int, int, int, int);
void get_binary_float(float);  

int main(){
    // int A[6] = {3, 5, 8, 10, 17, 19}; 
    // int B[6] = {1, 3, 6, 7, 11, 13};
    
    // printf("A median of the two arrays is: %d", get_median(A, B, 0, 5, 0, 5, 6));
    
    float a = 12.256; 
    get_binary_float(a); 
    return 0; 
}

int get_median(int *a, int *b, int sa, int ea, int sb, int eb, int n){
    if (n == 1){
        if (a[sa] <= b[sb])
            return a[sa]; 
        else 
            return b[sb]; 
    }
    
    else {
        int mid_a = (sa + ea) / 2;  
        int mid_b = (sb + eb) / 2;

        if (a[mid_a] == b[mid_b]){
            return a[mid_a]; 
        } 
        else if (a[mid_a] < b[mid_b]){
            sa = (sa + ea) / 2 + 1;
            eb = mid_b; 
            get_median(a, b, sa, ea, sb, eb, n / 2); 
        }
        else {
            ea = mid_a; 
            sb = (sb + eb) / 2 + 1; 
            get_median(a, b, sa, ea, sb, eb, n / 2); 
        }
    }
}

void get_binary_float(float val){
    int b = *(int *)&val;
    char res[33]; 
    for (int i=0; i < 32; i++){
        if (b % 2 == 0) res[31-i] = '0'; 
        else res[31-i] = '1';
        b /= 2;  
    }
    res[32] = '\0'; 
    printf("%s", res); 
}