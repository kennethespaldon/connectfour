//
// Created by Kenneth Espaldon on 12/3/24.
//

#ifndef INFORMATION_H
#define INFORMATION_H

#include <SFML/Graphics.hpp>

class Information : public sf::Drawable
{
private:
	sf::RectangleShape rect;
	sf::Text text;
	sf::Font font;

public:
	Information();
	Information(const sf::Vector2f& size, const sf::Vector2f& position);
	void setPosition(float x, float y);
	void setSize(const sf::Vector2f &size);
	void clear();
	virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
};



#endif //INFORMATION_H
