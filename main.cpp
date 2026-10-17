#include <iostream>
using namespace std;

int main() 
{
    string nama;
    string sekolah;
    string ulang;

    do{
        cout<<"masukan nama:  ";
        cin>>nama;

        cout<<"masukan nama sekolah:   ";
        cin>>sekolah;

        cout<<"nama mu adalah    ";
        cout<<nama<<endl;

        cout<<"sekolah mu adalah   ";
        cout<<sekolah<<endl;

        cout<<"apakah anda mau mengulang tekan y atau Y";

        cin>>ulang;
    }
    while(ulang=="y"|| ulang=="Y");
    return 0;
}
