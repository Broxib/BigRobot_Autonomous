using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices

extern motor release;
extern drivetrain Drivetrain;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );