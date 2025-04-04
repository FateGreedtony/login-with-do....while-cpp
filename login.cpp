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
        do
        {
            string userName = "";
            int pass = 0;
        } while (false);
        ++jumlahCoba;

        
        // start of logic
        cout << "Masukkan username: ";
        cin >> userName;
        cout << "Masukkan Password: ";
        cin >> pass;
        // end of logic

    } while (!((userName == "Malik") && (pass == 1234)));
    
    cout << "Selamat datang di akun. Jumlah percobaan: " << jumlahCoba << endl;

    system("pause");
    return 0;
}