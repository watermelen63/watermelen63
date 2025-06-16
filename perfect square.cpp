#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << "========================================================" << endl;
}

int main(){
    int T = 0, sum = 0, count = 0;
    cout << "請輸入你要跑幾組資料" << endl;
    cin >> T;
    //有多少組測試資料
    if (T < 1 || T > 100){
        cout << "error" << endl;
    }else{
        for (int i = 0; i < T; i++){
            int a,b;
            cout << "請輸入兩筆以空格分開的資料(用來尋找範圍中的完全平方數的)" << endl;
            cin >> a >> b;
            //測試資料
            if (a <= 0 || b <= 0 || a > b || a > 1000 || b > 1000){
                cout << "error，請重新輸入" << endl;
                print();
                i --;
                continue;
            }else{
                sum = 0;
                count = i + 1;
                for (int j = a; j < b; j++){
                    //如果j=完全平方數且範圍在a和b之間，就放到串列中
                    if (sqrt(j) == int(sqrt(j))){
                        sum += j;
                        //cout << "sum現為: "<< sum << endl << "j開根號現為: " << sqrt(j) << endl << "j為: " << j << endl << endl;
                    }
                }
                cout << "你得出的資料為:" << endl << "Case " << count << ": " << sum << endl;
                print();
            }
        }
    }
}