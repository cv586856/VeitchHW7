#include "bankAccount.h"

int main(int argc, char* argv[]){

  BankAccount jackAccount("Jack Smith", 50.0); 
  
  BankAccount jillAccount("Jill Brian", 100.0);

  BankAccount bankArray[3] {
    BankAccount("Ralph Kramden", 10.0),
    BankAccount("Alice Kramden", 20.0),
    BankAccount("Ed Norton", 30.0) 
  };

  jackAccount.deposit(30);
  jillAccount.deposit(30);
  bankArray[0].deposit(30);
  bankArray[1].deposit(30);
  bankArray[2].deposit(30);

  jackAccount.withdraw(20);
  jillAccount.withdraw(20);
  bankArray[0].withdraw(20);
  bankArray[1].withdraw(20);
  bankArray[2].withdraw(20);

  cout << jackAccount.getName() << " Balance: " << jackAccount.getBalance() << endl;
  cout << jillAccount.getName() << " Balance: " << jillAccount.getBalance() << endl;
  for(int i = 0; i <=2; ++i) {
    cout << bankArray[i].getName() << " Balance: " << bankArray[i].getBalance() << endl;
  }
}