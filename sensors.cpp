#include "base.hpp"
#include <cstdlib>

using namespace std;

void CSensor::makeMeasurement()
{
	Measurement = (rand() % ((max - min + 1)*1000))/1000.0 + min;
}
float CSensor::getMeasurement()
{
	makeMeasurement();
	return Measurement;
}
void CSensor::checkLimits(int lmin, int lmax)
{
	if(min < lmin)
		min = lmin;
	if(max > lmax)
		max = lmax;
}

CSensor::CSensor(int min, int max):
min(min),
max(max)
{
}
