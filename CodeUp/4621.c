// 약수 구하기

/*
	어떤 자연수 p와 q가 있을 때, 
	만일 p를 q로 나누었을 때 나머지가 0이면 q는 p의 약수이다.

	두 개의 자연수 N과 K가 주여졌을 때, N의 약수들 중 K번째로 작은 수를 출력하는 프로그램을 작성하시오

	입력 : 1. 첫째 줄에 N과 K가 빈칸을 사이에 두고 주어진다. 2. N은 1 이상 10,000 이하이다. 3. K는 1이상 N이하이다.

	출력 : 1. 첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다. 2. 만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는 0을 출력하시오

	ex)

	입력 : 6 3 

	출력 : 3
*/

#include<stdio.h>

int main()
{
	int n, m, index = 1;

	scanf_s("%d %d", &n, &m);

	int number[1000] = { 0, };

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			number[index] = i;
			index++;
		}
	}

	if (number[m]) {
		printf("%d", number[m]);
	}
	else {
		printf("%d", 0);
	}

	return 0;
}
