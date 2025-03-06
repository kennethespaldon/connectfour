//
// Created by Kenneth Espaldon on 11/20/24.
//

#ifndef MODEL_H
#define MODEL_H

#include <string>

class Model {
private:
	std::string board[6][7];
	int rows = 6, cols = 7;

public:
	Model();
	void setSlot(int row, int col, const std::string& color);
	std::string getSlot(int row, int col);
};



#endif //MODEL_H
