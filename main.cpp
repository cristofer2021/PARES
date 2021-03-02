#include <iostream>
using namespace std;

int main() {
int num,i,sumatoria;
sumatoria=0;
	cout << " ingrese el numero :\n";
	cin>> num; 
for (i=0;i<=num;i++)
{
  if(i % 2 ==0)
  {
  cout << "\n"<<i ;
  sumatoria=sumatoria+i;
  }
  }
cout << "La sumatoria de los pares es \n"<<sumatoria;
}