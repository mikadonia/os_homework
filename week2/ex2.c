#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    printf("Enter the string:");
    scanf("%s", str);

    int i = strlen(str) - 1;

    while (i >= 0){
        printf("%c", str[i]);
        --i;
    }
    return 0;
}
