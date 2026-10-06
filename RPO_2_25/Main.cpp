#include <iostream> 
#include <Windows.h>

int Sum(int one, double two)
{
	return one + two;
}

int Sum(double one, int two)
{
	return one + two;
}

double Sum(double one, double two, int f)
{
	return one + two;
}

void SetArray(int arr[], int size);
void SetArray(double arr[], int size);
void SetArray(char arr[], int size);

void PrintArray(int arr[], int size);
void PrintArray(double arr[], int size);
void PrintArray(char arr[], int size);


template<typename T1, typename T2>
T1 Substruct(T1 one, T2 two)
{
	return one - two;
}


int Fak(int num)
{
	if (num < 0)
	{
		return 0;
	}
	if (num == 0)
	{
		return 1;
	}
	return num * Fak(num - 1);
}

int RecMult(int one, int two)
{
	if (two == 0)
	{
		return 0;
	}

	return one + RecMult(one, two - 1);
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); //  1251
	srand(time(NULL));

	
	


	const int size = 6;
	int arrI[size]{};
	double arrD[size]{};
	char arrC[size]{};

	SetArray(arrI, size);
	
	PrintArray(arrI, size);
	PrintArray(arrD, size);
	PrintArray(arrC, size);



	return 0;
}


void SetArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 9 + 1;
	}
}
void SetArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 20 + 1) + (double)(rand() % 9 + 1) / 10;
	}
}
void SetArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 26 + 97;
	}
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void PrintArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void PrintArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}



/*const int size = 10;
int arr1[size]{}, temp[size]{};
int count = 0;


for (int i = 0; i < size; i++)
{
	arr1[i] = rand() % 6;
	if (arr1[i] == 0)
	{
		arr1[i] = -1;
	}
	std::cout << arr1[i] << " ";
}

std::cout << "\n\n";

for (int i = 0, j = 0; i < size; i++, j++)
{
	if (arr1[i] == -1)
	{
		i++; count++;
	}
	temp[j] = arr1[i];
}
for (int i = size - 1, j = 0; j < count; i--, j++)
{
	temp[i] = -1;
}
for (int i = 0; i < size; i++)
{
	arr1[i] = temp[i];
	std::cout << arr1[i] << ' ';
}*/

/*const int size = 10;
int arr1[size]{};
int count = 0;

for (int i = 0; i < size; i++)
{
	arr1[i] = rand() % 6;
	std::cout << arr1[i] << " ";
}

std::cout << "\n\n";

for (int i = 0; i < size; i++)
{
	if (arr1[i] != 0)
	{
		arr1[count] = arr1[i];
		count++;
	}

}
std::cout << "\n\n";
for (int i = count; i < size; i++)
{
	arr1[i] = -1;
}
for (int i = 0; i < size; i++)
{
	std::cout << arr1[i] << " ";
}*/

/*
const int side = 2, row = 4, col = 5;

int arr[side][row][col];

for (int i = 0; i < side; i++)
{
	for (int j = 0; j < row; j++)
	{
		for (int k = 0; k < col; k++)
		{
			arr[i][j][k] = rand() % 5;
			std::cout << arr[i][j][k] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n\n";
}





const int row = 3;
const int col = 4;

int arr[row][col];
int sumRow = 0, sumCol = 0, totalSum = 0;

for (int i = 0; i < row; i++)
{
	sumRow = 0;
	for (int j = 0; j < col; j++)
	{
		arr[i][j] = rand() % 10;
		sumRow += arr[i][j];
		std::cout << arr[i][j] << "\t";
	}
	std::cout << "\t|\t" << sumRow << "\n";
}

std::cout << "\n--------------------------------------------------\n";

for (int i = 0; i < col; i++)
{
	sumCol = 0;
	for (int j = 0; j < row; j++)
	{
		sumCol += arr[j][i];
	}
	std::cout << sumCol << "\t";
	totalSum += sumCol;
}
std::cout << "\t|\t" << totalSum << "\n\n";
*/

/* 
	Типы данных:

	bool						true/false		0 - false
	char						'+'				43
	unsigned char				'+'				43		0 - 255

	short						123				-32768  --  32767
	unsigned short				123				0 - 65535

	int						123456789		-2147483648  --  2147483647
	unsigned int	       123456789				0 - 4294967295
	long long int			45619846219				большой

	float					123456.987654				3.4Е-38 -- 3.4Е+38
	double					9876465231.156546			1.7Е-308 -- 1.7Е+308
	long double				6514651465316316531463		3.4Е-4932 - 1.1E + 4932

	auto   !!!

	Операторы:
	Математические: + - * / = % ++ -- += -= *= /= ()
	Сравнительные: < > <= >= == !=		<=>
	Логические: && (и)		|| (или)	! (не)

	ТАБУ:	goto	and or not		int имяПеременной


	double rub = 0, dollar = 86.47, euro = 100.5,
		Farit = 100.0, yuan = 12.88, choose = 0, commission = 0;

	std::cout << "Конвертер валют\n\n";

	std::cout << "Введите рубли: ";
	std::cin >> rub;

	std::cout << "Выберите валюту для покупки\n";
	std::cout << "1 - Доллар " << dollar << "\n";
	std::cout << "2 - Евро " << euro << "\n";
	std::cout << "3 - Фарит " << Farit << "\n";
	std::cout << "4 - Юань " << yuan << "\n";
	std::cout << "Ввод: ";
	std::cin >> choose;

	commission = rub - rub * 0.95;
	rub -= commission;

	if (choose == 1)
	{
		std::cout << "К выплате: " << rub / dollar << "\nКомиссия банка: "
			<< commission << " рублей\n\n";
	}
	else if (choose == 2)
	{
		std::cout << "К выплате: " << rub / euro << "\nКомиссия банка: "
			<< commission << " рублей\n\n";
	}
	else if (choose == 3)
	{
		std::cout << "К выплате: " << rub / Farit << "\nКомиссия банка: "
			<< commission << " рублей\n\n";
	}
	else if (choose == 4)
	{
		std::cout << "К выплате: " << rub / yuan << "\nКомиссия банка: "
			<< commission << " рублей\n\n";
	}
	else
	{
		std::cout << "Некорректный ввод\n";
	}


		double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";

	std::cout << "Введите А: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;
	std::cout << "Дискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Корней нет!\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n";
		std::cout << "Второй корень: " << x2 << "\n";
	}


*/



/*

int choose = 0, hp = 0, number = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\"\n\n\n";
				std::cout << "1 - Лёгкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем\n";
							std::cout << "Осталось жизней: " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}

							std::cout << "\nНе верно\n";

							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNumber << "\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем\n";
							std::cout << "Осталось жизней: " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}

							std::cout << "\nНе верно\n";

							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNumber << "\n";
										system("pause");
										break;
									}
								}


								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\"\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для лёгкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для лёгкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимый лимит от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимый лимит от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHpHard = choose;
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимый лимит от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							chance = choose;
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n\n";
			Sleep(1500);
		}
	}

*/

/*

	const int size = 10;

	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		std::cout << arr[i] << " ";
	}

	double plus = 0, minus = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			minus += arr[i];
		}
		else if (arr[i] > 0)
		{
			plus += arr[i];
		}
	}

	std::cout << "\n\n" << plus << " " << minus << "\n\n";

	std::cout << (plus + minus) / size;

	*/


/*

const int row = 3;
	const int col = 4;

	int arr[row][col];
	int sumRow = 0, sumCol = 0, totalSum = 0;;

	for (int i = 0; i < row; i++)
	{
		sumRow = 0;
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			sumRow += arr[i][j];
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\t|\t" << sumRow << "\n";
	}

	std::cout << "\n--------------------------------------------------\n";

	for (int i = 0; i < col; i++)
	{
		sumCol = 0;
		for (int j = 0; j < row; j++)
		{
			sumCol += arr[j][i];
		}
		std::cout << sumCol << "\t";
		totalSum += sumCol;
	}
	std::cout << "\t|\t" << totalSum << "\n\n";


*/
