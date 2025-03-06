// #include <iostream>
#include <iostream>

#include "BoardView.h"
#include "ColumnView.h"
#include "Controller.h"
#include "SlotView.h"
#include "StartButton.h"
#include "Information.h"
#include "SplashScreen.h"

int main()
{
	sf::RenderWindow window({700, 630, 32}, "Connect 4");
	window.setFramerateLimit(60);

	Model model;
	BoardView view(window);
	SplashScreen splashScreen(window);
	Controller controller(model, view, splashScreen);

	bool clicked = false;
	bool start = false;
	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}

			if(sf::Mouse::isButtonPressed(sf::Mouse::Left) == true)
			{
				clicked = true;
			}

			if(start)
			{
				controller.eventHandler(window, event);
			}
			else
			{
				splashScreen.eventHandler(window, event);
			}
		}

		window.clear(sf::Color::Black);
		if(clicked)
		{
			view.draw(window, sf::RenderStates::Default);
			start = true;
		}
		else
		{
			splashScreen.draw(window, sf::RenderStates::Default);
		}
		window.display();
	}


	return 0;
}
