#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	while (scanf_s("%d", &n) != EOF)
	{
		int arr[3001] = { 0 }, str[3001] = { 0 }, i;

		for (i = 0; i < n; i++)
			scanf_s("%d", &arr[i]);
		//Помещаем абсолютное значение разности между двумя соседними числами в последовательность массива
		for (i = 0; i < n - 1; i++)
			str[abs(arr[i] - arr[i + 1])] = 1;

		int count = 0;
		//Вычислить, сколько единиц находится в диапазоне от 1 до n-1
		for (i = 1; i <= n - 1; i++)
			if (str[i] == 1) count++;

		if (count == n - 1) printf("Jolly\n");
		else printf("Not jolly\n");
	}
}
