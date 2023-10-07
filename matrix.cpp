#include "arh.cpp"
using namespace std;

void multiply_mx(int **arr1, int n1, int m1, int **arr2, int n2, int m2, int **res);

//умножение матриц

int main()
{
	setlocale(0,"");
	srand(time(NULL));
		
	int n1, m1, n2, m2;
	do
	{
		cout << "Введите количество строк первой матрицы: ";
		cin >> n1;
		cout << "Введите количество столбцов первой матрицы: ";
		cin >> m1;
		cout << "Введите количество строк второй матрицы: ";
		cin >> n2;
		cout << "Введите количество столбцов второй матрицы: ";
		cin >> m2;
		if(m1 != n2) cout << "Заного\n";
	} while(m1 != n2);
	int arr1[n1][m1];
	int arr2[n2][m2];
	cout << "Заполните первую матрицу\n";
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < m1; j++)
		{
			cin >> arr1[i][j];
			//arr1[i][j] = rand()%6;
			//cout << arr1[i][j] <<"\t";
		}
		cout << "\n";
	}
	cout << "Заполните вторую матрицу\n";
	for(int i = 0; i < n2; i++)
	{
		for(int j = 0; j < m2; j++)
		{
			cin >> arr2[i][j];
			//arr2[i][j] = rand()%6;
			//cout << arr2[i][j] << "\t";
		}
		cout << "\n";
	}

	int res[n1][m2];
	cout << "Результат\n";
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < m2; j++)
		{
			int sum = 0;
			for(int a = 0; a < m1; a++)
			{
				sum += arr1[i][a] * arr2[a][j];	
			}
			res[i][j] = sum;
			cout << res[i][j] << "\t";
		}
	cout << "\n";
	}	
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < m2; j++)
		{
			cout << res[i][j] << "\t";
		}
	cout << "\n";
	}
}