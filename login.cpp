#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    // start of initiation
    string userName;
    int pass;
    int jumlahCoba = 0;
    // end of initiation

    puts("=== Selamat Datang di Halaman Login ===\n");
    
    
    do{
        ++jumlahCoba;

        // start of resetting the name & pass
        do{
            string userName = "";
            int pass = 0;
        } while (false);
        // start of resetting the name & pass

        // logic for banning system
        if(jumlahCoba <= 3){
            // start of logic
            cout << "Masukkan username: ";
            cin >> userName;
            cout << "Masukkan Password: ";
            cin >> pass;
            // end of logic
        } else {
            cout << "akun mu kebanned\n";
            break;
        }
    } while (!((userName == "Malik") && (pass == 1234)));

    cout << "Selamat datang di akun. Jumlah percobaan: " << jumlahCoba << endl;


    system("pause");
    return 0;
}