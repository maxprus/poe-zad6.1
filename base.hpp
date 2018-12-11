#ifndef _base__hpp__
#define _base__hpp__
#include "sensors.hpp"
#define MAX_NUM_SENS 5

class CBase
{
	private:
	int numSensors = 0;
   	CSensor* Sensors[MAX_NUM_SENS];
	public:
	void setSensor(CSensor *pSensor);
	void displayMeasurements();
	
};

#endif
