#define MOTOR_PS 128
#define MOTOR_FREQ 2000
#define MOTOR_HIGH 0.8
#define MOTOR_HALF 0.4
#define MOTOR_LOW 0
#define MOTOR_DC0 0

void motor_stop(void);
void motor_forward_straight(void);
void motor_forward_left(void);
void motor_forward_right(void);
void motor_backward_left(void);
void motor_backward_right(void);
void motor_backward_straight(void);
void motor_init(void);
void motor_control(int, int, int, int);
