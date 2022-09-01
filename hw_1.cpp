#include <iostream>
using namespace std;

int main() {
  int feet, inches;
  int male, female;

  cout<<"Please enter your height(feet inches):";

  cin>>feet>>inches;

  if(feet<5)

  {
    cout<<"if you are a female, your ideal weight should be 100 pounds\n";
    cout<<"if you are a male, your ideal weight should be 106 pounds\n";
  }
  else
  {
    male = 106+6*(((feet-5)*12)+inches);

    female = 100+5*(((feet-5)*12)+inches);

    cout<<"if you are a male, your ideal weight should be "<<male<<" pounds\n";

    cout<<"if you are a female, your ideal weight should be "<< female<<" pounds\n";
    }
  Output:

  return 0;
}