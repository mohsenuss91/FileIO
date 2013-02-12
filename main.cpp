#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int  m,o;
	int i=10000;
    int numbers[i];
    string line;

	fstream myFile;
    myFile.open("data10k.txt");

    while (myFile.good()) {


        getline (myFile, line);
        stringstream(line) >>numbers[i];



        for  (i=0;i<10000;i++)
        {
				m=numbers[i];
				o=o-1;
        }
        while (o>=0 && numbers[o]>m)
        {
        	numbers[o+1]=numbers[m];
        	o=o-1;
        }
		numbers[o+1]=m;

		cout<<numbers[i]<<" ";
    myFile.close();
    }

    return 0;
}
