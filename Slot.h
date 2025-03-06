//
// Created by Kenneth Espaldon on 11/21/24.
//

#ifndef SLOT_H
#define SLOT_H

#include <SFML/Graphics.hpp>

class Slot : public sf::Drawable
{
private:
	sf::CircleShape circle;
public:
	Slot();
	Slot(float radius);
	void virtual draw(sf::RenderTarget &target, sf::RenderStates states) const;
	void setSlotPosition(float x, float y);
	void setSlotColor(const std::string& color);
	std::string getSlotColor() const;
};



#endif //SLOT_H
