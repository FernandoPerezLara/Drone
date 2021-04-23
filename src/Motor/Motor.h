#ifndef Motor_h
#define Motor_h

#include "Servo.h"

class Motor {
	public:
		Motor(int motor_LF, int motor_RF, int motor_LB, int motor_RB);

		void begin(int min_pulse_width, int max_pulse_width);

	private:
		struct MOTOR {
			int pin;
			Servo controller;
		} motor[4];
};

#endif
