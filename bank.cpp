nclude<iostream>
using namespace std;
class bank_account{
    private:
          int balance;
         int account_no;
          int pin;

          public:
          bank_account(){
             balance=1234;
             pin=5643;
             account_no=90876;
          }
          void deposit(int val){
            if(account_no==90876){
                cout<<"True";
            }if(pin==5643){
                cout<<"We can deposit";
            }else{
                cout<<"We can not deposit";
            }
          }
          void withdrawl(){
            if(account_no==90876){
                cout<<"True";
            }if(balance>=1234){
                cout<<"We can withdraw";
            }else{
                cout<<"WE can not withdraw";
            }
          }
          
};
int main(){

}
