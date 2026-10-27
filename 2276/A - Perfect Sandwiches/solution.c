#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        long long c, s, ans;
        scanf("%lld %lld", &c, &s);
 
        if (c <= s) {
            printf("-1
");
        }
        else {
            if (s < c - s) {
                ans = s;
            }
            else {
                ans = c - s;
            }
 
            printf("%lld
", ans);
        }
    }
 
    return 0;
}