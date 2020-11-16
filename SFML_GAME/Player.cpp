#include "Player.h"

//Initializer functions
void Player::initVariables()
{

}

void Player::initComponents()
{
	
}

//Constructors / Destructors
Player::Player(float x, float y, sf::Texture& texture_sheet)
{
	this->initVariables();

	this->setTexture(texture_sheet);
	this->setPosition(x, y);

	this->createMovementComponent(50.f, 10.f, 4.f);
	this->createAnimationComponent(texture_sheet);

	this->animatioComponent->addAnimation("IDLE_LEFT", 10.f, 0, 0, 4, 0, 72.4, 60); //100.f -> 10.f
	this->animatioComponent->addAnimation("WALK_LEFT", 10.f, 0, 1, 4, 1, 72.4, 60); //100.f -> 10.f
}

Player::~Player()
{

}

//Functions
void Player::update(const float& dt)
{
	this->movementComponent->update(dt);

	if (this->movementComponent->idle())
	{
	this->animatioComponent->play("IDLE_LEFT", dt);
	}
	else
	{
		this->animatioComponent->play("WALK_LEFT", dt);
	}
}
