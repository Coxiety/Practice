#include <iostream>

using namespace std;

int combine(int arr[1000], int n) {
    int tong =0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return tong;
}
void input(int arr[1000], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int arr[100];
    int n;
    cin >> n;
    input(arr, n);
    cout << "\n" << combine(arr, n);

    return 0;
}