#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    const int length = 6;
    int arr[length];
    int sum = 0;
    cout << "Задание 1\n\n";
    for (int i = 0; i < length; i++) {
        cout << "Введите прибыль фирмы за " << i + 1 << " месяц:\n";
        cin >> arr[i];
        sum = sum + arr[i];
        //cout << i + 1 << " = " << arr[i] << "\n";

    }
    cout << "\nСумма: " << sum << "\n";
    sum = 0;

    cout << "\n\nЗадание 2\n\n";

    int arr2[length] = { 5,10,15,20,25,30 };
    for (int j = length - 1; j >= 0; j--) {
        cout << arr2[j] << " ";
    }
    

    cout << "\n\n\nЗадание 3\n\n";

    for (int i = 0; i < length - 1; i++) {
        cout << "Введите " << i + 1 << " сторону пятиугольника:\n";
        cin >> arr[i];
        sum = sum + arr[i];
        

    }
    cout << "\nПериметр: " << sum << "\n";


    cout << "\n\nЗадание 4\n\n";

    const int y = 12;
    int arr3[y];
    
    for (int i = 0; i < y; i++) {
        cout << "Введите прибыль фирмы за " << i + 1 << " месяц:\n";
        cin >> arr3[i];
    }
    int max = arr3[0];
    int min = arr3[0];
    int max_month = 0;
    int min_month = 0;
    for (int i = 0; i < y; i++) {
        if (arr3[i] > max) {
            max = arr3[i];
            max_month = i + 1;
        }
        if (arr3[i] < min) {
            min = arr3[i];
            min_month = i + 1;
        }
    }
    cout << "\nМаксимальная прибыль: " << max << " в " << max_month << " месяце.\n";
    cout << "\nМинимальная прибыль: " << min << " в " << min_month << " месяце.\n";
}
