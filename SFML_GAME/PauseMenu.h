#ifndef PAUSEMENU_H
#define PAUSEMENU_H

#include "Button.h"

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include <sstream>
#include<vector>
#include<stack>
#include<map>


#include"SFML\System.hpp"
#include"SFML\Window.hpp"
#include"SFML\Graphics.hpp"
#include"SFML\Audio.hpp"
#include"SFML\Network.hpp"

class PauseMenu
{
private:

		sf::RectangleShape background;
		sf::RectangleShape container;

		std::map<std::string, Button*> buttons;

		//Private Functions
public:
	PauseMenu(sf::RenderWindow& window);
	virtual ~PauseMenu();

	//Functions
	void update();
	void render(sf::RenderTarget& target);
};
#endif // !PAUSEMENU_h

