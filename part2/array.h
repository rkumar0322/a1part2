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

class StrArray: public Object {
public:
    
    //Constructor:
    //initializing an empty string array
    StrArray() {   
    }
    
    //destructor 
    ~StrArray() {
    }

   
    //assign the element at index with input object
    void assign(String* s, size_t index) {

    }
    
    //returns the string at index 
    String* get(size_t index) {
        
    }
    
    //appends s to the end of the array 
    void push_back(String* s) {
        
    }
    
    //inserts s at index
    void add(String* s, size_t index) {
        
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

class FloatArray: public Object {
public:

    //Constructor:
    //initializing an empty float array
    FloatArray() {
    }
    
    ~FloatArray() {
    }
   
   
    //assign the element at index with input float
    void assign(float element, size_t index) {

    }
    
    //returns the element at index 
    float get(size_t index) {
        
    }
    
    //appends f to the end of the array 
    void push_back(float f) {
        
    }
    
    //inserts f at index
    void add(float f, size_t index) {
        
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

class IntArray: public Object {
public:

    //Constructor:
    //initializing an empty int array
    IntArray() {
    }
    
    //destructor 
    ~IntArray() {
    }
  
    //assign the element at index with input int
    void assign(int i, size_t index) {

    }
    
    //returns the int at index 
    int get(size_t index) {
        
    }
    
    //appends i to the end of the array 
    void push_back(int i) {
        
    }
    
    //inserts i at index
    void add(int i, size_t index) {
        
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

class BoolArray: public Object {
public:

    //Constructor:
    //initializing an empty bool array 
    BoolArray() {
    }
   
    //destructor
    ~BoolArray() {
    }
  
    //assign the boolean at index with input object
    void assign(bool b, size_t index) {

    }
    
    //returns the bool at index 
    bool get(size_t index) {
        
    }
    
    //appends b to the end of the array 
    void push_back(bool b) {
        
    }
    
    //inserts b at index
    void add(bool b, size_t index) {
        
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
