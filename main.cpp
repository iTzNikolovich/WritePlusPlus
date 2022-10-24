#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    fstream strm;
    time_t currentTime;
    time(&currentTime);
    strm.open("/Volumes/ASSD/files.txt", ios_base::out); //'out' sovrascrive, 'app' aggiunge
    if(strm.is_close()){
        cout << "Error 100, file could be opened." << endl; 
        return 1;
    }
    strm << asctime(localtime(&currentTime)) << endl; //Write current time into the file
    strm.close();
    if(strm.is_open()){
        cout << "Error 101, file could not be opened." << endl;
        return 1;
    }
    cout << "Completed." << endl;
    return 0;
}
