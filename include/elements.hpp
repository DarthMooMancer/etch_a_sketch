#ifndef ELEMENTS_HPP
#define ELEMENTS_HPP

struct Point;
void cleanup(Point** buffer, int buffer_size);

struct Point {
	Point(int row, int col, int symbol) : m_row(row), m_col(col), m_symbol(symbol) {};
        int m_row;
        int m_col;
	char m_symbol;
};

#endif
