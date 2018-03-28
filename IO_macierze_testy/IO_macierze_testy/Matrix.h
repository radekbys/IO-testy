#pragma once
#include<iostream>
#include <string>


class Matrix
{
public:

	int kolumny_x;
	int wiersze_y;

	double ** tab;




	void fill(double d);


	Matrix(int x, int y);




	~Matrix();
};

