#include <cmath>
#include <fstream>
#include <iostream>
#include <cstdlib>
std::ofstream data("data.txt");
bool checkall(double a, double c_sk)
{
  for (;a<c_sk;a++){
      for (int c = 1; c<=c_sk;c++){
          double b = sqrt(pow(c,2)-pow(a,2));

          if (std::fmod(b,1.0)==0 && a<c && b<c && a<b){
          data << b << "," << c <<std::endl;
          data << -b << "," << c <<std::endl;
          data << -b << "," << -c <<std::endl;
          data << b << "," << -c <<std::endl;
          data << a << "," << c <<std::endl;
          data << -a << "," << c <<std::endl;
          data << -a << "," << -c <<std::endl;
          data << a << "," << -c <<std::endl;
          data << a << "," << b <<std::endl;
          data << -a << "," << b <<std::endl;
          data << -a << "," << -b <<std::endl;
          data << a << "," << -b <<std::endl;
          }
        }
    }
  return true;
}
bool check3(double a, double c_sk)
{
  for (;a<c_sk;a++){
      for (int c = 1; c<=c_sk;c++){
          double b = sqrt(pow(c,2)-pow(a,2));

          if (std::fmod(b,1.0)==0 && a<c && b<c && a<b){
          data << b << "," << c <<std::endl;
          data << -b << "," << c <<std::endl;
          data << -b << "," << -c <<std::endl;
          data << b << "," << -c <<std::endl;
          }
        }
    }
  return true;
}
bool check2(double a, double c_sk)
{
  for (;a<c_sk;a++){
      for (int c = 1; c<=c_sk;c++){
          double b = sqrt(pow(c,2)-pow(a,2));

          if (std::fmod(b,1.0)==0 && a<c && b<c && a<b){
          data << a << "," << c <<std::endl;
          data << -a << "," << c <<std::endl;
          data << -a << "," << -c <<std::endl;
          data << a << "," << -c <<std::endl;
          }
        }
    }
  return true;
}
bool check1(double a, double c_sk)
{
  for (;a<c_sk;a++){
      for (int c = 1; c<=c_sk;c++){
          double b = sqrt(pow(c,2)-pow(a,2));

          if (std::fmod(b,1.0)==0 && a<c && b<c && a<b){
          data << a << "," << b <<std::endl;
          data << -a << "," << b <<std::endl;
          data << -a << "," << -b <<std::endl;
          data << a << "," << -b <<std::endl;
          }
        }
    }
  return true;
}
int main(){
  double a=1,c_sk;
  int choice;
  std::cout << "enter amount of cycles (exponentially harder to generate for python graph):  " << std::endl;
  std::cin >> c_sk;
  std::cout << "select sequence 1)a,b 2)a,c 3)b,c 4)unrecommended option: all of the above graphs in one" << std::endl;
  std::cin >> choice;
  switch (choice){
    case 1:  
    std::cout << std::endl << "compiling..." << std::endl << std::endl << "compiling success: ";
    std::cout << check1(a,c_sk) << std::endl;
    std::cout << "compiling python graph..." << std::endl<<std::endl;
    break;
    case 2:
    std::cout << std::endl << "compiling..." << std::endl << std::endl << "compiling success: ";
    std::cout << check2(a,c_sk) << std::endl;
    std::cout << "compiling python graph..." << std::endl<<std::endl;
    break;
    case 3:
    std::cout << std::endl << "compiling..." << std::endl << std::endl << "compiling success: ";
    std::cout << check3(a,c_sk) << std::endl;
    std::cout << "compiling python graph..." << std::endl <<std::endl;
    break;
    case 4:
    std::cout << std::endl << "compiling... (will take a while)" << std::endl << std::endl << "compiling success: ";
    std::cout << checkall(a,c_sk) << std::endl << std::endl;
    std::cout << "compiling python graph... (look at output window)" << std::endl;
  }
    data.close();
    std::system("python3 graph.py");
}