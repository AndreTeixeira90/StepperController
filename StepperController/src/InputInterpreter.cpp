//
//  InputInterpreter.cpp
//  StepperController
//
//  Created by Tiago Santos on 06/02/16.
//  Copyright © 2016 Tiago Santos. All rights reserved.
//

#include "InputInterpreter.hpp"

unsigned char InputInterpreter::convertSpeed(short hspeed){
    return hspeed*255/1023;
}

char InputInterpreter::convertDirection(short hdirection){
    return (int)(1.0/511.0*hdirection+0.5)-1;
}