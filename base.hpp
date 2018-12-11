#ifndef _base__hpp__
#define _base__hpp__
#include "sensors.hpp"

class CBase
{
	public:
	CBase(int maxSensors);
	~CBase();
	void setSensor(CSensor *pSensor);
	void displayMeasurements();
	private:
	int maxSensors;
	int numSensors =0;
   	CSensor** Sensors;
};

#endif
