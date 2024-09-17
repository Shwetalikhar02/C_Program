#include<stdio.h>
int main(){// RECTANGULAR PATTERN
    // int row, col;
    // printf("Enter row:");
    // scanf("%d", &row);
    // printf("Enter columns:");
    // scanf("%d", &col);

    // for(int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //HOLLOW REACTANGLE PATTERN
    //  int row, col;
    //  printf("Enter row:");
    //  scanf("%d", &row);
    //  printf("Enter columns:");
    //  scanf("%d", &col);

    //  for(int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         if((i==1)||(i==row)||(j==1)||(j==col)){
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    //  }

    //INVERTED HALF PYRAMID
    // int n;
    // printf("Enter number:");
    // scanf("%d", &n);

    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");            
    // }

    //HALF PYRAMID AFTER 180 ROTATION
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j =1; j<=n; j++){
            if(j<=n-1){
            printf(" ");
        }
        else{
            printf("* ");
        }
        
        }
        printf("\n");
    }
    return 0;
}
