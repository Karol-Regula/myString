#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//due Wednesday morning
//use pointers instead of array notation
//add nice formatting for testing, check against website, print all initial strings, check against built in functions

int myStrlen(char *);
char * myStrcpy(char *dest, char *source);
char * myStrncat(char *dest, char *source, int n);
int myStrcmp(char *s1, char *s2);
char * myStrchr(char *s, char c);
char * myStrstr(char *haystack, char *needle);

void main(){
    printf("\n");
    char s1[20] = "Hello";
    char s2[20] = "Goodbye";
    char s3[20] = "Morning";
    printf("Initial Strings:\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n\n", s3);
    
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
    printf("Concatenated s1 to s2 (n = 3): %s\n", myStrncat(s2, s1, 3));
    printf("Concatenated s3 into s2 (n = 100): %s\n", myStrncat(s2, s3, 100));
    
    //resetting strings back to initial states
    myStrcpy(s1, "Hello");
    myStrcpy(s2, "Goodbye");
    myStrcpy(s3, "Morning");

    printf("Comparison against the built-in strcat() function:\n");
    printf("Concatenated s1 to s2 (n = 3): %s\n", strncat(s2, s1, 3));
    printf("Concatenated s3 into s2 (n = 100): %s\n\n", strncat(s2, s3, 100));
    

    printf("Testing strcmp()\n");
    printf("Comparing s1 to s2: %d\n", myStrcmp(s1,s2));
    printf("Comparing s2 to s3: %d\n", myStrcmp(s2,s3));
    printf("Comparison against the built-in strcmp() function:\n");
    printf("Comparing s1 to s2: %d\n", strcmp(s1,s2));
    printf("Comparing s2 to s3: %d\n\n", strcmp(s2,s3));

    printf("Testing strchr()\n");
    printf("Looking for 'e' in s1: %c\n", *myStrchr(s1,'e'));
    printf("Looking for 'g' in s3: %c\n", *myStrchr(s3,'g'));
    printf("Looking for 'x' in s3: %s\n\n", myStrchr(s3,'x'));

    printf("Testing strstr()\n");
    printf("Looking for \"el\" in s1: %s\n", myStrstr(s1,"el"));
    printf("Looking for \"mor\" in s3: %s\n", myStrstr(s3,"mor"));
    printf("Looking for \"ore\" in s3: %s\n\n", myStrstr(s3,"ore"));
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
    while (*(source + j) && j < n){
	*(dest + i) = *(source + j);
	i++;
	j++;
    }
    *(dest + i) = 0;
    return dest;
}

int myStrcmp(char *s1, char *s2){//this function may need specal tests
    int i = 0;
    while (*(s1 + i) == *(s2 + i)){
	i++;
    }
    return *(s1 + i) - *(s2 + i);
}

char * myStrchr(char *s, char c){
    int i = 0;
    while (*(s + i) != c){
	i++;
	if (*(s + i) == 0){
	    return NULL;
	}
    }
    return s + i;
}

char * myStrstr(char * haystack, char * needle){
    int i = 0;
    while (*(haystack + i)){
	if (*(haystack + i) == *(needle)){
	    int j = 0;
	    int k = i;
	    int positive = 1;
	    while (*(needle + j) == *(haystack + k + j)){
		j++;
		k++;
	    }
	    if (*(needle + j) == 0){
		return *(haystack + i);
	    }
	}
	i++;
    }
    return NULL;
}
