//
// Created by Kenneth Espaldon on 11/21/24.
//

#ifndef COLUMNVIEW_H
#define COLUMNVIEW_H

#include <SFML/Graphics.hpp>
#include "SlotView.h"

class ColumnView : public sf::Drawable
{
private:
	sf::Vector2u windowSize;
	SlotView *slot1View;
	SlotView *slot2View;
	SlotView *slot3View;
	SlotView *slot4View;
	SlotView *slot5View;
	SlotView *slot6View;

public:
	ColumnView(int col, sf::Vector2u windowSize);
	ColumnView(SlotView* slot1View, SlotView* slot2View, SlotView* slot3View, SlotView* slot4View,
		SlotView* slot5View, SlotView* slot6View, sf::Vector2u windowSize, int col);
	void setColumnPosition(float x, sf::Vector2u windowSize);
	virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
	void setSlotColor(int row, const std::string& color);
	const std::string getSlotColor(int row);
};



#endif //COLUMNVIEW_H
