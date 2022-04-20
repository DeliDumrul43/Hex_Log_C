#include <stdio.h>


int Hex_read(char* Start, int size){
	int i = 0;
    printf("\nStarting.... \n");
    for (i < size; i++;){
        printf("%.2x  ", Start[i]);
        
        if((i+1) % 16 == 0)
            printf("\t\t........................\n");
    }
}


int main(){

    char str[256] = {'A', 'A','A', 'a','A', 'a','A', 'a','A', 'a'};
    
    str[127] = 'L';
    
    str[253] = 'x';
    str[254] = 'y';
    str[255] = 'z';
    
    Hex_read(str , 256);
}
