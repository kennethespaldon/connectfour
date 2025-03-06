//
// Created by Kenneth Espaldon on 11/20/24.
//

#include "Controller.h"
#include <iostream>


// Controller::Controller()
// {
// }

Controller::Controller(Model& model, BoardView& boardView, SplashScreen& splashScreen)
	: model(&model), boardView(&boardView), splashScreen(&splashScreen)
{
	srand(time(NULL));
	if(rand() % 2 == 1)
	{
		playerTurn = "red";
	}
	else
	{
		playerTurn = "blue";
	}
}

void Controller::eventHandler(sf::RenderWindow &window, sf::Event &event)
{
	if(checkForWinner() != "none")
	{
		boardView->displayWinner(checkForWinner());
		playerTurn = "";
	}

	if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		sf::Vector2i mousePos = sf::Mouse::getPosition(window);

		if(mousePos.x >= 0 && mousePos.x < 100)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 0) == "empty")
				{
					model->setSlot(i, 0, playerTurn);
					boardView->setSlotColor(i, 0, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}

		if(mousePos.x >= 100 && mousePos.x < 200)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 1) == "empty")
				{
					model->setSlot(i, 1, playerTurn);
					boardView->setSlotColor(i, 1, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}

		if(mousePos.x >= 200 && mousePos.x < 300)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 2) == "empty")
				{
					model->setSlot(i, 2, playerTurn);
					boardView->setSlotColor(i, 2, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}

		if(mousePos.x >= 300 && mousePos.x < 400)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 3) == "empty")
				{
					model->setSlot(i, 3, playerTurn);
					boardView->setSlotColor(i, 3, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}

		if(mousePos.x >= 400 && mousePos.x < 500)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 4) == "empty")
				{
					model->setSlot(i, 4, playerTurn);
					boardView->setSlotColor(i, 4, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}

		if(mousePos.x >= 500 && mousePos.x < 600)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 5) == "empty")
				{
					model->setSlot(i, 5, playerTurn);
					boardView->setSlotColor(i, 5, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}

		if(mousePos.x >= 600 && mousePos.x < 700)
		{
			for(int i = 5; i >= 0; i--)
			{
				if(model->getSlot(i, 6) == "empty")
				{
					model->setSlot(i, 6, playerTurn);
					boardView->setSlotColor(i, 6, playerTurn);
					togglePlayerTurn();
					break;
				}
			}
		}
	}
}

void Controller::togglePlayerTurn()
{
	if(playerTurn == "red")
	{
		playerTurn = "blue";
	}
	else if(playerTurn == "blue")
	{
		playerTurn = "red";
	}
}

std::string Controller::checkForWinner()
{
	std::string winner = "none";
	for (int row = 0; row < 6; ++row) {
		for (int col = 0; col < 7; ++col) {
			std::string current = model->getSlot(row, col);
			if (current == "empty") continue;

			if (col + 3 < 7 &&
					current == model->getSlot(row, col+1) &&
					current == model->getSlot(row, col+2) &&
					current == model->getSlot(row, col+3)) {
				winner = current;
				break;
					}

			if (row + 3 < 6 &&
					current == model->getSlot(row+1, col) &&
					current == model->getSlot(row+2, col) &&
					current == model->getSlot(row+3, col)) {
				winner = current;
				break;
					}

			if (row + 3 < 6 && col + 3 < 7 &&
					current == model->getSlot(row+1, col+1) &&
					current == model->getSlot(row+2, col+2) &&
					current == model->getSlot(row+3, col+3)) {
				winner = current;
				break;
					}

			if (row + 3 < 6 && col - 3 >= 0 &&
					current == model->getSlot(row+1, col-1) &&
					current == model->getSlot(row+2, col-2) &&
					current == model->getSlot(row+3, col-3)) {
				winner = current;
				break;
					}
		}
	}

	return winner;
}