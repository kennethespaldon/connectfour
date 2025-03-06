//
// Created by Kenneth Espaldon on 11/20/24.
//

#ifndef BOARDVIEW_H
#define BOARDVIEW_H

#include <SFML/Graphics.hpp>
#include "ColumnView.h"
#include "BoardView.h"
#include "SplashScreen.h"

class BoardView : public sf::Drawable
{
private:
	sf::RenderWindow *window;
	ColumnView *column1View;
	ColumnView *column2View;
	ColumnView *column3View;
	ColumnView *column4View;
	ColumnView *column5View;
	ColumnView *column6View;
	ColumnView *column7View;
	sf::Text text;
	sf::Font font;
	sf::RectangleShape textBackground;

public:
	BoardView();
	BoardView(sf::RenderWindow& window);
	virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
	void setSlotColor(int row, int col, const std::string& color);
	std::string getSlotColor(int row, int col);
	void displayWinner(const std::string& winner);
};

#endif //BOARDVIEW_H
