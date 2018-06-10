#include<iostream>
#include<iomanip>
using namespace std;
//---相加
void showx(int a[3][3], int b[3][3])
{
	int i = 0, j = 0;	//先設定i,j的初始值為0 
	cout << "相加為" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(2) << a[i][j] + b[i][j] << "  ";//"setw"使cout輸出格式對齊 
		}
		cout << endl;
	}
}
//----相減 
void showy(int a[3][3], int b[3][3]){
	cout << "相減為" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(2) << a[i][j] - b[i][j] << "  ";
		}
		cout << endl;
	}
}
//----相乘 
void showz(int a[3][3],int b[3][3]){
	int c[3][3]={0};
	cout << "相乘為" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for(int k=0;k<3;k++)
			{
			 c[i][j]+=a[i][k] * b[k][j];
			}
			cout << setw(3) << c[i][j]<< "  ";
		}
		
		cout << endl;
	}
}
//------主程式 
int main(){
	int a[3][3];
	int b[3][3];
	cout << "請輸入一個3X3的陣列" << endl;
	for (int i = 0; i < 3; i++)		//i為直行，直行有3個數字 
	{
		for (int j = 0; j < 3; j++)	//j為橫列，橫列有3個數字 
		{
			cin >> a[i][j];			//輸入9個數字 
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "請輸入一個3X3的陣列" << endl;
	for (int i = 0; i < 3; i++)		
	{
		for (int j = 0; j < 3; j++)	
		{
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	showx(a, b);		//輸出相加後的結果 
	showy(a, b);		//輸出相減後的結果 
	showz(a,b);			//輸出相乘後的結果 
	return 0;
}
