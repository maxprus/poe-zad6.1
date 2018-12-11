#include "base.hpp"
#include <iostream>
using namespace std;

CBase::CBase(int maxSensors):
maxSensors(maxSensors)
{
	Sensors = new CSensor*[maxSensors];
}
CBase::~CBase(){
	delete Sensors;
}

void CBase::setSensor(CSensor *pSensor)
{
	if(numSensors < maxSensors)
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
