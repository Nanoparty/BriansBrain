#pragma once

#include <SFML/Graphics.hpp>
#include "Global.h"
#include <array>

using std::array;

enum class CellType {
	ALIVE = 0,
	DYING = 1,
	DEAD = 2,
};

class Cell
{
public:
	Cell();

	sf::Color getColor();

	CellType getType();

	void update(array<array<sf::Color, MAP_HEIGHT>, MAP_WIDTH>& buffer);

private:
	CellType cell_type = CellType::ALIVE;
};