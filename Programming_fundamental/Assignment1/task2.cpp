#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("read.txt");
	
	if (!fin.is_open())
	{
		cout << "file is not found" << endl;
	}
	else
	{
		char c='\0';
		while (!fin.eof())
		{
			fin >> c;
			if (c != 'a' && c != 'A')
				cout << c;
		}
		cout << "\n\n\n" << endl;
	}
	fout.close();
	fin.close();
}