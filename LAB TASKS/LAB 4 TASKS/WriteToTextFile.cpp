//Writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main(){

ofstream myfile("bsc-inf-19-22.txt");
if (myfile.is_open()){

    myfile<<"This is a line.\n";
    myfile<<"This is another line.\n";
    myfile<<"Am yohane kumwendah .\n";
    myfile<<"A second year student at the university of Malawi";
    myfile.close();
}else{
    cout<<"Unable to open the file";
}
return 0;

}