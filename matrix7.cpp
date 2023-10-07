#include "arh.cpp"
using namespace std;

//Минор в матрице

int main()
{
	setlocale(0,"");
	srand(time(NULL));
		
	int n;
	cout << "Введите количество строк квадратной матрицы: ";
	cin >> n;
	int mas[n][n];
	cout << "Составьте первую матрицу\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			//cin >> mas[i][j];
			mas[i][j] = rand()%6;
			cout << mas[i][j] <<"\t";
		}
		cout << "\n";
	}
	int nor, mor;
	cout << "Mинор ";
	cin >> nor >> mor;
	
	int arr[n-1][n-1];
	int cn = 0, cm = 0;
	for(int i = 0; i < n; i++)
	{
		if(nor != i + 1)
		{
			for(int j = 0; j < n; j++)
			{
				if(mor != j + 1)
				{
					arr[cn][cm] = mas[i][j];
					cm++;
				}
			}
			cn++;
		}
		cm = 0;
	}
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-1; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	switch(n-1)
	{
		case 2:
		{
			cout << "Определитель второго порядка при данном миноре:\n";
			cout << arr[0][0] << " * " << arr[1][1] << " - " <<  arr[0][1]  << " * "  << arr[1][0] << " = " << arr[0][0] * arr[1][1] 
			<< " - " <<  arr[0][1] * arr[1][0] << " = " << arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
			break;
		}
		case 3:
		{
			cout << "Определитель третьего порядка при данном миноре:\n";
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
