#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);

using namespace std;

int main(void)
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << cookies << " = array address, ";
    cout << sizeof(cookies) << " = sizeof coocies\n";
    int sum = sum_arr(cookies, ArSize);
    cout << "sum = " << sum << endl;

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}