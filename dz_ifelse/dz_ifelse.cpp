#include <iostream>;
#include <Windows.h>
using namespace std;

int main()
{

	//task1
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int choice;
	cout << "Виберіть країну, щоб глянути її столицю: 1-Україна, 2-Польща, 3-Канада" << endl; cin >> choice;

	if (choice == 1)
	{
		cout << "Київ" << endl;
	}
	else if (choice == 2) {
		cout << "Варшава" << endl;
	}
	else if (choice == 3) {
		cout << "Оттава" << endl;
	}
	else {
		cout << "Wrong choice" << endl;
	}



	// task 2

	int num_day;


	cout << "Введіть номер дня тижня(1-понеділлок і т.д.): " << endl; cin >> num_day;

	switch (num_day)
	{
	case 1:
		cout << "Будні" << endl;
		break;
	case 2:
		cout << "Будні" << endl;
		break;
	case 3:
		cout << "Будні" << endl;
		break;
	case 4:
		cout << "Будні" << endl;
		break;
	case 5:
		cout << "Будні" << endl;
		break;
	case 6:
		cout << "Вихідний" << endl;
		break;
	case 7:
		cout << "Вихідний" << endl;
		break;
	default:
		cout << "Посилка" << endl;
		break;
	}


	// task 3


	int direction;
	cout << "Введіть напрям руху корабля(1-північ, 2-південь, 3-захід, 4-схід" << endl; cin >> direction;

	switch (direction)
	{
	case 1:
		cout << "Назад на південь" << endl;
		break;
	case 2:
		cout << "Назад на північ" << endl;
		break;
	case 3:
		cout << "Назад на схід" << endl;
		break;
	case 4:
		cout << "Назад на захід" << endl;
		break;
	default:
		cout << "Помилка вводу" << endl;
		break;
	}

	// task 4

	int animal;
	cout << "Введіть номер тварини (1-7): " << endl;cin >> animal;

	switch (animal) {
	case 1:
		cout << "Жираф - травоїдна"<<endl;
		break;
	case 2:
		cout << "Орел - хижак"<<endl;
		break;
	case 3:
		cout << "Лев - хижак"<<endl;
		break;
	case 4:
		cout << "Корова - травоїдна"<<endl;
		break;
	case 5:
		cout << "Вовк - хижак" << endl;
		break;
	case 6:
		cout << "Слон - травоїдна" << endl;
		break;
	case 7:
		cout << "Тигр - хижак" << endl;
		break;
	default:
		cout << "Такої тварини немає" << endl;
	}

	// task 7 додаткові бали

	int a, b;

	cout << "Введіть два числа: " << endl;cin >> a;cin >> b;
	cout << "Перше число: " << a << " Друге число: " << b << endl;
	if (a != b)
	{
		int a1 = b;
		int b1 = a;
		cout << "Перше число: " << a1 << " Друге число: " << b1 << endl;
	}
	else if (a == b) {
		cout << "Вони однакові!" << endl;
	}
	else {
		cout << "Введіть число!" << endl;
	}

	// task 8
	int num;
	cout << "Введіть число від 100 до 999: " << endl; cin >> num;

	if (num > 100 && num < 999)
	{
		cout << "Кількість цифр: 3" << endl;
		int first = num / 100;
		int second = (num / 10) % 10;
		int third = num % 10;
		int sum = first + second + third;
		cout << "Сумма цифр: " << sum << endl;
		cout << first << "  " << second << endl;

	}


	// task 9

	int hours, minutes, seconds;

	cout << "Введіть кількість годин" << endl; cin >> hours;
	cout << "Введіть кількість хвилин" << endl; cin >> minutes;
	cout << "Введіть кількість секунд" << endl; cin >> seconds;

	if (hours >= 0 && hours <= 23 &&
		minutes >= 0 && minutes <= 59 &&
		seconds >= 0 && seconds <= 59)
	{
		cout << "Час допустимий";
	}
	else
	{
		cout << "Час недопустимий";
	}




	// task 10
	int hour;

	cout << "Яка зараз година?" << endl; cin >> hour;
	if (hour >= 6 && hour <= 12)
	{
		cout << "Добрий ранок" << endl;
	}
	else if (hour >= 13 && hour <= 18)
	{
		cout << "Добрий день" << endl;
	}
	else if (hour >= 19 && hour <= 22)
	{
		cout << "Добрий вечір" << endl;
	}
	else if (hour >= 23 && hour <= 5)
	{
		cout << "Доброї ночі" << endl;
	}


	// task 11 

	int num1, num2, num3;

	cout << "Введіть три числа: " << endl;

	if (num1 < num2&& num1 < num3)
	{
		cout << "Мінімальне: " << num1 << endl;
	}
	else if (num2 < num1 && num2 < num3)
	{
		cout << "Мінімальне: " << num2 << endl;
	}
	else if (num3 < num2 && num3 < num1)
	{
		cout << "Мінімальне: " << num3 << endl;
	}
}