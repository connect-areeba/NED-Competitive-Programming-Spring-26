#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char S[N + 1];
        scanf("%s", S);

        int ones = 0, zeros = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == '1')
                ones++;
            else
                zeros++;
        }

        // Minimum operations
        int ans = ones < (1 + zeros) ? ones : (1 + zeros);
        printf("%d\n", ans);
    }
    return 0;
}
