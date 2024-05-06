//Obtaining the size of the file
#include<iostream>
#include <fstream>
using namespace std;
 int main (){


    streampos begin;
    streampos end;
    ifstream myfile("bsc-inf-19-22.txt", ios::binary);
    begin=myfile.tellg();
    myfile.seekg(0, ios::end);
    end=myfile.tellg();
    cout<<"Size is: "<<(end-begin)<<" bytes.\n";
    return 0;
 }