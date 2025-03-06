//
// Created by Kenneth Espaldon on 11/21/24.
//

#include "SlotView.h"

SlotView::SlotView()
{

}

SlotView::SlotView(Slot *slot)
	: slot(slot)
{
}

void SlotView::setSlotPosition(float x, float y)
{
	slot->setSlotPosition(x, y);
}

void SlotView::setSlotColor(const std::string& color)
{
	slot->setSlotColor(color);
}

std::string SlotView::getSlotColor() const
{
	return slot->getSlotColor();
}

void SlotView::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
	window.draw(*slot);
}
