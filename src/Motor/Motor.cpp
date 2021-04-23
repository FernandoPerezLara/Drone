#include "Motor.h"

Motor::Motor(int motor_LF, int motor_RF, int motor_LB, int motor_RB) {
	motor[0].pin = motor_LF;
	motor[1].pin = motor_RF;
	motor[2].pin = motor_LB;
	motor[3].pin = motor_RB;
}

void Motor::begin(int min_pulse_width, int max_pulse_width) {
	motor[0].controller.attach(motor[0].pin, min_pulse_width, max_pulse_width);
	motor[1].controller.attach(motor[1].pin, min_pulse_width, max_pulse_width);
	motor[2].controller.attach(motor[2].pin, min_pulse_width, max_pulse_width);
	motor[3].controller.attach(motor[3].pin, min_pulse_width, max_pulse_width);
}

void Motor::set_thrust(int motor, int thrust) {
	this->motor[motor].controller.write(thrust);
}
