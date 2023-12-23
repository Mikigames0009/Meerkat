#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    if (argc > 2)
    {
        cout << endl;
        cout << "More than 2 arguments!";
        cout << endl;
        exit(-1);
    }

    if (argc < 2)
    {
        cout << endl;
        cout << "Less than 2 arguments!";
        cout << endl;
        exit(-1);
    }

    string filename = argv[1];
    fstream file(filename);

    string help;
    help = "Help:";

    if (filename == "--help") {
        cout << endl;
        cout << help;
        cout << endl;
    }
    else if (!file) {
        cout << "Failed to open!";
        file.close();
        exit(-1);
        
    }
    else
    {
        cout << endl;
    }

    string line;

     while (getline(file, line)) {
	    cout << line << endl;
    }
    if (file) {
    cout << endl;
    }

    file.close();
 
    return 0;
}