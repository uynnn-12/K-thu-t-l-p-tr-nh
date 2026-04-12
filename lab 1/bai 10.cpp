#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int **mt1, **mt2;
    cin >> n;
    // cấp phát bộ nhớ cho 2 ma trận mt1, mt2
    mt1 = new int*[n];
    mt2 = new int*[n];
    for(int i=0; i<n; i++){
        mt1[i] = new int[n];
        mt2[i] = new int[n];
    }
    // Nhập giá trị cho mt1, mt2
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin >> mt1[i][j];
        }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin >> mt2[i][j];
        }
    // tính và in tổng của 2 ma trận
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int temp;
            temp = mt1[i][j] + mt2[i][j];
            cout << temp << " ";
        }
        cout << endl;
    }
    // tính và in ra tích của 2 ma trận
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int temp = 0;
            for(int k=0; k<n; k++){
                temp += mt1[i][k]*mt2[k][j];
            }
            cout << temp << " ";
        }
        cout << endl;
    }
}