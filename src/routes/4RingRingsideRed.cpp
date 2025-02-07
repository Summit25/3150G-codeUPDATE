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
    MoveEncoderPID(TestPara, -70, 13, 0.5, 0, true);
    wait(100,msec);
    MoveEncoderPID(TestPara, 80, 34, 0.4, 0, true);
    MoveEncoderPID(TestPara, 30, 23, 0.5, 0, true);
    Clamp.set(true);
    wait(200, msec);
    RunRoller(100);
    wait(100, msec);
    TurnMaxTimePID(TestPara, 160, 0.4, true);
    MoveEncoderPID(TestPara, -80, 32, 0.5, 160, true);
    wait(100, msec);
    MoveEncoderPID(TestPara, 80, 6, 0.5, 160, true);
    TurnMaxTimePID(TestPara, 141, 0.4, true);
    MoveEncoderPID(TestPara, -80, 16, 0.5, 141, true);
    wait(200, msec);
    MoveEncoderPID(TestPara, 80, 40, 0.5, 141, true);
    TurnMaxTimePID(TestPara, 120, 0.4, true);
    MoveEncoderPID(TestPara, -80, 38, 0.5, 120, true);
    wait(400, msec);
    TurnMaxTimePID(TestPara, -90, 0.4, true);
    MoveEncoderPID(TestPara, -80, 42, 0.5, -90, true);
    RunLift(100);
}