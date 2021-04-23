#ifndef Motor_h
#define Motor_h

class Motor {
	public:
		Motor(int motor_LF, int motor_RF, int motor_LB, int motor_RB);

	private:
		struct MOTOR {
			int pin;
		} motor[4];
};

#endif
