

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int cntA = 0, cntB = 0, cntAB = 0, cntBA = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'a') {
                cntA++;
                if (i > 0 && S[i - 1] == 'b') {
                    cntBA++;
                }
            } else {
                cntB++;
                if (i > 0 && S[i - 1] == 'a') {
                    cntAB++;
                }
            }
        }

        int ans = min(cntA, cntB) * 2;
        int diff = abs(cntAB - cntBA);
        ans -= diff;

        if (cntAB == cntBA) {
            ans += min(cntA, cntB) * 2;
        }

        cout << ans << endl;
    }

    return 0;
}


