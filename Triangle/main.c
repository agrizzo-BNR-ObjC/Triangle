//
//  main.c
//  Triangle
//
//  Created by Tony Rizzo on 11/8/17.
//  Copyright © 2017 Koteray. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float first, float second){

    return 180.0 - first - second;
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    
    return 0;
}
