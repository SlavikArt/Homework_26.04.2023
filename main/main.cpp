#include <iostream>
#include <vector>
#include <list>
#include "Point.h"
using namespace std;

int main()
{
	srand(time(0));

	cout << "list<Point<int>>:\n";

	list<Point<int>> lst;

	for (int i = 0; i < 5; i++)
	{
		lst.push_back(
			Point<int>(
				rand() % 10,
				rand() % 10,
				rand() % 10
			)
		);
	}

	for (const auto& point: lst)
	{
		cout << point << "\n";
	}
	cout << "\n";

	cout << "list<list<Point<int>>>:\n";

	list<list<Point<int>>> lst2;

	for (int i = 0; i < 3; i++)
	{
		list<Point<int>> tmp;

		for (int i = 0; i < 5; i++)
		{
			tmp.push_back(
				Point<int>(
					rand() % 10,
					rand() % 10,
					rand() % 10
				)
			);
		}
		lst2.push_back(tmp);
	}

	for (const auto& subList : lst2)
	{
		for (const auto& point : subList)
		{
			cout << point << ", ";
		}
		cout << "\n";
	}
}
