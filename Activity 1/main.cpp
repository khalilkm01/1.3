//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <cmath>
#include <iostream>

const double PI = 3.14159265359;

void circular(double radius, double &area, double &volume);
void currency_converter(float gbp, float &usd, float &euro, float &naira);

int main() {
  double area, volume;
  circular(1.0, area, volume);
  std::cout << "Area = " << area << ", Volume = " << volume << std::endl;

  float gbp,usd,euro,naira;
  std::cout << "Please Enter GBP Value: " <<  std::endl;
  std::cin >> gbp;
  currency_converter(gbp,usd,euro,naira);
  std::cout << "usd: " << usd << std::endl;
  std::cout << "euro: " << euro << std::endl;
  std::cout << "naira: " << naira << std::endl;
}

void circular(double radius, double &area, double &volume) {
  area = PI * pow(radius, 2.0);
  volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
}

void currency_converter(float gbp, float &usd, float &euro, float &naira){
  usd = gbp * 1.01;
  euro = gbp * 1.01;
  naira = gbp * 600;
}