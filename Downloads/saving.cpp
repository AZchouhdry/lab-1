#include <iostream>
using namespace std;
float saving_cal(float,float);;
float intrest,remaining;
int n;


int main(int argc, char const *argv[])
{
  float years,installment,total,calculator;
  cout<<"enter the years"<<endl;
  cin>>years;
for(n=1;n<=years;n++)
{calculator=saving_cal(installment,total);}

  return 0;
}

float saving_cal(float installment,float total)
{
cout<<"enter your "<<n<<"th installment"<<endl;
cin>>installment;
installment=installment+remaining;

  intrest=0.05*installment;
  total = installment+intrest;
remaining = total;
cout<<"amount after intrest = "<< remaining<<endl;
  return(total);


}
