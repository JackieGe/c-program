//
//  average.c
//  c-program
//
//  Created by jackiege on 24/08/2017.
//  Copyright © 2017 jackiege. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>

int a = INT32_MAX - 1;
int b = INT32_MAX - 3;

short x = INT16_MAX - 1;
short y = INT16_MAX - 3;

void int_average1() {
    int val = (a + b) / 2;
    printf("average1: (%d + %d)/2 = %d\n", a, b, val);
}

void int_average2() {
    int val = 0;
    if ((a >0 && b>0) || (a<0 && b<0)){
        val = a + (b-a)/2;
    } else {
        val = (a+b)/2;
    }
    printf("average2: (%d + %d)/2 = %d\n", a, b, val);
}

void short_average1() {
    short val = (x + y) /2;
    printf("average1: (%d + %d)/2 = %d\n", x, y, val);
}

int main(int argc, char* argv[]) {
    
    int_average1();
    int_average2();
    short_average1();
   
    return 0;
}

