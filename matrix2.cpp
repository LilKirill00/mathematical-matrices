#include "arh.cpp"
using namespace std;

//транспонирование матриц

int main()
{	
	setlocale(0,"");
	srand(time(NULL));
	int n, m;
	cout << "Введите количество строк матрицы: ";
	cin >> n;
	cout << "Введите количество столбцов матрицы: ";
	cin >> m;
	int arr[n][m];
	cout << "Составьте матрицу\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			/*arr[i][j] = rand()%6;
			cout << arr[i][j] <<"\t";*/
		}
		cout << "\n";
	}
	int res[m][n];
	cout << "Результат\n";
	for(int j = 0; j < m; j++)
	{
		for(int i = 0; i < n; i++)
		{
			res[j][i] = arr[i][j];
			cout << res[j][i] <<"\t";
		}
		cout << "\n";
	}
}
