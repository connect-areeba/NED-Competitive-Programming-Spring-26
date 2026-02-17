#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        long long store = 0;
        int failed = 0;

        for (int i = 0; i < N; i++) {
            store += A[i];

            if (store < K) {
                printf("NO %d\n", i + 1);
                failed = 1;
                break;
            }

            store -= K;
        }

        if (!failed) {
            printf("YES\n");
        }
    }

    return 0;
}
