#include <math.h>
// #include "serial.h"
#define PI		3.14159265358
#define DTR 	PI/180.0				   // Conversi degree to radian
#define RTD 	180.0/PI				   // Conversi degree to radian

#define L1	0.5  // link1
#define L2	0.3  // link2
#define L3  0.1	  // link3

float q1;
float q2;
float q3;
float q4;
float objx=0.3;
float objy=0.5;


void init_robot()
{
	q1=0* DTR;
	q2=45 * DTR;
	q3 = -45 * DTR;
	q4 = 0 * DTR;
}

void animate(int k) {
  // write your program here
}