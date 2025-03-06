//
// Created by Kenneth Espaldon on 12/3/24.
//

#include "StartButton.h"

#include <iostream>

StartButton::StartButton()
{
	rect.setFillColor({128, 128, 128});
	rect.setOutlineThickness(5);
	rect.setOutlineColor({220,220,220});
	rect.setSize({100, 50});

	if (font.loadFromFile("fonts/OpenSans-Bold.ttf"))
	{
		text.setFont(font);
		text.setCharacterSize(12);
		text.setString("Click to Start");
		text.setFillColor(sf::Color::White);
		text.setPosition(rect.getPosition().x + ((rect.getSize().x / 2) - text.getGlobalBounds().width / 2), rect.getPosition().y + ((rect.getSize().y / 2) - text.getGlobalBounds().height));
	}
}

StartButton::StartButton(const sf::Vector2f& size, const sf::Vector2f& position)
{
	rect.setFillColor({128, 128, 128});
	rect.setOutlineThickness(5);
	rect.setOutlineColor({220,220,220});
	rect.setSize(size);
	rect.setPosition(position);

	if (font.loadFromFile("fonts/OpenSans-Bold.ttf"))
	{
		text.setFont(font);
		text.setCharacterSize(12);
		text.setString("Click to Start");
		text.setFillColor(sf::Color::White);
		text.setPosition(rect.getPosition().x + ((rect.getSize().x / 2) - text.getGlobalBounds().width / 2), rect.getPosition().y + ((rect.getSize().y / 2) - text.getGlobalBounds().height));
	}
}

bool StartButton::clicked(sf::RenderTarget &target, sf::Event &event)
{
	sf::Vector2i mousePos = sf::Mouse::getPosition();
	sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));

	if(rect.getGlobalBounds().contains(mousePosF))
	{
		std::cout << "Clicked button clicked" << std::endl;
		return true;
	}

	return false;
}

void StartButton::setPosition(float x, float y)
{
	rect.setPosition(x, y);
	text.setPosition(rect.getPosition().x + ((rect.getSize().x / 2) - text.getGlobalBounds().width / 2), rect.getPosition().y + ((rect.getSize().y / 2) - text.getGlobalBounds().height));
}

void StartButton::setSize(const sf::Vector2f &size)
{
	rect.setSize(size);
}

void StartButton::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
	window.draw(rect);
	window.draw(text);
}

void StartButton::clear()
{
	text.setString("");
	text.setFillColor({0, 0, 0, 0});
	rect.setFillColor({0, 0, 0, 0});
	rect.setOutlineThickness(0);
}
