#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    int a;
    float b;
    double c;

    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;

    printf("size = %lx, value = %d \n", sizeof(a), a);
    printf("size = %lu, value = %f \n", sizeof(b), b);
    printf("size = %lx, value = %f", sizeof(c), c);

    return 0;
}
