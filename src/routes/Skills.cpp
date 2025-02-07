#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);

void test6() {
    // declare initial conditions
    //PIDDataSet TestPara={4,0.1,0.2};
    PIDDataSet TestPara={1.5,0.1,0.15};
    RunRoller(100);
    wait(500, msec);
    MoveEncoderPID(TestPara, -80, 9, 0.4, 0, true);
    TurnMaxTimePID(TestPara, -90, 0.4, true);
    MoveEncoderPID(TestPara, 60, 26, 0.4, -90, true);
    MoveEncoderPID(TestPara, 20, 5, 0.4, -90, true);
    Clamp.set(true);
    wait(300, msec);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -80, 30, 0.4, 0, true);
    TurnMaxTimePID(TestPara, 50, 0.4, true);
    MoveEncoderPID(TestPara, -60, 36, 0.4, 50, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    //runLiftToTarget(200);
    //wait(400, msec);
    MoveEncoderPID(TestPara, -40, 18, 0.4, 90, true);
    wait(200, msec);
    MoveEncoderPID(TestPara, 40, 1.5, 0.4, 90, true);
    wait(500, msec);
    //RunRoller(0);
    //runLiftToTarget(316);
    //wait(700, msec);
    //wait(300,msec);
    //runLiftToTarget(175);
    //RunRoller(100);
    MoveEncoderPID(TestPara, 40, 8, 0.4, 90, true);
    TurnMaxTimePID(TestPara, 175, 0.4, true);
    MoveEncoderPID(TestPara, -70, 50, 0.4, 175, true);
    MoveEncoderPID(TestPara, -30, 25, 0.4, 175, true);
    MoveEncoderPID(TestPara, 70, 6, 0.4, 175, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, -70, 20, 0.4, 90, true);
    MoveEncoderPID(TestPara, 70, 30, 0.4, 90, true);
    TurnMaxTimePID(TestPara, -45, 0.4, true);
    MoveEncoderPID(TestPara, 70, 40, 0.4, -45, true);
    Clamp.set(false);
    wait(200, msec);
    MoveEncoderPID(TestPara, -70, 13, 0.4, -45, true);
    TurnMaxTimePID(TestPara, 100, 0.4, true);
    MoveEncoderPID(TestPara, 70, 70, 0.4, 100, true);
    MoveEncoderPID(TestPara, 30, 35, 0.4, 100, true);
    Clamp.set(true);
    wait(300, msec);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -80, 30, 0.4, 0, true);
    TurnMaxTimePID(TestPara, -50, 0.4, true);
    MoveEncoderPID(TestPara, -60, 36, 0.4, -50, true);
    TurnMaxTimePID(TestPara, -90, 0.4, true);
    //runLiftToTarget(200);
    //wait(400, msec);
    MoveEncoderPID(TestPara, -40, 18, 0.4, -90, true);
    wait(200, msec);
    MoveEncoderPID(TestPara, 40, 1.5, 0.4, -90, true);
    wait(500, msec);
    //RunRoller(0);
    //runLiftToTarget(316);
    //wait(700, msec);
    //wait(300,msec);
    //runLiftToTarget(175);
    //RunRoller(100);
    MoveEncoderPID(TestPara, 40, 8, 0.4, 90, true);
    TurnMaxTimePID(TestPara, -175, 0.4, true);
    MoveEncoderPID(TestPara, -70, 50, 0.4, -175, true);
    MoveEncoderPID(TestPara, -30, 25, 0.4, -175, true);
    MoveEncoderPID(TestPara, 70, 6, 0.4, -175, true);
    TurnMaxTimePID(TestPara, -90, 0.4, true);
    MoveEncoderPID(TestPara, -70, 20, 0.4, -90, true);
    MoveEncoderPID(TestPara, 70, 30, 0.4, -90, true);
    TurnMaxTimePID(TestPara, 45, 0.4, true);
    MoveEncoderPID(TestPara, 70, 40, 0.4, 45, true);
        /*
    Clamp.set(false);
    MoveEncoderPID(TestPara, -70, 35, 0.4, 45, true);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -90, 110, 0.4, 0, true);
    wait(500, msec);
    RunRoller(0);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, -70, 30, 0.4, 90, true);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -70, 45, 0.4, 0, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, -70, 60, 0.4, 90, true);
    MoveEncoderPID(TestPara, -70, -60, 0.4, 90, true);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -70, 30, 0.4, 0, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, 50, 30, 0.4, -90, true);
    Clamp.set(true);
    wait(200, msec);    
    TurnMaxTimePID(TestPara, 135, 0.4, true);
    RunRoller(100);
    MoveEncoderPID(TestPara, -70, 35, 0.4, 135, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, -70, 30, 0.4, 90, true);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -70, 60, 0.4, 0, true);
    MoveEncoderPID(TestPara, 70, 60, 0.4, 0, true);
    TurnMaxTimePID(TestPara, 22.5, 0.4, true);
    MoveEncoderPID(TestPara, -70, 30, 0.4, 22.5, true);
    MoveEncoderPID(TestPara, 70, 30, 0.4, 22.5, true);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
    MoveEncoderPID(TestPara, -70, 30, 0.4, 0, true);
    TurnMaxTimePID(TestPara, -135, 0.4, true);
    MoveEncoderPID(TestPara, -70, 35, 0.4, -135, true);
 */   
}