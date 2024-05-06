//reading an entire bianry file
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    streampos size;
    char * memblock;
    ifstream file("bsc-inf-19-22.txt", ios::in|ios::binary|ios::ate);
    if (file.is_open()){
        size=file.tellg();
        memblock=new char [size];
        file.close();
        cout<<"the entire file content is memory";
        delete[] memblock;
    }else 
    {
        cout<<"Unable to open file";
    }
    return 0;
}