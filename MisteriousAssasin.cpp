/*
* MisteriousAssasin.cpp
* Author: Sergio Can
* Description:
*   OmegaUp link: https://omegaup.com/arena/problem/asesino#problems
*/
#include<iostream>
using namespace std;
int main()
{
	int large, width;
	int n;
	int x, y;
	int safeplace = 0;
	int matriz[101][101];

	cin >> large;
	cin >> width;
	//init matrix
	for (int i = 0; i < large; i++)
	{
		for (int j = 0; j < width; j++)
		{
			matriz[i][j] = 1;
		}
	}

	cin >> n;
	//alacran places
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;

		matriz[x - 1][y - 1] = 0;
	}
	//search
	for (int i = 0; i < large-1; i+=1) {
		for (int j = 0; j < width-1; j+=1)
		{
			if (matriz[i][j] && matriz[i][j + 1] && matriz[i + 1][j] && matriz[i + 1][j + 1]) {
				safeplace += 1;
			}
		}
	}

	cout << safeplace << endl;
	return 0;

}
