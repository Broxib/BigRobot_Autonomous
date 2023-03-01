#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 Brain screen

// controller Controller1 = controller(primary);

motor release =  motor(PORT12, ratio18_1, false);
motor leftMotorA = motor(PORT13, ratio18_1, false);
motor leftMotorB = motor(PORT15, ratio18_1, false);
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB);
motor rightMotorA = motor(PORT20, ratio18_1, true);
motor rightMotorB = motor(PORT14, ratio18_1, true);
inertial inertiasensor = inertial(PORT19);
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 40, mm, 1);


// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  release.spin(forward,100,pct);
  wait(0.5, seconds);
    Drivetrain.driveFor(fwd, 150, mm);
    inertiasensor.calibrate();
  Drivetrain.turnFor(100, degrees);
  release.stop();

  Drivetrain.driveFor(fwd, 2000, mm);
  Drivetrain.driveFor(reverse, 300, mm);

  Drivetrain.turnFor(-241, degrees);
    Drivetrain.driveFor(fwd, 350, mm);
  // leftMotorA.spin(forward,(70)*0.5, pct);
  // leftMotorB.spin(forward,(-90)*0.5, pct);
  // rightMotorA.spin(forward, (-70 )*0.5, pct);
  // // rightMotorB.spin(forward, (70)*0.5, pct);
  // wait(3, seconds);
  // leftMotorA.stop();
  // leftMotorB.stop();
  // rightMotorA.stop();
  // rightMotorB.stop();

}