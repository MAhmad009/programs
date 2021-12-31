#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//----------------LAb 8 Task 1------------
	/*int ASCII,a=1,b=16,mul;
	for (ASCII = 0; ASCII <= 127; ASCII++)
	{
		cout << (char)ASCII<<"\t";
		if (ASCII == 16 || ASCII == 32 || ASCII == 48 || ASCII == 64 || ASCII == 80 || ASCII == 96 || ASCII == 112)
			cout << "\n\n";
			if(i%16==0)
			cout<<endl;*/
			/*}*/

			//-------------------Task2--------------

			/*float a = 1.0;
			float inc = 1;
			float sum = 0;
			while (inc <= 45)
			{		sum  += (1 / (inc));
			inc++;
			}
			cout << "SUM = " << sum;*/

			//------------------------Task 3---------------

			//------------------------a part-------------------------

			/*int num;
			for (num = 1; num <= 100 ; num++)
				cout << num << " ";*/

				//------------------------b part------------------------

				/*int num, a;
				cout << "Enter +ve Integer ";
				cin >> num;
				for (a = 1; a <= num; a++)
					cout << a << " ";*/

					//----------------------c part---------------------------


					/*char c;
					for (c = 'Z'; c >= 'A'; c--)
						cout << c << " ";*/

						//-------------------------d part-----------------------

						/*char c;
						for (c = 'Z'; c >= 'A'; c--)
						{
							if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
								continue;
							cout << c << " ";
						}*/

						//-------------------------e part---------------------

						/*int x, y,a;
						cout << "Enter strting value ";
						cin >> x;
						cout << "Enter Ending Value ";
						cin >> y;
						for (a = x; a <= y; a++)
							cout << a << " ";*/

							//-------------------------Task5---------------------------
							//-------------------------a part--------------------------
							/*int i = 0, j;
							while (i <= 10)
							{
								j = 0;
								while (j <= i)
								{
									cout << "*";
									j++;
								}
								i++;
								cout << "\n";
							}*/

							//-------------------------b part-------------------------

							/*int i = 10, j;
							while (i >= 1)
							{
								j = 0;
								while (j < i)
								{
									cout << "*";
									j++;
								}
								i--;
								cout << "\n";
							}*/

							//------------------------------c part------------------------

							/*int i, j, k;
							for (i = 10; i >= 1; i--)
							{
								for (k = 10 - i; k > 0; k--)
									cout << " ";
								for (j = 1; j <= i; j++)
								{
									cout << "*";
								}
								cout << "\n";
							}*/


							//------------------------------d part------------------------

							/*int i, j, k;
							for (i = 1; i <= 10; i++)
							{
								for (k = 10 - i; k > 0; k--)
									cout << " ";
								for (j = 1; j <= i; j++)
								{
									cout << "*";
								}
								cout << "\n";
							}*/


							//---------------------------Task 6-------------------------

							/*for (int i = 0; i <= 10; i++)
								cout << "*";
							cout << endl;
							for (int i = 0; i <= 4; i++)
								cout << "*" << 0;
							cout << "*"<<endl;
							for (int i = 0; i <= 10; i++)
								cout << "*";
							cout << endl;
							for (int i = 0; i <= 4; i++)
								cout << "*"<<0;
							cout << "*";
							cout << endl;
							for (int i = 0; i <= 10; i++)
								cout << "*";*/


	int matrix1[3][2];
	int matrix2[3][2];
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			cout << "Enter matrix1 value: [" << r << "][" << c << "] ";
			cin >> matrix1[r][c];
		}
	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			cout << "Enter matrix2 value: [" << r << "][" << c << "] ";
			cin >> matrix2[r][c];
		}
	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			cout << matrix1[r][c] + matrix2[r][c];
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}