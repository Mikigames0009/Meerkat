#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    if (argc > 2)
    {
        cout << "More than 2 arguments!";
        exit(-1);
    }

    if (argc < 2)
    {
        cout << "Less than 2 arguments!";
        exit(-1);
    }

    string filename = argv[1];

    fstream file(filename);

    if (!file) {
        cout << "Failed to open!";
        exit(-1);
    }

    cout << endl;

    string line;

    while (getline(file, line)) {
	    cout << line << endl;
    }

    cout << endl;

    file.close();
 
    return 0;
}