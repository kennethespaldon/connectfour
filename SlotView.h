//
// Created by Kenneth Espaldon on 11/21/24.
//

#ifndef SLOTVIEW_H
#define SLOTVIEW_H

#include "Slot.h"

class SlotView : public sf::Drawable
{
private:
	Slot *slot;

public:
	SlotView();
	SlotView(Slot *slot);
	void setSlotPosition(float x, float y);
	void setSlotColor(const std::string& color);
	std::string getSlotColor() const;
	virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};



#endif //SLOTVIEW_H
