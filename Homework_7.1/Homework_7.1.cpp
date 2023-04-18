// Homework_7.1.cpp 
#include <iostream>
#include <windows.h>
#define MODE 10

#ifndef  MODE
#error MODE not defined!!!!!
#endif

#if MODE ==1
void add() 
{
	int a, b;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << a+b << std::endl;
}
#endif // MODE ==1



int main()
{
	system("chcp 1251");
	system("cls");

	

	#if MODE == 0

		std::cout << "Работаю в режиме тренировки" << std::endl;

	#elif MODE == 1

		std::cout << "Работаю в боевом режиме" << std::endl;
		add();
	#else

		std::cout << "Неизвестный режим. Завершение работы" << std::endl;
	
	#endif

   
}
