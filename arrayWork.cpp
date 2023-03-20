#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int length = 5;
    const int size = 10;
    int temp = 0;
    int arr[length] = { 1,2,3,0,5 };
    int arrS[length] = { 6,7,8,0,-1 };
    int arrLS[size] = { 0,0,0,0,0,0,0,0,0,0 };
    int arr1[length] = { 1,2,0,0,5 };
    int j = 0;
    cout << "Задание 1\n";
    for (int i = 0; i < length; i++) {
        if (arr1[i] == 0) {
            j++;
        }
        else {
            arr1[i - j] = arr1[i];
        }
    }
    int r = length - j;
    for (int i = r; i < length; i++) {
            arr1[i] = -1;
    }
    j = 0;
    cout << "[ ";   for (int i = 0; i < length; i++) cout << arr1[i] << " ";     cout << " ]" << "\n";
    int t = 0;
    cout << "\n\nЗадание 2\n";
    for (int i = 0; i < length; i++) {
            if (arr[i] > 0) {
                arrLS[i] = arr[i];
            }
            if (arr[i] == 0) {
                j++;
            }
            else {
                arrLS[i - j] = arrLS[i];
            }
            if (arr[i] < 0) {
                t++;
                temp = arrS[i];
            }
    }

    r = length - j;
    for (int i = r; i < length; i++) {
        arrLS[i] = 0;
    }
    for (int i = 0; i < length; i++) {
        if (arrS[i] > 0) {
            arrLS[i+length] = arrS[i];
        }
        if (arrS[i+length] == 0) {
            j++;
        }
        else {
            arrLS[i+length - j] = arrLS[i+length];
        }
        if (arrS[i] < 0) {
            t++;
            temp = arrS[i];
        }
    }
    r = length - j;
    for (int i = r; i < length; i++) {
        arrLS[i+length] = 0;
    }
    int f = size - t;
    arrLS[f] = temp;

        cout << "[ ";   for (int i = 0; i < size; i++) cout << arrLS[i] << " ";     cout << " ]";

}
