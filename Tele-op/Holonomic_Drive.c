
#include "JoystickDriver.c"

// NOTE: Some of to most of this code was made on npp, so the pragmas couldn't be setup and the selection of motors will likely change when a complete prototype of a bidirectional/holonomic drive robot has been built. - Nate

int speed; // Speed of the robot, used as a multiplier for speed. Should be positive
int threshold; // the "dead zone" of the controller joysticks

const int FULLSPEED; // a constant value for the maximum speed for the robot. Since this code doesn't have a precision mode, (yet), we only need fullspeed as a speed constant. Not neseccary at the moment, but will be later.

// this is run before the main loop
void initializeRobot(){
	speed = 40; // set the default max speed
	threshold = 10; // 10 seems like a good number to use. No seen cases of the joystick being over 10 unintently 
}

// main method for movement.
void movement(int x1, int y1, int x2, int y2){
	// we are only using x2 and y2 for the actual movement, x1 and y1 are for rotation. Optional, but reccomended and useful.
	if(abs(y2) > threshold){ // make sure joystick is not in dead zone. I know, it only checks y2, but it is long a tedious to check for more, I'll do it later. ------------------------------------TODO-----------------------------------------------------------
		motor[topright] = y2 - x1 - x2;		// ATTENTION!!!! THIS IS NOT WORKING CODE! THIS IS JUST FOR EASIER CODING WHEN THE PROTOTYPE IS DONE! SAME FOR CODE BELOW!
		motor[topleft] = y2 - x1 + x2;
		motor[bottomright] = y2 + x1 + x2;
		motor[bottomleft] = y2 + x1 -x2;
	}
	//This code isn't perfect. It obviously goes over the 100 power limit of a motor, but it still should work. It won't burn out motors because robotc sets the value to 100, even if it is higher.
}

task main(){
	intializeRobot();

	while(true){
		getJoystickSettings(joystick); // this should be run before joystick detection, since, well, the whole tele-op depends on the joystick.
		int y1 = Joystick.joy1_y1; int y2 = Joystick.joy1_y2; int x1 = Joystick.joy1_x1; int x2 = Joystick.joy1_x2; // Makes joystick positions easier to use
		movement(x1, y1, x2, y2); // Pass the joystick coordinates to movement method
		
		// The whlie loop doesnt need to be THAT fast... and it makes processing faster
		wait1MSec(1);
	}

}
