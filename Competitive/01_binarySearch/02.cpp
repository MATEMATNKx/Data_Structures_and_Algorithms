#include <iostream>

using namespace std;
int main(){

    int left, right, N, K;
    cin >> N;
    int arr[N];


    //на вход поступает отсортированный массив
    for(int i = 0; i< N; ++i){
        cin >> arr[i];
    }

    cin >> K;
    int from, to, mid;
    for(int i = 0; i < K; ++i){
        cin >> from >> to;
        left = -1;
        right = N;
        //find from side
        while(left < right - 1){
            mid = (left+ right)/2;
        if (arr[mid] < from){
            left = mid;
        }
        else{
            right = mid;
        }
        }

        from = left;
        //cout << left << endl;

        //find to side;
        left = -1;
        right = N;
        while(left < right -1){
            mid = (left + right)/2;
            if (arr[mid] <= to){
                left = mid;
            }
            else{
                right = mid;
            }

        }
        to = left;
        cout << to - from<< endl;
    }

return 0;
}
