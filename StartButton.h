//
// Created by Kenneth Espaldon on 12/3/24.
//

#ifndef STARTBUTTON_H
#define STARTBUTTON_H

#include <SFML/Graphics.hpp>

class StartButton : public sf::Drawable
{
private:
	sf::RectangleShape rect;
	sf::Text text;
	sf::Font font;

public:
	StartButton();
  StartButton(const sf::Vector2f& size, const sf::Vector2f& position);
	bool clicked(sf::RenderTarget &target, sf::Event &event);
	void setPosition(float x, float y);
	void setSize(const sf::Vector2f &size);
	virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
	void clear();
};



#endif //STARTBUTTON_H
