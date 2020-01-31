#include <iostream>
#include "object.h"
#include "array.h"
#include "string.h" 

void FAIL() {   exit(1);    }
void OK(const char* m) { /** print m */ }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

void test1() {
    
    String* s1 = new String("Hello");
    String* s2 = new String("World");
    String* s3 = new String("Hello");
    t_true(s1->equals(s3));
    t_false(s1->equals(s2));
    OK("1");
    
}


void test2() {
    
    String* s1 = new String("Hello");
    String* s2 = new String("World");
    String* s3 = new String("Earth");
    StrArray* a = new StrArray(10);
    a->push_back(s1);
    a->push_back(s2);
    t_true(a->get(0)->equals(s1));
    t_true(a->get(1)->equals(s2));
    t_true(a->length() == 2); 
    a->assign(s3, 0);
    t_true(a->get(0)->equals(s3));
    a->clear();
    t_true(a->length() == 0);
    OK("2");
    
}


void test3() {
    
    String* s1 = new String("Hello");
    String* s2 = new String("World");
    String* s3 = new String("Earth");
    StrArray* a = new StrArray(10);
    a->push_back(s1);
    a->push_back(s2);
    t_true(a->get(0)->equals(s1));
    t_true(a->length() == 2); 
    a->add(s3, 0);
    t_true(a->length() == 3);
    t_true(a->get(0)->equals(s3));
    t_true(a->get(1)->equals(s1));
    t_true(a->get(2)->equals(s2));
    OK("3");
   
}

void test4() {
    
    String* s1 = new String("Hello");
    String* s2 = new String("World");
    String* s3 = new String("Earth");
    StrArray* a1 = new StrArray(10);
    a1->push_back(s1);
    a1->push_back(s2);
    StrArray* a2 = new StrArray(10);
    a2->push_back(s1);
    a2->push_back(s2);
    t_true(a1->equals(a2));
    StrArray* a3 = new StrArray(10);
    a3->push_back(s1);
    a3->push_back(s3);
    t_false(a1->equals(a3));
    OK("4");
    
}

void test5() {
    
    Object* o1 = new Object();
    Object* o2 = new Object();
    Object* o3 = new Object();
    Array* a = new Array(10);
    a->push_back(o1);
    a->push_back(o2);
    t_true(a->get(0)->equals(o1));
    t_true(a->get(1)->equals(o2));
    t_true(a->length() == 2); 
    a->assign(o3, 0);
    t_true(a->get(0)->equals(o3));
    a->clear();
    t_true(a->length() == 0);
    OK("5");
    
}


int main() {
    
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
}
