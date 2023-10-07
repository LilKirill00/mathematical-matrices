#include "arh.cpp"
using namespace std;

//сложение матриц

int main()
{
	setlocale(0,"");
	srand(time(NULL));
	
	int n, m;
	cout << "Введите количество строк первой и второй матрицы: ";
	cin >> n;
	cout << "Введите количество столбцов первой и второй матрицы: ";
	cin >> m;
	int arr1[n][m];
	int arr2[n][m];
	cout << "Составьте первую матрицу\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> arr1[i][j];
			/*arr1[i][j] = rand()%6;
			cout << arr1[i][j] <<"\t";*/
		}
		cout << "\n";
	}
	cout << "Составьте вторую матрицу\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> arr2[i][j];
			/*arr2[i][j] = rand()%6;
			cout << arr2[i][j] << "\t";*/
		}
		cout << "\n";
	}
	int res[n][m];
	cout << "Результат\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			res[i][j] = arr1[i][j] + arr2[i][j];
			cout << res[i][j] << "\t";
		}
	cout << "\n";
	}
}
