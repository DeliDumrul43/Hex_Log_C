#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h> 

char* ___start_point;

int Hex_read(char* Start, char* start_p){

    int i;

    printf("%p \n", &start_p);
    Start = (char*) malloc(256 * sizeof(char));
    Start = start_p;
    printf("\nStarting.... \n");
    for (i = 0; i <= 256; i++){
        printf("%d", i);
        printf("\n%p\n", Start + i);

    }


}


int main(){

    char count;
    printf("%p",&count);
    
    char* Start;
    
    scanf("%c", &count);
    ___start_point = &count;

    if(0 < count && count < 256){
        
        printf("%p Start point\n", &___start_point);

        Hex_read(Start,___start_point);
    }
    else{
        printf("failed");
        return 1;
    }

    

}