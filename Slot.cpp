//
// Created by Kenneth Espaldon on 11/21/24.
//

#include "Slot.h"

Slot::Slot()
{
	circle.setRadius(45.f);
	circle.setFillColor(sf::Color::White);
	circle.setPosition(0.f, 0.f);
}

Slot::Slot(float radius)
{
	circle.setRadius(radius);
	circle.setFillColor(sf::Color::White);
	circle.setPosition(0.f, 0.f);
}

void Slot::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
	window.draw(circle);
}

void Slot::setSlotPosition(float x, float y)
{
	circle.setPosition(x, y);
}

void Slot::setSlotColor(const std::string &color)
{
	if(color == "red")
	{
		circle.setFillColor(sf::Color::Red);
	}
	else if(color == "blue")
	{
		circle.setFillColor(sf::Color::Blue);
	}
}

std::string Slot::getSlotColor() const
{
	if(circle.getFillColor() == sf::Color::Red)
	{
		return "red";
	}
	else if(circle.getFillColor() == sf::Color::Blue)
	{
		return "blue";
	}

	return "empty";
}

