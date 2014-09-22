
#include "JoystickDriver.c"

// NOTE: Some of to most of this code was made on npp, so the pragmas couldn't be setup and the selection of motors will likely change when a complete prototype of a bidirectional/holonomic drive robot has been built. - Nate

int speed; // Speed of the robot, used as a multiplier for speed. Should be positive
int threshold; // the "dead zone" of the controller joysticks

const int FULLSPEED; // a constant value for the maximum speed for the robot. Since this code doesn't have a precision mode, (yet), we only need fullspeed as a speed constant.

// this is run before the main loop
void initializeRobot(){
	speed = 100; // set to full speed as default
	threshold = 10; // 10 seems like a good number to use. No seen cases of the joystick being over 10 unintently 
}

// main method for movement.
void movement(int x1, int y1, int x2, int y2){



}

task main(){
	intializeRobot();

	while(true){

	}

}
