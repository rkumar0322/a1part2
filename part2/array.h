//
// Created by Rahul Kumar on 1/24/20.
//

#include <cstddef>
#include "object.h"
#include "string.h"

#ifndef ASSIGNMENT1PARTW_ARRAY_H
#define ASSIGNMENT1PARTW_ARRAY_H

#endif //ASSIGNMENT1PARTW_ARRAY_H


class Array: public Object {
public:

    //Constructor:
    //initializing an empty array
    Array() {
    }
    
    //destructor
    ~Array() {
    }
    

    //assign the element at index with input object
    void assign(Object* element, size_t index) {

    }
    
    //returns the element at index 
    Object* get(size_t index) {
        
    }
    
    //appends e to the end of the array 
    void push_back(Object* o) {
        
    }
    
    //inserts o at index
    void add(Object* o, size_t index) {
        
    }
    
    //removes all elements in the array 
    void clear() {
        
    }
    
    //compares o with this array for equality 
    bool equals(Object* o) {
        
    }

    //returns the number of elements in the array
    size_t length() {

    }

};

class Float: public Object {
public:

    //Constructor:
    //initializing an empty float
    Float() {
    }
    
    //constructor for passing in a float
    Float(float y) {
        
    }
    
    ~Float() {
    }
    //compares o with this float for equality 
    bool equals(Object* o) {
        
    }
};

class Integer: public Object {
public:

    //Constructor:
    //initializing an empty Integer
    Integer() {
    }
    
    //constructor for passing in an integer
    Integer(int y) {
        
    }
    
    //destructor 
    ~Integer() {
    }
    //compares o with this Integer for equality 
    bool equals(Object* o) {
        
    }
};

class Bool: public Object {
public:

    //Constructor:
    //initializing an empty bool 
    Bool() {
    }
    
    //constructor for passing in a bool
    Bool(bool b) {
        
    }
   
    //destructor
    ~Bool() {
    }
 
    //compares o with this bool for equality 
    bool equals(Object* o) {
        
    }
};
