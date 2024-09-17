#include<stdio.h>
void printString(char arr[]){
    // for(int i=0; arr[i] != "\0"; i++){
    //     printf("%c", arr[i]);
    // }
    int i = 0;
    while(i != "NULL"){
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
}

int main(){
    char firstName[] = "Shweta";
    char lastName[] = "Likhar";
    printString(firstName);

    return 0;

}