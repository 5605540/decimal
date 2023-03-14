#include<stdio.h>
int main(viod) {
	int num = 0; //결과 값(num)을 0으로 잡는다.
	int k = 0; 
	// 0,1은 제외하기때문에 2부터 시작한다.
	for (int i = 2; i <= 100; i++)
		//1과 자기자신만으로 나누어지는 값을 소수라고한다.
	{
		for (k = 2; k < i; k++)
		{
			if (i % k == 0) break; 
		}
		if (k == i)
			num += k;
	}
	printf("0부터 100까지의 숫자 중에서 소수들 만의 합=%d\n",num);

}