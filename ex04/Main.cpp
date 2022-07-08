#include<iostream>
#include<string>
#include<fstream>

// using namespace std;
int main(int argc, char **argv)
{
	std::fstream filein;
	std::fstream fileout;
	if (argc != 4)
	{
		std::cout << "Invalid number of parameter" << std::endl;
		exit (-1);
	}
	std::string namefile = argv[1];
	std::string to_change = argv[2];
	std::string with_that = argv[3];
	std::string buffer;
	std::string infile;
	int	i = 0;

	filein.open(namefile, std::ios::in);
	fileout.open(namefile.append(".replace"), std::ios::out);
	if (!filein )
	{
		std::cout << "Error couldn't open in or out file" << std::endl;
		exit (-1);
	}

	while(getline(filein, buffer))
	{
		infile.append(buffer);
		infile.append("\n");
	}
	std::cout << infile << std::endl;

	while(infile[i])
	{
		if (infile.substr(i, i + to_change.length()) == to_change)
		{
			infile.erase(i, to_change.length());
			infile.insert(i, with_that);
		}
		i++;
	}
	fileout << infile;
}