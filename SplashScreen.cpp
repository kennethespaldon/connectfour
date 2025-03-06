//
// Created by Kenneth Espaldon on 12/3/24.
//

#include "SplashScreen.h"

SplashScreen::SplashScreen(const sf::RenderTarget &window)
{
	if(texture.loadFromFile("images/connect4.jpeg"))
	{
		sprite.setTexture(texture);
		sprite.setScale((static_cast<float>(window.getSize().y) / (texture.getSize().x)) + 0.04, static_cast<float>(window.getSize().y) / (texture.getSize().y));
	}

	information.setPosition(0, 0);
	startBtn.setPosition(150, 450);
}


void SplashScreen::eventHandler(sf::RenderTarget &window, sf::Event &event)
{
	if(event.type == sf::Event::MouseButtonPressed)
	{
		startBtn.clear();
		information.clear();
		sprite.setTexture(sf::Texture());
		sprite.setColor({0, 0, 0, 0});
	}
}

bool SplashScreen::btnClicked(sf::RenderTarget &window, sf::Event &event)
{
	if(event.type == sf::Event::MouseButtonPressed)
	{
		return true;
	}
}

void SplashScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(sprite, states);
	information.draw(target, states);
	startBtn.draw(target, states);
}
