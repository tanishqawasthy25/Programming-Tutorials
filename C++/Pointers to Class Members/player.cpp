#include "player.h"

// Constructor -- Set everything to zero
PLAYER::PLAYER()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;

	health = 0.0f;
}

// Sets the player position to the (x,y,z) passed in
void PLAYER::setPos(fl t xPos, float yPos, float zPos)
{
	x = xPos;
	y = yPos;
	z = zPos;
}

// Sets the player health to the value passed in
void PLAYER::setHealth(float hhh)
{
	// If "hhh" (health value) is NOT between 0 - 1, just ignore it
	if (hhh < 0.0f || hhh > 1.0f)
		return;

	health = hhh; // Set the health value
}