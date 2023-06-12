#include<stdio.h>

void main() {
	int T, N;
	
	scanf("%d", &T);	// 테스트 케이스의 개수 
	
	while (T-- > 0) {
		scanf("%d", &N);	// 자연수의 개수 
		
		int arr[N];			// 자연수를 담을 배열 
		int i, sum = 0;		// 자연수 합 
		 
		// 배열 초기화 및 합 구하기 
		for(i=0; i<N; ++i) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		
		printf("%d\n", sum);    // 자연수의 합을 출력
	}
}
