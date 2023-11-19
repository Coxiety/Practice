#include <iostream>

using namespace std;

void xuLy(int arr[100], int &n, int number){
    if(number > n || number < 0)
    {
        cout << "So khong phu hop";
    }else{
        for(int i = number; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        --n;
    }
}

int main()
{
    int arr[100];
    int n;
    int number;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cin >> number;
    xuLy(arr, n, number);
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}