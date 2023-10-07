#include "arh.cpp"
using namespace std;

//умножение каждого элемента матрицы на число

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
	int x;
	cout << "Введите число на которое будет умножаться матрица: ";
	cin >> x;
	cout << "Результат\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			arr[i][j] *= x;
			cout << arr[i][j] <<"\t";
		}
		cout << "\n";
	}
}
