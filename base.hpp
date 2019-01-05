#ifndef _base__hpp__
#define _base__hpp__
#include "sensors.hpp"
#include "exception.h"
#include <vector>
class CBase
{
public:
	//CBase(int maxSensors);
	//~CBase();
	//CBase(const CBase& old);
	void setSensor(CSensor *pSensor);
	void displayMeasurements();
	//const CBase& operator=(const CBase& old);
	
private:
	//int maxSensors;
	//int numSensors =0;
   	std::vector <CSensor*> Sensors;
};

#endif
