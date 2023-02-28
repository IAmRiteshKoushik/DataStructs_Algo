#include<stdio.h>

int main(){
    
    // Getting user inputs
    int rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    
    // Printing stars
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        // Line Changing
        printf("\n");
    }
    return(0);
}