# include "test.h"


bool test_wymiary()
{
	{
		// sprawdza czy wytworzy si� macierz o niepoprawnych rozmiarach
		try
		{
			Matrix m(2, 3);

			if (m.tab[m.wiersze_y - 1][m.kolumny_x -1 ] == 0)
				return true;
			else
			{
				std::string err = "macierz nie tworzy si� w prawidlowych rozmiarach";
				throw err;
			}

		}
		catch (std::string err)
		{
			std:: cout << err << std::endl;
			system("PAUSE");
			exit(1);
		}

	}
}

bool test_fill()
{
	try
	{
		Matrix m(3, 3);

		m.fill(2.5);

		for (int i = 0; i < m.wiersze_y; i++)
			for(int j = 0; j < m.kolumny_x; j++)
				if (m.tab[i][j] != 2.5)		//je�eli niepoprawnie wypelniona rzuci wyj�tek
				{
					std::string err = "macierz nie tworzy si� w prawidlowych rozmiarach";
					throw err;
				}
	

	}
	catch (std::string err)
	{
		std::cout << err << std::endl;
		system("PAUSE");
		return false;
	}

	return true;
}

bool test_konstruktora()
{
	try
	{
		Matrix m(1,3);
	}

	catch (std:: string err)
	{
		return true;
	}

	std:: cout << " nie dzia�a obs�uga b��d�w konstruktora";
	exit(1);
	return false;
}
