#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);

void test() {
    // declare initial conditions
    //PIDDataSet TestPara={4,0.1,0.2};
    PIDDataSet TestPara={1.5,0.1,0.15};
    MoveEncoderPID(TestPara, 80, 20, 0.4, 0, true);
    MoveEncoderPID(TestPara, 40, 15, 0.5, 0, true);
    Clamp.set(true);
    wait(200, msec);
    RunRoller(100);
    wait(100, msec);
    TurnMaxTimePID(TestPara, 105, 0.4, true);
    MoveEncoderPID(TestPara, -80, 30, 0.5, 105, true);
    wait(100, msec);
    MoveEncoderPID(TestPara, 80, 9, 0.5, 105, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, -80, 14, 0.5, 90, true);
    wait(100, msec);
    MoveEncoderPID(TestPara, 80, 40, 0.5, 90, true);
    TurnMaxTimePID(TestPara, 60, 0.4, true);
    MoveEncoderPID(TestPara, -80, 25, 0.5, 60, true);
    TurnMaxTimePID(TestPara, 20, 0.4, true);
    MoveEncoderPID(TestPara, 80, 30, 0.5, 20, true);
    RunRoller(30);


    
    
}