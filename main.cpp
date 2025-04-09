#include <iostream>
using namespace std;
#include <vector>
int main() {
    srand(time(0));   
    
    int n, i, j, t, r, l;

    cout << "quanti sono i numeri ?" << endl;
    cin >> n;
    int nP[n], nD[n];

    i = 0;
    while (i < n) {
        r = rand() % (n + 1);
        if (r % 2 == 0) {
            nP[i] = r;
        } else {
            nD[i] = r;
        }
        i = i + 1;
    }
    i = 0;
    t = 0;
    j = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (nD[j] > nD[j + 1]) {
                t = nD[j];
                nD[j] = nD[j + 1];
                nD[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    l = 0;
    j = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (nP[j] > nP[j + 1]) {
                l = nP[j];
                nP[j] = nP[j + 1];
                nP[j + 1] = l;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "i numeri dispari sono" << nD[i] << endl;
        cout << "i numeri pari sono" << nP[i] << endl;
        i = i + 1;
    }
    i = nD - 1;
    while (i >= 0) {
        cout << "i numeri dispari in ordine decrescente sono" << nD[i] << endl;
        i = i - 1;
    }
    






