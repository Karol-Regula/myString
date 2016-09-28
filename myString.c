#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//due Wednesday morning
//use pointers instead of array notation

int myStrlen(char *);
char * myStrcpy(char * dest, char * source);

void main(){
    char s1[20] = "Hello";
    char s2[20] = "Goodbye";
    char s3[20] = "Morning";
    printf("Testing strlen()\n");
    printf("Length of s1: %d\n", myStrlen(s1));
    printf("Length of s2: %d\n\n", myStrlen(s2));
    

    printf("Testing strcpy()\n");
    printf("Copied s1 into s2: %s\n", myStrcpy(s2, s1));
    printf("Copied s3 into s2: %s\n\n", myStrcpy(s2, s3));
}

int myStrlen(char *s){
    int i = 0;
    while (*(s + i)){
	i++;
	//printf("%d,%d\n", i, *(s + i));
    }
    return i;
}

char * myStrcpy(char * dest, char * source){
    int i = 0;
    while (*(source + i)){
	*(dest + i) = *(source + i);
	i++;
    }
    *(dest + i) = 0;
    return dest;
}
