#include <stdio.h>

void main() {
	char A[] = "ARRAY";
	char *p = "POINTER";
	int i;
	
	for (i=0; i<5; i++) {
		printf("*(A+%d) : %c\n", i, *(A+i));	// �迭�� ������ �������� ����
	}
	
	for (i=0; i<7; i++) {
		printf("p[%d] : %c\n", i, p[i]);		// �����͸� �迭 �������� ���� 
	}
}

/* 	int A[] = {10, 20, 30, 40, 50};
	int *p, i;
	
	A+i    == &A[i]
	A[i]   == *(A+i)
	*(p+i) == p[i]
*/
