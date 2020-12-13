#include <stdio.h>

// function prototypes
int *max_changes(int); 

int main(){
    int n, *coin; 
    scanf("%d", &n); 
    coin = max_changes(n); 
    printf("Changes will be in 25: %d, 10: %d, 5: %d, 1: %d\n", coin[0], coin[1], coin[2], coin[3]); 
    return 0;
}

// functions 
int *max_changes(int a){
    int curr = a; 
    static int coins[4]; 

    if (curr >= 25){
        coins[0] = curr / 25; 
        curr -= coins[0] * 25; 
    }
    if (curr >= 10){
        coins[1] = curr / 10;
        curr -= coins[1] * 10; 
    }
    if (curr >= 5){
        coins[2] = curr / 5; 
        curr -= coins[2] * 5; 
    }
    if (curr >= 1)
        coins[3] = curr; 
    return coins; 
}
