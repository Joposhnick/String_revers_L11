#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#define kl 10        

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, k;    char *str;
	str = (char*)malloc(kl * sizeof(char)); // объявление строки и выделение памяти
	
	if (!str) // проверка на выделение памяти
	{
		puts("ошибка выделения памяти");
		return 0;
	}

	printf("\nДоступно символов:  %d\n", kl);
	printf("\nВведите строку заданной длины\n");
	fflush(stdin);
	fgets(str, kl, stdin);

	system("CLS");
	printf("\n\nИсходная строка : ");     // вывод исходной строки
	printf(str);		// fputs(str, stdin);


	for (i = 0; i < (kl/2); i++) // механизм переворота
	{
		k = *(str + i);
		*(str + i) = *(str + (kl - i));
		*(str + (kl - i)) = k;
	}

	printf("\nПреобразованная строка : ");  // вывод новой строки
	printf(str);		//fputs(str, stdin);
	printf("\n");
	return 0;
}