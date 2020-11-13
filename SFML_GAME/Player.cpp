#include "Player.h"

//Initializer functions
void Player::initVariables()
{

}

void Player::initComponents()
{
	this->createMovementComponent(3.f, 5.f, 1.f);
}

//Constructors / Destructors
Player::Player(float x, float y, sf::Texture& texture)
{
	this->initVariables();
	this->initComponents();

	this->setTexture(texture);
	this->setPosition(x, y);
}

Player::~Player()
{
}
