#ifndef _sensors__hpp__
#define _sensors__hpp__
#include <string>

using namespace std;

class CSensor
{
public:
	CSensor(int min, int max);
	float getMeasurement();
	virtual string getName() = 0;
	virtual string getUnit() = 0;
private:
	void makeMeasurement();
	float Measurement;
	int min;
	int max;
protected:
	void checkLimits(int lmin, int lmax);
	
};

class CTemperatureSensor : public CSensor
{
public:
	CTemperatureSensor(int min, int max) : CSensor(min, max)
	{checkLimits(-30,50);}
protected:
	string getName() {return "Temperature: ";}
	string getUnit() {return "'C";}
};

class CHumiditySensor : public CSensor
{
public:
	CHumiditySensor(int min, int max) : CSensor(min, max)
	{checkLimits(0,100);}
protected:
	string getName() {return "Humidity:    ";}
	string getUnit() {return "%";}
};

class CPressureSensor : public CSensor
{
public:
	CPressureSensor(int min, int max) : CSensor(min, max)
	{checkLimits(950,1150);}
protected:
	string getName() {return "Pressure:    ";}
	string getUnit() {return "hPa";}
};

class CWindSensor : public CSensor
{
public:
	CWindSensor(int min, int max) : CSensor(min, max)
	{checkLimits(0,50);}
protected:
	string getName() {return "Wind:        ";}
	string getUnit() {return "m/s";}
};

class CInsolationSensor : public CSensor
{
public:
	CInsolationSensor(int min, int max) : CSensor(min, max)
	{checkLimits(0,50);}
protected:
	string getName() {return "Insolation:  ";}
	string getUnit() {return "W/m^2";}
};



#endif
