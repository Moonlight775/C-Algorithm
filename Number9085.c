#include<stdio.h>

void main() {
	int T, N;
	
	scanf("%d", &T);	// �׽�Ʈ ���̽��� ���� 
	
	while (T-- > 0) {
		scanf("%d", &N);	// �ڿ����� ���� 
		
		int arr[N];			// �ڿ����� ���� �迭 
		int i, sum = 0;		// �ڿ��� �� 
		 
		// �迭 �ʱ�ȭ �� �� ���ϱ� 
		for(i=0; i<N; ++i) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		
		printf("%d\n", sum);    // �ڿ����� ���� ���
	}
}
