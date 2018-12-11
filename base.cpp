#include "base.hpp"
#include <iostream>
using namespace std;
void CBase::setSensor(CSensor *pSensor)
{
	if(numSensors < MAX_NUM_SENS)
		Sensors[numSensors++] = pSensor;
	else
		cout << "Maximum number of sensors reached !" << endl;
}

void CBase::displayMeasurements()
{
	int i;
	for(i=0; i < numSensors; i++)
		cout << "Current " << Sensors[i]->getName() << Sensors[i]->getMeasurement() << ' ' << Sensors[i]->getUnit() << endl;
}
