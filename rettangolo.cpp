#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void solve(int t) {
    int x1, y1, x2, y2, x3, y3,x4,y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    // aggiungi codice...
    if(x1!=x2 && x1!=x3)
        x4=x1;
    if(x2!=x1 && x2!=x3)
        x4=x2;
    if(x3!=x1 && x3!= x2)
        x4=x3;
     if(y1!=y2 && y1!=y3)
        y4=y1;
    if(y2!=y1 && y2!=y3)
        y4=y2;
    if(y3!=y1 && y3!= y2)
        y4=y3;
    //int x4 = 42, y4 = 42;

    cout << "Case #" << t << ": " << x4 << " " << y4 << "\n";
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:
//prova commit
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
