#define NANO_ID 1 //it's 1 for testing purposes. CHANGE AFTERWARDS
#define FEEDBACK_PWM_MIN 502
#define FEEDBACK_PWM_MAX 1505
#define FEEDBACK_PWM_MIDDLE ( (FEEDBACK_PWM_MAX + FEEDBACK_PWM_MIN) / 2 )
#define COMMAND_PWM_MIN 488
#define COMMAND_PWM_MAX 1493
#define COMMAND_PWM_RANGE (COMMAND_PWM_MAX - COMMAND_PWM_MIN)

#define CLOCKWISE_PWM_MIN 2120
#define CLOCKWISE_PWM_MAX 2170
#define CLOCKWISE_SPEED_MIN 130
#define CLOCKWISE_SPEED_MAX 283
#define ANTICLOCKWISE_PWM_MIN 1875
#define ANTICLOCKWISE_PWM_MAX 1815
#define ANTICLOCKWISE_SPEED_MIN -133
#define ANTICLOCKWISE_SPEED_MAX -281