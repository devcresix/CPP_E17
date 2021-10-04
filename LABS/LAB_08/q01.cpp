#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Write a program to read a set of lines from the keyboard and to store it on a specified file.

int main(){
    string line;

    ofstream myFile;

    myFile.open("q01.txt");

    if(myFile.is_open()){
        cout << "Enter the lines to write to the file and type 'exit' to save\n";

        while(true){
            getline(cin, line);
            if(line=="exit"){
                myFile.close();
                break;
            }
            myFile << line << endl;
        }
    }else{
         cout << "File is not opened\n";
    }

    return 0;
}