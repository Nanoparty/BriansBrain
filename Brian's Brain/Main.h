#pragma once

#include "Global.h"
#include "Cell.h"

#include <SFML/Graphics.hpp>
#include <array>
#include <iostream>

using namespace std;

std::vector<Cell> cells;

array<array<unsigned char, MAP_HEIGHT>, MAP_WIDTH> buffer1;
array<array<unsigned char, MAP_HEIGHT>, MAP_WIDTH> buffer2;

void tick(array<array<unsigned char, MAP_HEIGHT>, MAP_WIDTH>& buffer1, array<array<unsigned char, MAP_HEIGHT>, MAP_WIDTH>& buffer2);

