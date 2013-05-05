#include <iostream>

namespace swizz {
	class File {
		private:
		 	long filesize;
		 	std::string filename;
		 	std::string filetype;
		public:
		  /**
		  File() {
		  	std::cout << "File constructor  called " << std::endl;
		  } 
		  **/
		  
		  File() : filename(std::string("hello") ) {
		  	std::cout << "File constructor  called with " << filename << std::endl;
		  }
		  
		   File(std::string filename)  {
		  	std::cout << "File constructor  called with " << filename << std::endl;
		  }
		  
		  void info(); 		
	};
}