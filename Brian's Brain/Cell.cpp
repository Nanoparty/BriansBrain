#include "Cell.h"


Cell::Cell() {}

sf::Color Cell::getColor()
{
	if (cell_type == CellType::ALIVE) {
		return sf::Color(179, 66, 245);
	}
	else if (cell_type == CellType::DYING) {
		return sf::Color(97, 42, 130);
	}
	else {
		return sf::Color(31, 13, 41);
	}

}

void Cell::update(array<array<sf::Color, MAP_HEIGHT>, MAP_WIDTH>& buffer)
{
	
}
