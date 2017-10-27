#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;
	
int main () {
  ofstream write;
  write.open ("write.txt");
  write << "arpita is writing an essay.\n";
  write.close();
   ifstream myReadFile;
 myReadFile.open("write.txt");
 char output[100];
 if (myReadFile.is_open()) {
 while (!myReadFile.eof()) {


    myReadFile >> output;
    cout<<output;


 }
}
myReadFile.close();
getch();
  return 0;
}

