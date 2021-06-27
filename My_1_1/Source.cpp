#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int N = 10;
	int arr[N];

	cout << "Введите массив из " << N  << " элементов: ";
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0)
			arr[i] = 0;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	return 0;
}
