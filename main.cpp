#include <string>
#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <stdio.h>
#include <cstdlib>  
int myrandom (int i) { return std::rand()%i;}

int main()
{
      std::srand ( unsigned ( std::time(0) ) );
  std::vector<std::string> raid (10);
  raid[0] = "Ezye" ;
  raid[1] = "Swen" ;
  raid[2] = "Hosh" ;
  raid[3] = "Black" ;
  raid[4] = "Sens" ;
  raid[5] = "Fruzsi" ;
  raid[6] = "Zige" ;
  raid[7] = "Valhyr" ;
  raid[8] = "Welazar" ;
  raid[9] = "Feri" ;
  
  

  
  
 std::vector<std::string> s_raid = raid;
 
  std::random_shuffle ( s_raid.begin(), s_raid.end(),myrandom );
  
  for(int i = 0; i<raid.size();i++){
   std::cout << i << ".  "<< raid[i] << " <- cserél -> " << s_raid[i] <<std::endl;
      
  }


  
  
}
