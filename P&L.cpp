#include <iostream>
using namespace std;
int main() {

  //entering values to the program//

  double buyprice, sellprice;
  int quantity;
cout << "Enter BUY Price:";
cin >> buyprice;
cout << "Enter Selling Price:";
cin >> sellprice;
cout << "enter Quantity:";
cin >> quantity;

//caliculating profit or loss in numbers and percentage//

 double profit = (sellprice-buyprice)*quantity;
 
 double profitpercentage = (((sellprice*quantity)/(buyprice*quantity))*100)-100;
 cout << "Result" << endl;
 //printing the P&L in amount and percentage//
 
if(sellprice > buyprice){
    cout << "your profit is :" << profit << "\n"<<"your profit percentage is :"<< profitpercentage << "%" ;
}

else if (sellprice > buyprice) {
    cout << "your loss is :" << profit << "\n"<<"your loss percentage is :"<< profitpercentage << "%" ;
}

else{
    cout << "no profit no loss";
}

return 0;
}