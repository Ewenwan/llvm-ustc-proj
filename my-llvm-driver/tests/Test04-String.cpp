// malloc string buffer overflow
#include <stdlib.h>
#include <string.h>

int main(){
    char *s1 = (char*)malloc(6*sizeof(char));
    char *s2 = (char*)malloc(10*sizeof(char));
    strcpy(s2,s1);  // no warning
    strcpy(s1,s2);  // warning
    free(s1);
    free(s2);
}