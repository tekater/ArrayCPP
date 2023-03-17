#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    const int length = 50;
    int arr[length]; // = { 1,2,8,10,10 };
    int sum = 0;

    /*arr[0] = 1;
    arr[1] = 2;
    arr[2] = 8;
    arr[3] = 10;
    arr[4] = 10;*/

    for (int i = 0; i < length; i++) {

        arr[i] = 4 + rand() % 51;
        sum += arr[i];
        cout << i + 1 << " = " << arr[i] << "\n";

    }

    int count = length;
    int count1 = arr[0];

    for (int i = 0; i < length; i++) {

        if (count > arr[i]) {
            count = arr[i];
        }

        if (count1 < arr[i]) {
            count1 = arr[i];
        }
    }
    

    cout << "Минимальное число: " << count << "\nМаксимальное число " << count1;
}
