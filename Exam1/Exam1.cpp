#include <iostream>
#include <fstream>
#include "Exam1.h"
using namespace std;
struct void_place
{
	int x;
	int y;
};
enum step {left = 1, right, up, down} my_move;
void func_main(int mas[][4], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "\t" << mas[i][j];
		}
		cout << "\n\n";
	}
}

int func_swap(int  mas[][4], int step, void_place* place)
{
	switch (step)
	{
	case 1:
		int tmp;
		if (place->y - 1 >= 0)
		{
			//mas[][]
			tmp = mas[place->x][place->y];
			mas[place->x][place->y] = mas[place->x][place->y - 1];
			mas[place->x][place->y - 1] = tmp;
			place->y -= 1;
		}
		break;
	case 2:
		if (place->y + 1 >= 0)
		{
			tmp = mas[place->x][place->y];
			mas[place->x][place->y] = mas[place->x][place->y + 1];
			mas[place->x][place->y + 1] = tmp;
		}
		break;
	case 3:
		if (place->x - 1 >= 0)
		{
			tmp = mas[place->x][place->y];
			mas[place->x][place->y] = mas[place->x - 1][place->y];
			mas[place->x - 1][place->y] = tmp;
		}
		break;
	case 4:
		if (place->x + 1 >= 0)
		{
			tmp = mas[place->x][place->y];
			mas[place->x][place->y] = mas[place->x + 1][place->y];
			mas[place->x + 1][place->y] = tmp;
		}
		break;
	default:
		break;

	}
	return 0;
}

	int main()
	{
		void_place place{ 3,3 };
		int map[4][4]{ {15,2,1,12},{8,5,6,11}, {4,9,10,7},{3,14,13,0} };
		cout << "\n";
		setlocale(LC_ALL, "rus");
		func_main(map, 4);
		cout << "Координата X " << place.x << ", " << "координата Y " << place.y << "\n";
		func_swap(map, 1, &place);
		cout << "\n";
		func_main(map, 4);
		cout <<"Координата X " << place.x <<", " << "координата Y " << place.y << "\n";

	}


