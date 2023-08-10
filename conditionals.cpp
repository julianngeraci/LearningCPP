#include <iostream>

int main() {
  double weight;
  int p;
  std::cout<<"Enter your weight ";
  std::cin >>weight;
  
  std::cout<<"\n Which planet are you visiting? " ;
  std::cin >>p;

  if(p==1){

    weight=weight*0.38;

  }else if(p==2){

    weight=weight*0.91;

  }else if(p==3){

    weight=weight*0.38;

  }else if(p==4){

    weight=weight*2.34;

  }else if (p==5){
    weight=weight*1.06;

  }else if (p==6){

    weight=weight*0.92;

  }else {

    weight=weight*1.19;

  }

  std::cout<<"\n Your new weight: "<<weight<<"\n";
  
}
