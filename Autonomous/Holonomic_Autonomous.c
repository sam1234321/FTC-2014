#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     topLeft,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     topRight,      tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     bottomRight,   tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     bottomLeft,    tmotorTetrix, openLoop)

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.

void initializeRobot()
{
	// Place motor positioning here
}

void movement(int topLeft, int topRight, int bottomLeft, int bottomRight){
	motor	
}

task main()
{
  initializeRobot();

  waitForStart(); // Wait for the beginning of autonomous phase.

  while (true)
  {
      
  }

}

