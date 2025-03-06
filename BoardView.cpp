//
// Created by Kenneth Espaldon on 11/20/24.
//

#include "BoardView.h"

BoardView::BoardView()
{

}

BoardView::BoardView(sf::RenderWindow& window)
	: column1View(new ColumnView(1, window.getSize())), column2View(new ColumnView(2, window.getSize())),
		column3View(new ColumnView(3, window.getSize())), column4View(new ColumnView(4, window.getSize())),
		column5View(new ColumnView(5, window.getSize())), column6View(new ColumnView(6, window.getSize())),
    column7View(new ColumnView(7, window.getSize())), window(&window)
{
	if(font.loadFromFile("fonts/OpenSans-Bold.ttf"))
	{
		text.setFont(font);
		text.setCharacterSize(100);
		text.setPosition(105, 250);
		text.setFillColor(sf::Color::Transparent);
	}
}

void BoardView::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
	for(int i = 1; i < window.getSize().x; i += 100.0f)
	{
		sf::Vertex line[] = {
			sf::Vertex(sf::Vector2f(100.0f + i, 0.f), sf::Color::White),   // Starting point
			sf::Vertex(sf::Vector2f(100.0f + i, window.getSize().y), sf::Color::White)  // Ending point
	};
		window.draw(line, 2, sf::Lines);
	}

	column1View->draw(window, states);
	column2View->draw(window, states);
	column3View->draw(window, states);
	column4View->draw(window, states);
	column5View->draw(window, states);
	column6View->draw(window, states);
	column7View->draw(window, states);
	window.draw(textBackground);
	window.draw(text);
}

void BoardView::setSlotColor(int row, int col, const std::string& color)
{
	if(col == 0)
	{
		column1View->setSlotColor(row, color);
	}
	else if(col == 1)
	{
		column2View->setSlotColor(row, color);
	}
	else if(col == 2)
	{
		column3View->setSlotColor(row, color);
	}
	else if(col == 3)
	{
		column4View->setSlotColor(row, color);
	}
	else if(col == 4)
	{
		column5View->setSlotColor(row, color);
	}
	else if(col == 5)
	{
		column6View->setSlotColor(row, color);
	}
	else if(col == 6)
	{
		column7View->setSlotColor(row, color);
	}
}

std::string BoardView::getSlotColor(int row, int col)
{
	if(col == 0)
	{
		return column1View->getSlotColor(row);
	}
	else if(col == 1)
	{
		return column2View->getSlotColor(row);
	}
	else if(col == 2)
	{
		return column3View->getSlotColor(row);
	}
	else if(col == 3)
	{
		return column4View->getSlotColor(row);
	}
	else if(col == 4)
	{
		return column5View->getSlotColor(row);
	}
	else if(col == 5)
	{
		return column6View->getSlotColor(row);
	}
	else if(col == 6)
	{
		return column7View->getSlotColor(row);
	}
}


void BoardView::displayWinner(const std::string& winner)
{
	if(winner == "red")
	{
		text.setFillColor(sf::Color::Red);
	}
	else if (winner == "blue")
	{
		text.setFillColor(sf::Color::Blue);
	}
	text.setString(winner + " wins");
	textBackground.setFillColor(sf::Color(50, 50, 50, 200));
	sf::FloatRect textBounds = text.getGlobalBounds();
	textBackground.setSize(sf::Vector2f(textBounds.width, textBounds.height));
	textBackground.setPosition(textBounds.left, textBounds.top);
}