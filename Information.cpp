//
// Created by Kenneth Espaldon on 12/3/24.
//

#include "Information.h"

Information::Information()
{
	rect.setFillColor({128, 128, 128, 128});
	rect.setOutlineThickness(5);
	rect.setOutlineColor({220,220,220});
	rect.setSize({150, 75});

	if (font.loadFromFile("fonts/OpenSans-Bold.ttf"))
	{
		text.setFont(font);
		text.setCharacterSize(16);
		text.setString("Kenneth Espaldon\nFall 2023, CS003A\nCRN 72623");
		text.setFillColor(sf::Color::White);
		text.setPosition(rect.getPosition().x + ((rect.getSize().x / 2) - text.getGlobalBounds().width / 2), rect.getPosition().y + ((rect.getSize().y / 2) - text.getGlobalBounds().height / 1.75));
	}
}

Information::Information(const sf::Vector2f& size, const sf::Vector2f& position)
{
	rect.setFillColor({128, 128, 128, 128});
	rect.setOutlineThickness(5);
	rect.setOutlineColor({220,220,220});
	rect.setSize(size);
	rect.setPosition(position);

	if (font.loadFromFile("fonts/OpenSans-Bold.ttf"))
	{
		text.setFont(font);
		text.setCharacterSize(16);
		text.setString("Kenneth Espaldon\nFall 2023, CS003A\nCRN 72623");
		text.setFillColor(sf::Color::White);
		text.setPosition(rect.getPosition().x + ((rect.getSize().x / 2) - text.getGlobalBounds().width / 2), rect.getPosition().y + ((rect.getSize().y / 2) - text.getGlobalBounds().height / 1.75));
	}
}

void Information::setPosition(float x, float y)
{
	rect.setPosition(x, y);
	text.setPosition(rect.getPosition().x + ((rect.getSize().x / 2) - text.getGlobalBounds().width / 2), rect.getPosition().y + ((rect.getSize().y / 2) - text.getGlobalBounds().height / 1.75));
}

void Information::setSize(const sf::Vector2f &size)
{
	rect.setSize(size);
}

void Information::clear()
{
	text.setString("");
	text.setFillColor({0, 0, 0, 0});
	rect.setFillColor({0, 0, 0, 0});
	rect.setOutlineThickness(0);
	rect.setOutlineColor({0, 0, 0, 0});
}

void Information::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
	window.draw(rect);
	window.draw(text);
}
