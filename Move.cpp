#include <SDL_image.h>
#include <SDL.h>
#undef main

#include <stdio.h>
#include <vector>
#include "Collision.h"
#include "Cursor.h"
#include "Move.h"
using namespace std;

Collision collision1;
Cursor cursor1;

void Move::moveBall(Ball &a) {
	//a.velocity.y += .2;

	if (a.velocity.x > collision1.maxSpeed) {
		a.velocity.x = (float)round(collision1.maxSpeed);
	}
	if (a.velocity.y > collision1.maxSpeed) {
		a.velocity.y = (float)round(collision1.maxSpeed);
	} 
	a.posX += a.velocity.x;
	a.posY += a.velocity.y;
}