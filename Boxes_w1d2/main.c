//
//  main.c
//  Boxes_w1d2
//
//  Created by Sunny Surdhar on 2015-05-05.
//  Copyright (c) 2015 Sunny Surdhar. All rights reserved.
//

//Make each member a float. If you use typedef you don't have to type struct before box when declaring variables.
//
//Next:
//
//Create a function that will take a box as it's argument and calculate the volume and return it as a float.
//Create a function that will take three floats and return a box struct.
//Create a function that will, given two boxes, say how many times the volume of the first one is equal to the volume of the second one.
//Lastly, refactor the code so that all of these functions are declared using function prototypes before the main method and the bodies of the functions are after the main method.

#include <stdio.h>

typedef struct ThreeDimensionBox {
    float h;
    float w;
    float d;
} Box;

float volume(Box box);

Box makeAbox (float height, float width, float depth);

float divide(Box box1, Box box2);

int main() {

    Box myBox = makeAbox(2, 3, 4);
    Box myBox2 = makeAbox(6, 5, 4);

    divide(myBox, myBox2);
    
    printf("%f\n", volume(myBox));
    printf("%f\n", divide(myBox, myBox2));
    
    return 0;

}

float volume(Box box) {
    
    return box.h * box.w * box.d;
}

Box makeAbox (float height, float width, float depth){
    Box b;
    b.h = height;
    b.w = width;
    b.d = depth;
    
    return b;
    
}

float divide(Box box1, Box box2){
    return (volume(box1) / volume(box2));
}












