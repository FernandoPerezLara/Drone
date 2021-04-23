#include "Motor.h"

Motor::Motor(int motor_LF, int motor_RF, int motor_LB, int motor_RB) {
	motor[0].pin = motor_LF;
	motor[1].pin = motor_RF;
	motor[2].pin = motor_LB;
	motor[3].pin = motor_RB;
}
