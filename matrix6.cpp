#include "arh.cpp"
using namespace std;

//Определитель второго и третьего порядка

int main()
{
	setlocale(0,"");
	srand(time(NULL));
	
	int n;
	cout << "Введите количество строк квадратной матрицы: ";
	cin >> n;
	int arr[n][n];
	cout << "Составьте первую матрицу\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
		cout << "\n";
	}
	
	switch(n)
	{
		case 2:
		{
			cout << "Определитель второго порядка:\n";
			cout << arr[0][0] << " * " << arr[1][1] << " - " <<  arr[0][1]  << " * "  << arr[1][0] << " = " << arr[0][0] * arr[1][1] 
			<< " - " <<  arr[0][1] * arr[1][0] << " = " << arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
			break;
		}
		case 3:
		{
			cout << "Определитель третьего порядка:\n";
			printf("%i * %i * %i + %i * %i * %i + %i * %i * %i - %i * %i * %i - %i * %i * %i - %i * %i * %i = \n%i + %i + %i - %i - %i - %i = \n%i",
			arr[0][0], arr[1][1], arr[2][2], arr[0][1], arr[1][2], arr[2][0], arr[1][0], arr[2][1], arr[0][2], arr[2][0], arr[1][1], arr[0][2],
			arr[2][1], arr[1][2], arr[0][0], arr[2][2], arr[1][0], arr[0][1], arr[0][0]*arr[1][1]*arr[2][2], arr[0][1]*arr[1][2]*arr[2][0],
			arr[1][0]*arr[2][1]*arr[0][2], arr[2][0]*arr[1][1]*arr[0][2], arr[2][1]*arr[1][2]*arr[0][0], arr[2][2]*arr[1][0]*arr[0][1],
			arr[0][0]*arr[1][1]*arr[2][2] + arr[0][1]*arr[1][2]*arr[2][0] + arr[1][0]*arr[2][1]*arr[0][2] - arr[2][0]*arr[1][1]*arr[0][2] -
			arr[2][1]*arr[1][2]*arr[0][0] - arr[2][2]*arr[1][0]*arr[0][1] );
			break;
		}
		default: cout << "Error";
		break;
	}
}
