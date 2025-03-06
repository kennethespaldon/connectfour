//
// Created by Kenneth Espaldon on 11/20/24.
//

#include "Model.h"

Model::Model()
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			board[i][j] = "empty";
		}
	}
}

void Model::setSlot(int row, int col, const std::string& color)
{
		board[row][col] = color;
}

std::string Model::getSlot(int row, int col)
{
	return board[row][col];
}