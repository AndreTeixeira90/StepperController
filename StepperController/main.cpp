//
//  main.cpp
//  StepperController
//
//  Created by Tiago Santos on 05/02/16.
//  Copyright © 2016 Tiago Santos. All rights reserved.
//

#include <iostream>
#include "StepperController.hpp"
#include "InputInterpreter.hpp"
#include <stdio.h>

/* For testing purposes */
int main(int argc, const char * argv[]) {
    StepperController sc;
    InputInterpreter hi;
    
    //Testing INPUTS direction and speed. Direction must be {-1,0,1} and speed must be [0,255]
    printf("Direction= %d Speed= %d\n",hi.convertDirection(500), hi.convertSpeed(234));
    
    // Testing stepping
    int s1,s2;
    
    for(int i=0; i<10; i++,sc.step(1)){
        sc.getState(&s1, &s2);
        std::cout << "S1 =" << s1 << " S2=" << s2 << "\n";
    }
    
    return 0;
}
