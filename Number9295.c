#include <stdio.h>

int main() {
    int T, i = 0;  // �׽�Ʈ ���̽��� ����
    
    scanf("%d", &T);
    
    for (i; i < T; i++) {
        int first, second, sum = 0;         // ���� ����
        
        scanf("%d %d", &first, &second);    // �ֻ��� �� �Է�
        sum = first + second;               // �ֻ��� ���� ��
        
        printf("Case %d: %d\n", i+1, sum);
    }
    
    return 0;
}

