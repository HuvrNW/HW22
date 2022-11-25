#include <iostream>

void task2(int* px, int a);

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	int* px = &x;
	// Задание 1. Порядок мест.
	/*
	const int size1 = 10;
	int arr1[size1]{ 1,2,3,4,5,6,7,8,9,10 };
	int* pArr = arr1;
	std::cout << " Изначальный массив --> ";

	std::cout << '[';
	for (int i = 0; i < size1; i++)
		std::cout << *(pArr + i) << " , ";
	std::cout << "\b\b]\n";

	for (int i = 0; i < size1; i += 2) {
		int tmp = *(pArr + i);
		*(pArr + i) = *(pArr + i + 1);
		*(pArr + i + 1) = tmp;
		tmp = 0;
	}

	std::cout << " Измененный массив --> ";

	std::cout << '[';
	for (int i = 0; i < size1; i++)
		std::cout << *(pArr + i) << " , ";
	std::cout << "\b\b]\n";
	*/

	// Задание 2. Возведение в степень.
	
	std::cout << "\t\tЗадание 2.\n Возведение в степень.\n Введите два числа --> ";
	std::cin >> *px >> y;
	try {
		std::cout << " x -->\t" << x << '\n';
		std::cout << " y -->\t" << y << '\n';
		
		if (y < 0)
			throw "Программа возводит в степень только положительные числа.";
		if (y == 0)
			throw 1;
	}

	catch (const char* e) {
		std::cout << " Ошибка: " << e << '\n';
		return 0;
	}

	catch (const int& e) {
		if (e == 1) 
			std::cout << x << '^' << y << " = " << 1;
		return 0;
	}
		
		task2(&x, y);
		std::cout << x << '\n';
	
		return 0;
}

	void task2(int* px, int a) {
		int tmp = 1;
		for (int i = 1; i <= a; i++)
			tmp *= *px;
		*px = tmp;
	}