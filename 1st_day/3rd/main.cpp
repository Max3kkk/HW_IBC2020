#include <iostream>
#include <string>

using namespace std;

int main()
{
    string login = "CuteLukashenko228", password = "TonsOfPotato";

    for (int i = 0; i < 3; i++){
        string input_login, input_password;

        cout << "Enter your login : ";cin >> input_login;
        cout << endl << "Enter your password : ";cin >> input_password;

        if (input_login == login && input_password == password){
            cout << "Access has granted";
            return 0;
        }
        else {
            cout << "Access has restricted" << endl;
            if(i!=2)cout << "Please enter your data again" << endl;
        }
    }

    cout << "You can change your password...";
}
