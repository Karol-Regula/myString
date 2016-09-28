#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//due Wednesday morning(week with two days off?)
//use pointers instead of array notation

int myStrlen(char *);
char * myStrcpy(char * dest, char * source);

void main(){
    char s1[20] = "Hello";
    char s2[20] = "Goodbye";
    printf("Testing strlen()\n");
    printf("Length of s1: %d\n", myStrlen(s1));
    printf("Length of s2: %d\n\n", myStrlen(s2));
    
    
    printf("Testing blah\n");
}

int myStrlen(char *s){
    int i = 0;
    while (*(s + i)){
	i++;
	//printf("%d,%d\n", i, *(s + i));
    }
    return i;
}

