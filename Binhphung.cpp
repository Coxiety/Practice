#include <iostream>

using namespace std;

void binhphuong(int arr[1000], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }
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
    binhphuong(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}