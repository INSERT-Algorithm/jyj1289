// 행복

/*
	N명의 학생들의 점수가 주어졌을 때, 가장 높은 점수와 가장 낮은 점수의 차이를 구하는 프로그램을 작성하시오.

	입력 : 1. 첫 번째줄에는 학생 수 N이 주어진다. 2. 다음 줄에는 N명의 학생 점수가 공백 하나를 사이에 두고 주어진다.
			3. 부분문제의 제약 조건 : 모든 부분문제에서 2 <= N <= 1000 이고 입력되는 학생들의 점수는 0이상 1000이하의 정수이다

	출력 : 가장 높은 점수와 가장 낮은 점수의 차이를 출력한다.

	ex)
	입력 : 5
			27 35 92 75 42
	출력 : 65
*/

#include<stdio.h>

int main() {
    int n, num, min = 1000, max = 0;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &num);

        if (min > num) {
            min = num;
        }
        else if (max < num) {
            max = num;
        }
    }

    printf("%d", max - min);

    return 0;
}
ㄴ