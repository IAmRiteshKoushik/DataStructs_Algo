#include<stdio.h>

int main(){
    
    // Getting user inputs
    int rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    
    // Printing stars -- Hollow
    for (int i = 1; i <= rows-1; i++){
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        // Line Changing
        printf("\n");
    }
    
    // Printing the final row
    for(int i = rows; i > 0; i--){
        printf("*");
    }
    printf("\n");
    return(0);
}