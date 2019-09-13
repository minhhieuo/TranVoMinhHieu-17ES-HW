#include <iostream>
#include <conio.h>

using namespace std;

class BankAccount
{
    private:    long id;
                double balance;
    public:
        BankAccount(long id, double balance)
        {
            this->id = id;
            this->balance = balance;
        }
        void deposit(double dps)
        {
            if (dps> 0)
                balance= balance + dps;
        }
        void withdraw(double wdr)
        {
            if(wdr> 0 && balance > wdr)
                balance= balance- wdr;
            else cout<<"Invalid Withdrawal"<<endl;
        }
        void showDetails()
        {
            cout << "ID= " << id << endl;
            cout << "Balance= " << balance << endl;
            cout << "\n\n";
        }
};

int main()
{
    BankAccount acc1(123456789, 3000);
    BankAccount acc2(123456788,200);

    acc1.showDetails();
    acc1.deposit(2100);
    acc1.showDetails();

    acc2.showDetails();
    acc2.withdraw(1300);
    acc2.showDetails();

    return 0;
}
