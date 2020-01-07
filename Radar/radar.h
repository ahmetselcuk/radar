#pragma once

class Antenna;
class Receiver;
class Transmitter;
class Environment;

class Radar
{
public:
	Radar(
		Antenna* antenna, 
		Receiver* receiver, 
		Transmitter* transmitter, 
		Environment *environment);	
	virtual ~Radar();

	virtual bool start() = 0;
private:

	Antenna* _antenna;
	Receiver* _receiver;
	Transmitter* _transmitter;
	Environment* _environment;
};

