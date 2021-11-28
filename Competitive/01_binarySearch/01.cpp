#include <iostream>

using namespace std;
//receives an ordered array as input
int main(){
    int N, K;
    cin >> N >> K;
    int arrayN[N];
    int arrayK[K];
    //filled both arrays
    for (int i = 0; i < N; ++i){
        cin >> arrayN[i];
    }
    for (int i = 0; i < K; ++i){
        cin >> arrayK[i];
    }

    //initialize left and right border on first array
    int left = -1;
    int right = N;
    int mid = 0; // pointer on middle element on array



    for (int i = 0; i < K; ++i){
      left = -1;
      right = N;
      while(left < right - 1){
        mid = (left + right )/ 2;
        if (arrayN[mid] <= arrayK[i]){
            left = mid;
        }
        else{
            right = mid;
        }
      }
    if (left == -1){
        cout << "NO" << endl;
    }
    else{
        if (arrayN[left] == arrayK[i]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
return 0;
}
