#include <iostream>
#include "object.h"
#include "array.h"
#include "string.h" 

void FAIL() {   exit(1);    }
void OK(const char* m) { std::cout << "done" << m << std::endl;}
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

void test1() {
    
    String *s1 = new String("Hello");
    String *s2 = new String("World");
    String *s3 = new String("Hello");
    t_true(s1->equals(s3));
    t_false(s1->equals(s2));
    OK("1");
    
}


void test2() {
    

    String *s1 = new String("Hello");
    String *s2 = new String("World");
    String *s3 = new String("Earth");
    Array *a = new Array(10);

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
    
    String *s1 = new String("Hello");
    String *s2 = new String("World");
    String *s3 = new String("Earth");
    Array *a = new Array(10);

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
    
    String *s1 = new String("Hello");
    String *s2 = new String("World");
    String *s3 = new String("Earth");
    Array *a1 = new Array(10);
    a1->push_back(s1);
    a1->push_back(s2);
    Array *a2 = new Array(10);
    a2->push_back(s1);
    a2->push_back(s2);
    t_true(a1->equals(a2));
    Array *a3 = new Array(10);

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
    a->assign(o3, 0);
    t_true(a->get(0)->equals(o3));
    a->clear();
    t_true(a->length() == 0);
    OK("5");

}

void test6() {
    Array* a = new Array(10);
    Array* b = new Array(10);
    Array* c = new Array(10);
    Array* d = new Array(10);
    Integer* x = new Integer(10);
    Integer* y = new Integer(9);
    Bool* t = new Bool(true);
    Bool* f = new Bool(false);
    Float* u = new Float(1.0);
    Float* r = new Float(2.0);

    a->push_back(x);
    a->add(y, 1);
    t_true(a->get(0)->equals(x));
    t_true(a->get(1)->equals(y));

    b->push_back(t);
    b->add(f, 1);
    t_true(b->get(0)->equals(t));
    t_true(b->get(1)->equals(f));

    c->push_back(u);
    c->add(r, 1);
    t_true(c->get(0)->equals(u));
    t_true(c->get(1)->equals(r));
    c->assign(u, 1);
    t_true(c->get(1)->equals(u));
    
    d->push_back(x);
    d->add(y, 1);

    t_false(a->equals(c));
    t_true(a->equals(d));

    t_true(d->length() == 2);
    OK("6");
}
int main() {
    
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}
