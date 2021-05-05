#include <stdio.h>
#include "average.h"


int main() {
    double arr[] = {10, 20, 30, 40};

    double result = average(4, arr);

    printf("The average of 10, 20, 30 and 40 is: %.4f\n", result);
    return 0;    
}

