#include "MovementComponent.h"

MovementComponent::MovementComponent(sf::Sprite& sprite,
	float maxVelocity, float acceleration, float deceleration)
	: sprite(sprite),
	maxVelocity(maxVelocity), acceleration(acceleration), deceleration(deceleration)
{
	
}

MovementComponent::~MovementComponent()
{

}

const sf::Vector2f& MovementComponent::getVelocity() const
{
	return this->velocity;
}



//Functions
void MovementComponent::move(const float dir_x, const float dir_y, const float& dt)
{
	//Acceleration

	this->velocity.x += this->acceleration * dir_x;

	this->velocity.y += this->acceleration * dir_y;

}

void MovementComponent::update(const float& dt)
{
	//Deceleration

	//Final move
	this->sprite.move(this->velocity * dt);//Uses velocity
}
