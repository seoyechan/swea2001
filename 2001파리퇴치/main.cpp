#include <stdio.h>

using namespace std;

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int filed[16][16];
int n, m, nRet;

int main()
{
	int T;
	int test_case;

	freopen("input.txt", "r", stdin);
	scanf("%d", &T);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &filed[i][j]);
			}
		}

		nRet = 0;
		int temp = 0;
		for (int i = 0; i < n - m + 1; i++){
			for (int j = 0; j < n - m + 1; j++){
				temp = 0;
				for (int k = i; k < i + m; k++){
					for (int z = j; z < j + m; z++){
						temp += filed[k][z];
					}
				}
				if (temp > nRet)
					nRet = temp;
			}
		}
		printf("#%d %d\n", test_case, nRet);



	}

	return 0;
}
