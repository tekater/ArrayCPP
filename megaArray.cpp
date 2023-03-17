#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    const int length = 5;
    int temp = 0, choice, count_shift = 0;
    int arr[length] = { 1,2,3,4,5 };
    do
    {
        cout << "\tСколько сдвигов? "; cin >> count_shift; cout << endl;
        cout << "\t[1 - влево, 2 - вправо, 3 - выход] "; cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
        {
            switch (choice)
            {
            case 1:
                while (count_shift > 0)
                {
                    temp = arr[0];
                    for (int i = 0; i < length - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    arr[length - 1] = temp;
                    count_shift--;
                }
                cout << "[ ";   for (int i = 0; i < length; i++) cout << arr[i] << " ";     cout << " ]";
                break;

            case 2:
                while (count_shift > 0)
                {
                    temp = arr[length - 1];
                    for (int i = length - 1; i > 0; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = temp;
                    count_shift--;
                }
                cout << "[ ";   for (int i = 0; i < length; i++) cout << arr[i] << " ";     cout << " ]";
                break;
            case 3:
                cout << "Пока:(" << endl;
                break;

            default:
                cout << "ЧаВо?" << endl; break;
            }
        }
        else
        {
            cout << "\nЧаВо?" << endl; break;
        }
    } while (choice != 3);
}
