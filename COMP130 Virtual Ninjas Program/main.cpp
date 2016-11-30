//
//  main.cpp
//  COMP130 Virtual Ninjas Program
//
//  Created by ax on 11/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

// define classes

class Enemy {
    public:
        // polymorphic virtual function will refer to specific classes for method actions
        virtual void attack() {}
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "karate chop!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "rawr blarrg!" << endl;
        }
};

int main() {
    // insert code here...
    cout << "Virtual Ninjas!\n";

    // create onjects
    Ninja n; // object n of Ninja data type
    Monster m; // object m of Monster data type
    Enemy * enemy1 = &n; // enemy 1 pointer set to address of ninja object
    Enemy * enemy2 = &m; // enemy 2 pointer set to address of monster object
    
    // call functions by reference (*this is necessary)
    (*enemy1).attack();
    (*enemy2).attack();
    
    // or use convenient arrow operators
    enemy1->attack();
    enemy2->attack();
    
    return 0;
}
