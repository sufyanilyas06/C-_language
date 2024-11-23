#include<iostream>
#include<fstream>
using namespace std;
float maxTemp		(float arr[], int size); // To find Maximum Temperature in array "arr" where "size" is size of array 
float minTemp		(float arr[], int size); // To find minimum Temperature in array "arr" where "size" is size of array 
float toCelsius		(float num);			 // To Convert temperature  from Fahrenheit to Celsius and "num" is convertable temp
float toFahrenheit	(float num);			 // To Convert temperature  from Celsius to Fahrenheit and "num" is convertable temp
float findAvg		(float* arr, int size);	 // To find average of all temperature in array
bool  IsPrime		(int num );				 // To Check given number is prime or not

// ---------------- THIS IS MIAN ----------------
int main()
{
	// -------------------- Task 1 -----------------------
	cout << "---------------- Task 1 ---------------------" << endl;
	float tempInFahrenheit[5];
	float tempInCelsius[5];

	cout << "Enter 5 temperature in Fahrenheit :" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> tempInFahrenheit[i];
	}
	cout << endl << "-----------------------------"<<endl;
	cout << "max tempeture is " << maxTemp(tempInFahrenheit, 5) << endl;
	cout << "min tempeture is " << minTemp(tempInFahrenheit, 5) << endl;
	cout << "convert all given temperature is " << endl;
	for (int i = 0; i < 5; i++)
	{
		tempInCelsius[i] = toCelsius(tempInFahrenheit[i]);
	}
	cout << " After conversion into Celsius temp is :" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << tempInCelsius[i] << " ";
	}
	cout << endl <<endl;
	// -------------- Task 2 --------------
	cout << "---------------- Task 2 ---------------------" << endl << endl << endl;
	cout << "Data Of Ouput file is:" << endl;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	if (!fin.is_open())
	{
		cout << "file is  not found" << endl;
	}
	else
	{
		int num = 0;
		char c='\0';
		while (!fin.eof())
		{
			int i = 2;
			
			fin >> c;
			
			if (c >= '0' && c <= '9')
			{
				num = num * 10 + (int(c)-'0');
			}
			else
			{
				cout << num << ":";
				fout << num << ":";
				for (int i = 2; i <= num; i++)
				{
					if (num % i == 0 && IsPrime(i))
					{
						fout << i << " ";
						cout << i << " ";

					}
					

				}
				num = 0;
				fout << endl;
				cout << endl;
			}


		

		}
	}
	fin.close();
	fout.close();
	

}

// -------------- Find Max Temp -------------------
float maxTemp(float arr[], int size)
{
	float max_no = -9999;
	for (int i = 0; i < size; i++)
	{
		if (max_no < arr[i])
		{
			max_no = arr[i];
		}
	}
	return max_no;
}

// -------------- Find Min Temp -------------------
float minTemp(float arr[], int size)
{
	float min_no = 9999;
	for (int i = 0; i < size; i++)
	{
		if (min_no > arr[i])
		{
			min_no = arr[i];
		}
	}
	return min_no;
}

// ------------- Fahrenheit To Celsius -------------
float toCelsius(float num)
{
	return 9.0 / 5 * num + 32;
}

// ------------- Celsius To Fahrenheit  -------------
float toFahrenheit(float num)
{
	return (num - 32) * 5 / 9;
}

// ------------- Average Of Numbers ------------------
float findAvg(float* arr, int size)
{
	float sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

// ------------ Prime Number -------------------------
bool	 IsPrime(int num)
{
	int count = 0;
	for (int i = 2; i < num/2; i++)
	{
		if (num % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		return true;
	}
	return false;
}