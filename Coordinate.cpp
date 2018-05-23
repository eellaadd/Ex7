#include "Board.h"
#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate Coordinate::operator=(const char c) {

	if (c == '.' || c == 'X' || c == 'O')
		data = c;
	else {
		IllegalCharException ex{ c };
		throw ex;
	}
	return *this;
}

Coordinate& Coordinate::operator=(const Coordinate& p) {
	data = p.data;
	return *this;
}

Coordinate::operator char() {
	return data;
}

bool operator == (Coordinate const & l, char const & r) {
	return l.data == r;
}

bool operator != (Coordinate const & l, char const & r) {
	return l.data != r;
}