#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string path;
	path = "c:/Users/Amlan/c program/dictionary/EnglishDictionary.txt";

	std::ifstream file( path.c_str() ) ;

	if( file.is_open() )
	{
		std::string word ; // ./../bobble_assignment/EnglishDictionary.txt
		std::getline(std::cin,word);

		int countwords = 0 ;
		std::string candidate ;
		while( file >> candidate ) // for each candidate word read from the file
		{
			if( word == candidate )
            {
                std::cout<< "YES, ";
                while (file >> candidate)
                {
                    std::cout<<candidate;
                    break;
                }
            }
		}
	}

}
