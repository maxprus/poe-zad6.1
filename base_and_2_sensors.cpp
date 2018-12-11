#include <iostream>	
using namespace std;	
#include <unistd.h>	
#include "base.hpp"		
int main()
{
	CTemperatureSensor TemperatureSensor(-100, 100);
	CHumiditySensor HumiditySensor(0, 100);		
	CPressureSensor PressureSensor(900, 1200);
	CWindSensor WindSensor(0, 100);
	CInsolationSensor InsolationSensor(0, 100);
	CBase Base;					

	Base.setSensor(&TemperatureSensor);		
	Base.setSensor(&HumiditySensor);		
	Base.setSensor(&PressureSensor);
	Base.setSensor(&WindSensor);
	Base.setSensor(&InsolationSensor);
	while(true)					
	{		
		Base.displayMeasurements();
		cout << endl;	
		sleep(3);				
	};

	return 0;
}
