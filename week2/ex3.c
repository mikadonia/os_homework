#include <stdio.h>
#include <string.h>

int main(){
    int n; //height
    scanf("%d", &n);

    char space = ' ';
    char el = '*';

    for (int l = 0; l < n; ++l) {

        for (int i = 0; i < n - l - 1; ++i) {
            printf("%c", space);
        }

        for (int i = 0; i < l*2 + 1; ++i) {
            printf("%c", el);
        }

        for (int i = 0; i < n - l - 1; ++i) {
            printf("%c", space);
        }

        printf("\n");

    }
    return 0;
}
