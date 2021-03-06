#include "damage.h"

// This method calculates the amount of damage based on the
// type of magic and the magic level
int MAG_DAMAGE::calcDamage(int magType, int magLevel)
{
	switch(magType)
	{
		
		// If it fire  gic, return negative 2 times the magic level
		case FIRE:

			return -2 * magLevel;

		// If it's ice magic, return negative 3 times the magic level
		case ICE:

			return -3 * magLevel;

		// Otherwise the magic has no effect so return 0
		default:

			return 0;
	}
}
