#include "base.hpp"
#include <iostream>
using namespace std;
/*
CBase::CBase(int maxSensors):
maxSensors(maxSensors),
Sensors(new CSensor*[maxSensors])
{}

CBase::~CBase(){
	delete Sensors;
}

CBase::CBase(const CBase& old):
maxSensors(old.maxSensors),
numSensors(old.numSensors),
Sensors(new CSensor*[maxSensors])
{
	for(int i=0; i< maxSensors; i++)
		Sensors[i] = old.Sensors[i];
}

const CBase& CBase::operator=(const CBase& old)
{
	if(this != &old)
	{
		delete Sensors;
		maxSensors = old.maxSensors;
		numSensors = old.numSensors;
		Sensors = new CSensor*[maxSensors];
		for(int i=0; i< maxSensors; i++)
			Sensors[i] = old.Sensors[i];
	}
	return *this;
}
*/
void CBase::setSensor(CSensor *pSensor)
{
	if(Sensors.size() < Sensors.max_size())
		Sensors.push_back(pSensor);
	else
		throw CException("Too many sensors!");
		//cout << "Maximum number of sensors reached !" << endl;
}

void CBase::displayMeasurements()
{
	unsigned int i;
	for(i=0; i < Sensors.size(); i++)
		cout << "Current " << Sensors[i]->getName() << Sensors[i]->getMeasurement() << ' ' << Sensors[i]->getUnit() << endl;
}
