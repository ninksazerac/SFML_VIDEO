#include "Entity.h"

void Entity::initVariable()
{

	this->movementComponent = NULL;
}

Entity::Entity()
{
	this->initVariable();
}

Entity::~Entity()
{
	delete this->movementComponent;
	delete this->animatioComponent;
}

//Component functions
void Entity::setTexture(sf::Texture& texture)
{
	
	this->sprite.setTexture(texture);
}

void Entity::createMovementComponent(const float maxVelocity, const float accelerarion, const float deceleration)
{
	this->movementComponent = new MovementComponent(this->sprite, maxVelocity, accelerarion, deceleration);
}

void Entity::createAnimationComponent(sf::Texture& texture_sheet)
{
	this->animatioComponent = new AnimationComponent(sprite, texture_sheet);
}

//Functions
void Entity::setPosition(const float x, const float y)
{
	this->sprite.setPosition(x, y);

}

void Entity::move(const float dir_x, const float dir_y, const float& dt)
{
	if (this->movementComponent)
	{
		this->movementComponent->move(dir_x, dir_y, dt);//Sets velocity
	}
	
}

void Entity::update(const float& dt)
{
	
}

void Entity::render(sf::RenderTarget* target)
{

		target->draw(this->sprite);
	
}
