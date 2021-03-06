#ifndef DAMAGE_H
#define DAMAGE_H

// These will be the two types of "magic" available :)
#define FIRE 0
#define ICE 1

// This class will determine how much damage a "player" will receive based on what 
// magic a ack is cast against them
class MAG_DAMAGE
{
	public:

		// This takes the magic type and the magic level (how strong of magic) and
		// returns the amount of damage that occurs to a "player"
		int calcDamage(int magType, int magLevel);

};



#endif