#include "Matrix.h"



void Matrix::fill(double d)
{
	for (int i = 0; i < wiersze_y;i++)
		for (int j = 0; j < kolumny_x; j++)
			tab[i][j] = d;

}

Matrix::Matrix(int x = 2, int y = 2)
	:
kolumny_x(x),
wiersze_y(y)


{
	//y - liczba wierszy
	//x - liczba kolumn

	//for (int i = 0; i < y;i++) //nieptrzebne w konstruktorze
	//	delete[]  tab;

	if (x < 2 || y < 2)
	{
		std::string err = "z³e wymiary macierzy";
		throw err;
	}


	tab = new  double *[y];

	for (int i = 0; i < y;i++)
		tab[i] = new double[x];

	for (int i = 0; i < y;i++)
		for (int j = 0; j < x; j++)
			tab[i][j] = 0;


}


Matrix::~Matrix()
{
}
