#include "Entity.h"
#include <iostream>

using namespace std;
Entity::Entity() {}
Entity::Entity(float X, float Y, float Z, float aggroRange, int entitiesInRange) {
	x = X;
	y = Y;
	z = Z;
}

float Entity::getx() {
	return x;
}

float Entity::gety() {
	return y;
}

float Entity::getz() {
	return z;
}

float Entity::getAggroRange() {
	return aggroRange;
}

int Entity::getEntitiesInRange() {
	return entitiesInRange;
}

void Entity::updateAggroRange(float x) { aggroRange = x; }