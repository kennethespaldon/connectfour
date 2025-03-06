//
// Created by Kenneth Espaldon on 12/3/24.
//

#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Window/Event.hpp>

#include <SFML/Graphics.hpp>
#include "Information.h"
#include "StartButton.h"

class SplashScreen : public sf::Drawable
{
private:
	Information information;
	StartButton startBtn;
	sf::Texture texture;
	sf::Sprite sprite;

public:
	SplashScreen(const sf::RenderTarget &window);
	void eventHandler(sf::RenderTarget &window, sf::Event &event);
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	bool btnClicked(sf::RenderTarget &window, sf::Event &event);
};



#endif //SPLASHSCREEN_H
