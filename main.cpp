#include <iostream>
#include "fileManager/File.h"

int main(int argc, char *argv[]){

  if (argc < 2 ) {
  	std::cout  << "Not enough arguments " << std::endl;
  	std::cout  << "Usage : "<< argv[0] << " [-tspu] filename " << std::endl;	
  	return 1;
  }
  
  swizz::File fileObject, fileObject2(std::string("Code Pink"));
   
   fileObject.info();
   fileObject2.info();
   
  std::cout << "Ok " << std::endl;
  
  return 0;   	
}