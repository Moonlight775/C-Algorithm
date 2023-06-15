#include <stdio.h>

int main() {
    int T, i = 0;  // 테스트 케이스의 개수
    
    scanf("%d", &T);
    
    for (i; i < T; i++) {
        int first, second, sum = 0;         // 변수 설정
        
        scanf("%d %d", &first, &second);    // 주사위 값 입력
        sum = first + second;               // 주사위 값의 합
        
        printf("Case %d: %d\n", i+1, sum);
    }
    
    return 0;
}

