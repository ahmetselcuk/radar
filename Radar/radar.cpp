#include "Radar.h"
#include "Antenna.h"
#include "Receiver.h"
#include "Transmitter.h"
#include "Environment.h"


Radar::Radar(Antenna* antenna,
	Receiver* receiver,
	Transmitter* transmitter,
	Environment *environment):
	_antenna(antenna),
	_receiver(receiver),
	_transmitter(transmitter),
	_environment(environment)
{

}


Radar::~Radar()
{
}

