#include <stdio.h>

double weight;
int x;
int main() {
  printf("Input your weight on earth:\n");
  scanf("%lf",&weight);
  printf("You have choice to choose\n");
  printf("1:Mercury\n2:Venus\n3:Mars\n4:Jupiter\n5:Saturn\n6:Uranus\n7:Neptune\n");
  printf("Enter planet you want to fight:\n");
  scanf("%i",&x);
  if(x==1){
    weight = weight*0.38;
    printf("Your weight is %f",weight);
  }else if(x==2){
    weight = weight*0.91;
    printf("Your weight on venus is %f",weight);
}
 else if(x==3){
    weight = weight*0.38;
    printf("Your weight on mars is %f",weight);
}else if(x==4){
    weight = weight*2.34;
    printf("Your weight on jupiter is %f",weight);
}else if(x==5){
    weight = weight*1.06;
    printf("Your weight on saturn is %f",weight);
}else if(x==6){
    weight = weight*0.92;
    printf("Your weight on uranus is %.2f\n",weight);
}else if(x==7){
    weight = weight*1.19;
    printf("Your weight on Neptune is %f",weight);
}

}





 
