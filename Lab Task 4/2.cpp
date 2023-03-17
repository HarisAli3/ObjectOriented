
/*
#include <iostream>
using namespace std;

class User{
private:
    string *name;
    int *cnic;
    int *sapId;
public:
    User(){
        name = new string;
        cnic = new int;
        sapId = new int;
    }
    void setValues(string n, int cn, int sap){
        *name = n;
        *cnic = cn;
        *sapId = sap;
    }
    User (User & u){
        name = new string;
        *name = *(u.name);
        cnic = new int;
        *cnic = *(u.cnic);
        sapId = new int;
        *sapId = *(u.sapId);
    }
    const string* getName(){
        return name;
    }
    const int* getcnic(){
        return cnic;
    }
    const int* getSapId(){
        return sapId;
    }
};

int main() {
    User u1, u2, u3;
    u1.setValues("HarisAli", 10, 20);
    cout << "User 1 Name:" << u1.getName() << "\nUser 1 CNIC:" << u1.getSapId() << "\nUser 1 SapId:" << u1.getSapId() << endl;
    cout << "User 2 Name:" << u2.getName() << "\nUser 2 CNIC:" << u2.getSapId() << "\nUser 2 SapId:" << u2.getSapId() << endl;
    cout << "User 3 Name:" << u3.getName() << "\nUser 3 CNIC:" << u3.getSapId() << "\nUser 3 SapId:" << u3.getSapId() << endl;
    cout << "End First Output:" << endl;
    cout << "User 1 Name:" << u1.getName() << "\nUser 1 CNIC:" << u1.getSapId() << "\nUser 1 SapId:" << u1.getSapId() << endl;
    cout << "User 2 Name:" << u2.getName() << "\nUser 2 CNIC:" << u2.getSapId() << "\nUser 2 SapId:" << u2.getSapId()<< endl;
    cout << "User 3 Name:" << u3.getName() << "\nUser 3 CNIC:" << u3.getSapId() << "\nUser 3 SapId:" << u3.getSapId()<< endl;
    cout << "End Second Output:" << endl;
    cout << "User 1 Name:" << u1.getName() << "\nUser 1 CNIC:" << u1.getSapId() << "\nUser 1 SapId:" << u1.getSapId()<< endl;
    cout << "User 2 Name:" << u2.getName() << "\nUser 2 CNIC:" << u2.getSapId() << "\nUser 2 SapId:" << u2.getSapId()<< endl;
    cout << "User 3 Name:" << u3.getName() << "\nUser 3 CNIC:" << u3.getSapId() << "\nUser 3 SapId:" << u3.getSapId()<< endl;

    return 0;
}
*/
