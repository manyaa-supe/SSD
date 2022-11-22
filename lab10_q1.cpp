#include <iostream>
 
using namespace std;
 
// Base class
class Workshop {
   public:
      virtual void getWorkShop(){
      	cout<<"Workshop"<<endl;
	  }
      
};
 
// Derived classes
class Produce: public Workshop {
   public:
      void getWorkshop() { 
         cout<<"Producing ";
      }
};

class Assemble: public Workshop {
   public:
      void getWorkshop() { 
         cout<<"Assembling ";
      }
};

// Base class
class Vehicle {
   public:
   	  Produce p;
   	  Assemble a;
      virtual void getVehicle(){
      	cout<<"Vehicle"<<endl;
	  }
	
      
};
 
// Derived classes
class Bus: public Vehicle {
   public:
      void getVehicle() { 
         cout<<"Bus"<<endl;
      }
};

class Bike: public Vehicle {
   public:
      void getVehicle() { 
         cout<<"Bike"<<endl;
      }
};


int main(void) {
 
 	Bus b;
 	b.p.getWorkshop();
 	b.getVehicle();
 	
 	cout<<endl;
 	Bike c;
 	c.a.getWorkshop();
 	c.getVehicle();
	return 0;
}
