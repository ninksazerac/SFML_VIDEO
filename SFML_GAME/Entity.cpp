#include "Entity.h"

void Entity::initVariable()
{
	this->hitboxcomponent = NULL;
	this->animationComponent = NULL;
	this->movementComponent = NULL;
}

Entity::Entity()
{
	this->initVariable();
}

Entity::~Entity()
{
	delete this->hitboxcomponent;
	delete this->movementComponent;
	delete this->animationComponent;
}

//Component functions
void Entity::setTexture(sf::Texture& texture)
{
	
	this->sprite.setTexture(texture);
}

void Entity::createHitboxComponent(sf::Sprite& sprite, float offset_x, float offset_y, float width, float height)
{
	this->hitboxcomponent = new HitboxComponent(sprite, offset_x, offset_y, width, height);
}

void Entity::createMovementComponent(const float maxVelocity, const float accelerarion, const float deceleration)
{
	this->movementComponent = new MovementComponent(this->sprite, maxVelocity, accelerarion, deceleration);
}

void Entity::createAnimationComponent(sf::Texture& texture_sheet)
{
	this->animationComponent = new AnimationComponent(sprite, texture_sheet);
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

void Entity::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);

	if (this->hitboxcomponent)
		this->hitboxcomponent->render(target);
	
}
