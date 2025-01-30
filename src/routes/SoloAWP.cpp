#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);

void test5() {
    // declare initial conditions
    //PIDDataSet TestPara={4,0.1,0.2};
    PIDDataSet TestPara={1.5,0.1,0.15};
    MoveEncoderPID(TestPara, -70, 13, 0.5, 0, true);
    wait(100,msec);
    MoveEncoderPID(TestPara, 80, 34, 0.4, 0, true);
    MoveEncoderPID(TestPara, 60, 17, 0.5, 0, true);
    Clamp.set(true);
    wait(100, msec);
    RunRoller(100);
    wait(50, msec);
    TurnMaxTimePID(TestPara, -120, 0.4, true);
    MoveEncoderPID(TestPara, -70, 30, 0.4, -120, true);
    MoveEncoderPID(TestPara, 70, 19, 0.4, -120, true);
    wait(50, msec);
    TurnMaxTimePID(TestPara, 20, 0.4, true);
    MoveEncoderPID(TestPara, -90, 31, 0.4, 20, true);
    MoveEncoderPID(TestPara, -90, 5, 0.4, 20, true);
    RunRoller(0);
    TurnMaxTimePID(TestPara, 67, 0.4, true);
    MoveEncoderPID(TestPara, -70, 21, 0.4, 67, true);
    Clamp.set(false);
    MoveEncoderPID(TestPara, -80, 5, 0.4, 67, true);
    TurnMaxTimePID(TestPara, -53, 0.4, true);
    MoveEncoderPID(TestPara, 90, 20, 0.4, -53, true);
    MoveEncoderPID(TestPara, 60, 10, 0.5, -53, true);
    Clamp.set(true);
    wait(75, msec);
    MoveEncoderPID(TestPara, -60, 5, 0.5, -53, true);
    TurnMaxTimePID(TestPara, 63, 0.4, true);
    RunRoller(100);
    MoveEncoderPID(TestPara, -80, 35, 0.4, 63, true);
    MoveEncoderPID(TestPara, 90, 10, 0.4, 63, true);
    TurnMaxTimePID(TestPara, 30, 0.4, true);
    MoveEncoderPID(TestPara, 100, 30, 0.4, 30, true);
    RunLift(100);
    
    
    
}