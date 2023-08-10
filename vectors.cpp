#include <iostream>
#include <vector>

int main(){

  int total_even=0;
  int prod_odd=1;

  std::vector<int> vector={2,4,3,6,1,9};

  for(int i=0;i <vector.size();i++)
  if(vector[i]%2==0){
    total_even=total_even+vector[i];
  }else{
    prod_odd=prod_odd*vector[i];
  }
std::cout<<"Sum of even:"<< total_even<<"\n";
std::cout<<"Prod of odd"<<prod_odd<<"\n";
}
