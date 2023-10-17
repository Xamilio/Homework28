#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;
//1
//int mystrcmp(const char* str1, const char* str2)
//{
//	int i = 0;
//	do
//	{
//		if (str1[i] > str2[i])
//		{
//			return 1;
//		}
//		if (str1[i] < str2[i])
//		{
//			return -1;
//		}
//		i++;
//	} while (str1[i - 1] != '\0');
//	return 0;
//}
//int main()
//{
//	char str1[100];
//	char str2[100];
//	cout << "Введите 1 строчку: ";
//	fgets(str1, sizeof(str1), stdin);
//	cout << "Введите 2 строчку: ";
//	fgets(str2, sizeof(str2), stdin);
//
//	cout << mystrcmp(str1, str2);
//}

//2
//int StringToNumber(char* str)
//{
//	int i = 0;
//	int s = 0;
//	int h = 1;
//	if (str[i] == '-')
//	{
//		i++;
//		h = -1;
//	}
//	while (str[i] != '\n')
//	{
//		if (str[i] <= '0' || str[i] > '9')
//		{
//			cout << "Error";
//			break;
//		}
//		s = s * 10;
//		s += str[i] - '0';
//		i++;
//
//	}
//	return s * h;
//}
//int main()
//{
//	char str[100];
//	cout << "Введите строку: ";
//	fgets(str, sizeof(str), stdin);
//	
//	cout << StringToNumber(str);
//}

//3
//char* NumberToString(int number)
//{
//	int size = 0;
//	int znak = 0;
//	if (number < 0)
//	{
//		znak = 1;
//	}
//	number = abs(number);
//	char* str = new char [100];
//	do
//	{
//		str[size] = number % 10 + '0';
//		number = number / 10;
//		size++;
//	} while (number != 0);
//	char* str1 = new char[size + znak];
//	if (znak == 1)
//	{
//		str1[0] = '-';
//	}
//	for (int h = 0; h < size; h++)
//	{
//		str1[znak + h] = str[size - h - 1];
//	}
//	str1[size + znak] = '\0';
//  delete str;
//	return str1;
//}
//int main()
//{
//	int n;
//	cout << "Введите число: ";
//	cin >> n;
//	cout << NumberToString(n);
//}


//4
//char* Uppercase(char* str1)
//{
//	int i = 0;
//	while (str1[i] != '\0')
//	{
//		if (str1[i] >= 'a'&& str1[i] <= 'z')
//		{
//			str1[i] = str1[i]  - 32;
//		}
//		i++;
//	}
//	return str1;
//}
//
//int main()
//{
//	const int size = 100;
//	char str[size];
//	cout << "Введите строку: ";
//	fgets(str, sizeof(str), stdin);
//	cout << Uppercase(str);
//}

//5
//char* Lowercase(char* str1)
//{
//	int i = 0;
//	while (str1[i] != '\0')
//	{
//		if (str1[i] >= 'A'&& str1[i] <= 'Z')
//		{
//			str1[i] = str1[i] + 32;
//		}
//		i++;
//	}
//	return str1;
//
//}
//int main()
//{
//	const int size = 100;
//	char str[size];
//	cout << "Введите строку: ";
//	fgets(str, sizeof(str), stdin);
//	cout << Lowercase(str);
//}

//6
//char* mystrrev(char* str)
//{
//    int size = strlen(str);
//    char* result = new char[size + 1];
//    for (int i = 0; i < size; i++)
//    {
//        result[size - 1 - i] = str[i];
//    }
//    result[size] = '\0';
//    return result;
//}
//int main()
//{
//    char str[100];
//    cout << "Введите строку: ";
//    fgets(str, sizeof(str), stdin);
//    cout << mystrrev(str);
//}