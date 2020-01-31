#include "object.h"
#include <iostream>

class String : public Object {

        public:
	
	//constructor 
	//Initialize an empty string
	String() {
	}

	//Initialize string with an array of characters
	String(const char* c) {
	}
	
	//destructor 
	~String() {                     
	}
	
	//compare o with this string for quality
	bool equals(Object* o) {
		
	}
	
	//return size of this string
	size_t size() {
		
	}
};
