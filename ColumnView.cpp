//
// Created by Kenneth Espaldon on 11/21/24.
//

#include "ColumnView.h"

ColumnView::ColumnView(int col, sf::Vector2u windowSize)
	: slot1View(new SlotView(new Slot())), slot2View(new SlotView(new Slot())), slot3View(new SlotView(new Slot())),
		slot4View(new SlotView(new Slot())), slot5View(new SlotView(new Slot())), slot6View(new SlotView(new Slot())),
		windowSize(windowSize)
{
	slot1View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (0 * 100 + 10)));
	slot2View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (1 * 100 + 10)));
	slot3View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (2 * 100 + 10)));
	slot4View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (3 * 100 + 10)));
	slot5View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (4 * 100 + 10)));
	slot6View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (5 * 100 + 10)));
}

ColumnView::ColumnView(SlotView* slot1View, SlotView* slot2View, SlotView* slot3View,
	SlotView* slot4View, SlotView* slot5View, SlotView* slot6View, sf::Vector2u windowSize, int col)
		: slot1View(slot1View), slot2View(slot2View), slot3View(slot3View),
			slot4View(slot4View), slot5View(slot5View), slot6View(slot6View), windowSize(windowSize)
{
	slot1View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (0 * 100 + 10)));
	slot2View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (1 * 100 + 10)));
	slot3View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (2 * 100 + 10)));
	slot4View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (3 * 100 + 10)));
	slot5View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (4 * 100 + 10)));
	slot6View->setSlotPosition((col - 1) * 100 + 5, windowSize.y - ((45.f * 2) + (5 * 100 + 10)));
}

void ColumnView::setColumnPosition(float x, sf::Vector2u windowSize)
{
	slot1View->setSlotPosition(x, windowSize.y - ((45.f * 2) + (5 * 100 + 10)));
	slot2View->setSlotPosition(x, windowSize.y - ((45.f * 2) + (4 * 100 + 10)));
	slot3View->setSlotPosition(x, windowSize.y - ((45.f * 2) + (3 * 100 + 10)));
	slot4View->setSlotPosition(x, windowSize.y - ((45.f * 2) + (2 * 100 + 10)));
	slot5View->setSlotPosition(x, windowSize.y - ((45.f * 2) + (1 * 100 + 10)));
	slot6View->setSlotPosition(x, windowSize.y - ((45.f * 2) + (0 * 100 + 10)));
}

void ColumnView::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
	slot1View->draw(window, states);
	slot2View->draw(window, states);
	slot3View->draw(window, states);
	slot4View->draw(window, states);
	slot5View->draw(window, states);
	slot6View->draw(window, states);
}

void ColumnView::setSlotColor(int row, const std::string& color)
{
	if(row == 0) slot6View->setSlotColor(color);
	else if(row == 1) slot5View->setSlotColor(color);
	else if(row == 2) slot4View->setSlotColor(color);
	else if(row == 3) slot3View->setSlotColor(color);
	else if(row == 4) slot2View->setSlotColor(color);
	else if(row == 5) slot1View->setSlotColor(color);
}

const std::string ColumnView::getSlotColor(int row)
{
	if(row == 0) return slot6View->getSlotColor();
	else if(row == 1) return slot5View->getSlotColor();
	else if(row == 2) return slot4View->getSlotColor();
	else if(row == 3) return slot3View->getSlotColor();
	else if(row == 4) return slot2View->getSlotColor();
	else if(row == 5) return slot1View->getSlotColor();
}