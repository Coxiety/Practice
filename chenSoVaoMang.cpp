#include <iostream>

using namespace std;

void xuLy(int arr[100], int &n, int number, int soChenVao){
    if(number > n || number < 0)
    {
        cout << "So khong phu hop";
    }else{
        ++n;
        for(int i = n - 1; i > number; --i){
            arr[i] = arr[i-1];
        }
        arr[number] = soChenVao;
    }
}

int main()
{
    int arr[100];
    int n, number, soChenVao;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cin >> number;
    cin >> soChenVao;
    xuLy(arr, n, number, soChenVao);
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    
    return 0;
}