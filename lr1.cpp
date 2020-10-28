#include <iostream>
#include <malloc.h>
#include <math.h>
#include <time.h>

int main()
{
	int arr1[10], arr2[10], arr3[10]; // объявление массивов
	srand(time(NULL)); // присвоение ключей генерации случайных чисел в зависимости от времени
	printf_s("pervii massiv: \n");
	for (int i = 0; i < 10; i++) // генерация и вывод первого массива
	{
		arr1[i] = rand() % 11 - 5;
		printf_s("%d ", arr1[i]);
	}
	printf_s("\nvtoroi massiv: \n");
	for (int i = 0; i < 10; i++) // генерация и вывод второго массива
	{
		arr2[i] = rand() % 11 - 5;
		printf_s("%d ", arr2[i]);
	}
	printf_s("\nitogovii massiv:\n");
	for (int i = 0; i < 10; i++) // генерация и вывод третьего массива
	{
		if (arr1[i] == arr2[i]) // проверка на одинаковые значения
			arr3[i] = arr1[i];
		else
			arr3[i] = arr1[i] + arr2[i]; // если значения одинаковые то производится сложение
		printf_s("%d ", arr3[i]);
	}
	return 0;
}