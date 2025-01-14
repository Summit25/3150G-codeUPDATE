#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LF = motor(PORT10, ratio6_1, false);
motor LM = motor(PORT7, ratio6_1, false);
motor RF = motor(PORT9, ratio6_1, true);
motor RM = motor(PORT11, ratio6_1, true);
motor LB = motor(PORT19, ratio6_1, false);
motor RB = motor(PORT13, ratio6_1, true);
motor Roller = motor(PORT12, ratio6_1, false);
motor Stake = motor(PORT8, ratio6_1, false);
digital_out Pistake = digital_out(Brain.ThreeWirePort.D);
digital_out Clamp = digital_out(Brain.ThreeWirePort.H);
inertial Gyro = inertial(PORT17);
rotation LiftSensor(PORT18);
//Naming convention: 
// Important variables
const double wheelDiam = 2.75;
const double wheelToMotorRatio = 48.0/36;

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}