#include "Button.h"

Button::Button(float x, float y, float width, float height,
	sf::Font* font, std::string text,
	sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor)
{
	this->shape.setPosition(sf::Vector2f(x, y));
	this->shape.setSize(sf::Vector2f(width, height));

	this->font = font;
	this->text.setFont(*this->font);
	this->text.setString(text);
	this->text.setFillColor(sf::Color::White);
	this->text.setCharacterSize(12);
	this->text.setPosition(
		this->shape.getPosition().x / 2.f - this->text.getGlobalBounds().width / 2.f,
		this->shape.getPosition().y / 2.f - this->text.getGlobalBounds().height / 2.f
	);


	this->idleColor = idleColor;
	this->hoverColor = hoverColor;
	this->activeColor = activeColor;

	this->shape.setFillColor(this->idleColor);
}
Button::~Button()
{

}

void Button::update(const sf::Vector2f mousePos)
{
	/*Update the booleans for hover and pressed*/

	if (this->shape.getGlobalBounds().contains(mousePos))
	{

	}
}

void Button::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
