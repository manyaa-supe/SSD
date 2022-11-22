#include <iostream>
 
using namespace std;
 
// Base class
class WindowImp {
   public:
      virtual void OperationImp(){
      	cout<<"Implementor"<<endl;
	  }
      
};
 
// Derived classes
class MacImplementor: public WindowImp {
   public:
      void OperationImp() { 
         cout<<"Mac "<<endl;
      }
};

class LinuxImplementor: public WindowImp {
   public:
      void OperationImp() { 
         cout<<"Linux "<<endl;
      }
};

// Base class
class Window {
   public:
   	  LinuxImplementor linux;
   	  MacImplementor mac;
   	  
      virtual void Operation(){
    	//w->OperationImp();
	  }
	
      
};
 
// Derived classes
class MobileWindow: public Window {
   public:
       virtual void Operation(){
       	cout<<"Mobile's Operating System ";
    	mac.OperationImp();
	  }
};

class DesktopWindow: public Window {
   public:
      virtual void Operation(){
      	cout<<"Desktop's Operating System ";
    	linux.OperationImp();
	  }
};


int main(void) {
 
 	MobileWindow m;
 	m.Operation();
 	
 	DesktopWindow d;
 	d.Operation();
	return 0;
}
