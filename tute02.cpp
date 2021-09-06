#include <iostream>
using namespace std;
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;

   cout <<"Enter Employee Type : " << endl;
   cin >> etype;
   cout <<"Enter Salary  : "<< endl;
   cin >> salary;
   cout <<"Enter OtHrs : "<< endl;
   cin >> otHrs; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + ( otHrs * otRate);
   cout <<"Net Salary is" << netSalary << endl;
  
   return 0;
}