#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#define kl 10        

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, k;    char *str;
	str = (char*)malloc(kl * sizeof(char)); // ���������� ������ � ��������� ������
	
	if (!str) // �������� �� ��������� ������
	{
		puts("������ ��������� ������");
		return 0;
	}

	printf("\n�������� ��������:  %d\n", kl);
	printf("\n������� ������ �������� �����\n");
	fflush(stdin);
	fgets(str, kl, stdin);

	system("CLS");
	printf("\n\n�������� ������ : ");     // ����� �������� ������
	printf(str);		// fputs(str, stdin);


	for (i = 0; i < (kl/2); i++) // �������� ����������
	{
		k = *(str + i);
		*(str + i) = *(str + (kl - i));
		*(str + (kl - i)) = k;
	}

	printf("\n��������������� ������ : ");  // ����� ����� ������
	printf(str);		//fputs(str, stdin);
	printf("\n");
	return 0;
}