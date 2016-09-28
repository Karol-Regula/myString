#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//due Wednesday morning
//use pointers instead of array notation
//add nice formatting for testing, check against website, print all initial strings, check against built in functions

int myStrlen(char *);
char * myStrcpy(char *dest, char *source);
char * myStrncat(char *dest, char *source, int n);

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

    //resetting strings back to initial states
    myStrcpy(s1, "Hello");
    myStrcpy(s2, "Goodbye");
    myStrcpy(s3, "Morning");

    printf("Testing strncat()\n");
    printf("Concatenated s1 to s2(n = 3): %s\n", myStrncat(s2, s1, 3));
    printf("Concatenated s3 into s2(n = 100): %s\n\n", myStrncat(s2, s3, 100));
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

char * myStrncat(char *dest, char *source, int n){
    int i = myStrlen(dest);
    int j = 0;
    while (*(source + j) && j < n){//compare this termination to the real strncat()
	*(dest + i) = *(source + j);
	i++;
	j++;
    }
    *(dest + i) = 0;
    return dest;
    
}
