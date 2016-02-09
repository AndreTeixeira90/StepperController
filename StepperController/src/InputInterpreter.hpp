//
//  InputInterpreter.hpp
//  StepperController
//
//  Created by Tiago Santos on 06/02/16.
//  Copyright © 2016 Tiago Santos. All rights reserved.
//

#ifndef InputInterpreter_hpp
#define InputInterpreter_hpp

#include <stdio.h>

class InputInterpreter{
public:
    /*
     *  [0,1023] -> [0,255]
     */
    unsigned char convertSpeed(short int hspeed);
    
    /*
     *  [0,1025] -> {-1,0,1}
     */
    char convertDirection(short int hdirection);
};

#endif /* InputInterpreter_hpp */
