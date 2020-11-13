#include "State.h"

State::State(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states)
{
	this->window = window;
	this->supportedKeys = supportedKeys;
	this->states = states;
	this->quit = false;
	this->pauesed = false;
}

State::~State()
{
	this->pauesed = false;
}

const bool& State::getQuit() const
{
	return this->quit;
}


void State::endState()
{
	this->quit = true;
}

void State::pauseState()
{
	this->pauesed = true;
}

void State::unpauseState()
{
	this->pauesed = false;
}

void State::updateMousePosition()
{
	this->mousePosScreen = sf::Mouse::getPosition();
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
	this->mousePosView = this->window->mapPixelToCoords(sf::Mouse::getPosition(*this->window));
	
}
