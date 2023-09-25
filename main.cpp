#include <iostream>
#include <fstream>
#include <sstream>
#include "sha1.h"

using namespace std;

int main(int argc, char *argv[]) {
    ifstream file; file.open("../test.txt");
    stringstream buffer;

    buffer << file.rdbuf();

    string file_contents;
    file_contents = buffer.str();

    cout << "sha1: " << sha1(file_contents) << endl;
    return 0;
}
