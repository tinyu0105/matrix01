#include<iostream>
#include<iomanip>
using namespace std;
//---�ۥ[
void showx(int a[3][3], int b[3][3])
{
	int i = 0, j = 0;	//���]�wi,j����l�Ȭ�0 
	cout << "�ۥ[��" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(2) << a[i][j] + b[i][j] << "  ";//"setw"��cout��X�榡��� 
		}
		cout << endl;
	}
}
//----�۴� 
void showy(int a[3][3], int b[3][3]){
	cout << "�۴" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(2) << a[i][j] - b[i][j] << "  ";
		}
		cout << endl;
	}
}
//----�ۭ� 
void showz(int a[3][3],int b[3][3]){
	int c[3][3]={0};
	cout << "�ۭ���" << endl;
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
//------�D�{�� 
int main(){
	int a[3][3];
	int b[3][3];
	cout << "�п�J�@��3X3���}�C" << endl;
	for (int i = 0; i < 3; i++)		//i������A���榳3�ӼƦr 
	{
		for (int j = 0; j < 3; j++)	//j����C�A��C��3�ӼƦr 
		{
			cin >> a[i][j];			//��J9�ӼƦr 
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
	cout << "�п�J�@��3X3���}�C" << endl;
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
	showx(a, b);		//��X�ۥ[�᪺���G 
	showy(a, b);		//��X�۴�᪺���G 
	showz(a,b);			//��X�ۭ��᪺���G 
	return 0;
}
