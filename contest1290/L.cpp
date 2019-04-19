#include<bits/stdc++.h>

using namespace std;
int a[500][500];
int n, m;

void input() {
    cin >> m >> n;
    swap(n, m);
    for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)cin >> a[i][j];
}

bool ok() {
    for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)if (a[i][j])return false;
    return true;
}

void solve() {
    input();
    int areas = 0;
    while (!ok()) {
        queue<pair<int, int>> Q;//����һ������
        ///Q.push(make_pair(0,0));//���������
        //a[0][0]=0;
        int X = 0, Y = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[i][j]) {
                    X = i;
                    Y = j;
                    break;//����1��ͣ��
                }
        Q.push(make_pair(X, Y));
        a[X][Y] = 0;
        while (Q.size()) {
            pair<int, int> cur = Q.front();//��ö��еĵ�һ��Ԫ��
            int x = cur.first, y = cur.second;
            for (int dx = -1; dx <= 1; ++dx)
                for (int dy = -1; dy <= 1; ++dy) { //���տ��ȥ��չ
                    if (abs(dx - dy) != 1)continue;
                    int nx = x + dx, ny = y + dy;
                    if (nx < 0 || nx > n - 1 || ny < 0 || ny > m - 1 || a[nx][ny] == 0)continue;
                    Q.push(make_pair(nx, ny));
                    a[nx][ny] = 0;
                }
            //cout<<cur.first<<cur.second<<endl;//����
            Q.pop();//����
        }
        ++areas;
    }
    cout << areas << endl;
}

int main() {
    //freopen("b.in.cpp","r",stdin);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}