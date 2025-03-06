//
// Created by Kenneth Espaldon on 11/20/24.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "BoardView.h"

#include "Model.h"
#include "SplashScreen.h"
#include <SFML/Graphics.hpp>


class Controller
{
private:
	Model *model;
	BoardView *boardView;
	SplashScreen *splashScreen;
	std::string playerTurn;

public:
	// Controller();
	Controller(Model& model, BoardView& boardView, SplashScreen& splashScreen);
	void eventHandler(sf::RenderWindow &window, sf::Event &event);
	void togglePlayerTurn();
	std::string checkForWinner();
};



#endif //CONTROLLER_H
