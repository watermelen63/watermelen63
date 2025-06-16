#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << "========================================================" << endl;
}

int main(){
    int T = 0, sum = 0, count = 0;
    cout << "How many data do you want to run?" << endl;
    cin >> T;
    //have how many data
    if (T < 1 || T > 100){
        cout << "error" << endl;
    }else{
        for (int i = 0; i < T; i++){
            int a,b;
            cout << "Input two data split with space(these two data is in order to help you to find the perfect square in this range)" << endl;
            cin >> a >> b;
            //test's data
            if (a <= 0 || b <= 0 || a > b || a > 1000 || b > 1000){
                cout << "error ,please Re-enter it" << endl;
                print();
                i --;
                continue;
            }else{
                sum = 0;
                count = i + 1;
                for (int j = a; j < b; j++){
                    //if j is perfect square ,put it into sum
                    if (sqrt(j) == int(sqrt(j))){
                        sum += j;
                    }
                }
                cout << "The data that you want is:" << endl << "Case " << count << ": " << sum << endl;
                print();
            }
        }
    }
}