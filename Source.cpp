#include <iostream>
using namespace std;
void bankomat(int num, int arr[], int tru = 0)
{
    int i = 0;
    if (num >= arr[4])
        while (tru + arr[4] <= num)
        {
            i++;
            tru += arr[4];
            if (tru + arr[4] > num)
                cout << i << " - " << arr[4] << endl;
        }
    i = 0;
    if (num >= arr[3])
        while (tru + arr[3] <= num)
        {
            i++;
            tru += arr[3];
            if (tru + arr[3] > num)
                cout << i << " - " << arr[3] << endl;
        }
    i = 0;
    if (num >= arr[2])
        while (tru + arr[2] <= num)
        {
            i++;
            tru += arr[2];
            if (tru + arr[2] > num)
                cout << i << " - " << arr[2] << endl;
        }
    i = 0;
    if (num >= arr[1])
        while (tru + arr[1] <= num)
        {
            i++;
            tru += arr[1];
            if (tru + arr[2] > num)
                cout << i << " - " << arr[1] << endl;
        }
    i = 0;
    if (num >= arr[0])
        while (tru + arr[0] <= num)
        {
            i++;
            tru += arr[0];
            if (tru + arr[0] > num)
                cout << i << " - " << arr[0] << endl;
        }
}
int main()
{
    int arr[5] = { 5, 20, 50, 100, 200 };
    int num;
    cout <<"Enter your banknote (5, 20, 50, 100, 200)" <<endl;
    cin >> num;
    bankomat(num, arr);
}