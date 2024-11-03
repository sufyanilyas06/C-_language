#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("sale.txt");
	fout.open("ouput.txt");
	if (!fin.is_open())
	{
		cout << "file is not found" << endl;
	}
	else
	{
		char companyName[20] = {'\0'};
		char productName[20] = { '\0' };
		int sum,n;
		while (!fin.eof())
		{
			sum = 0;
			fin >> companyName;
			fout << companyName<<",";
			
			fin >> productName;
			fout << productName<<",";
			
			for (int i = 0; i < 4; i++)
			{
				fin >> n;
				sum += n;
			}
			int avg = sum / 4;
			fout << sum<<",";
			
			fout << avg;
			
			fout << endl;
		}
	}
	fout.close();
	fin.close();
}