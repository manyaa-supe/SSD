#include<iostream>
using namespace std;
 
class premiumPlan
{
 
	premiumPlan* plan;
public:
    premiumPlan(premiumPlan* selectedPlan = NULL): plan(selectedPlan){}
    ~premiumPlan(){} 
    virtual void SelectPlan(int amount){
    	if(plan)
    	{
    		plan->SelectPlan(amount);
		}
	}
};
 
class StudentPlan: public premiumPlan
{
 
public:
	StudentPlan(premiumPlan* selectedPlan = NULL): premiumPlan(selectedPlan){}
    ~StudentPlan(){} 
    void SelectPlan(int amount){
    	if(amount<=5000)
    	{
    		cout<<"Request Completed: Student plan Selected"<<endl;
		}
		else
		{
			cout<<"Request Not Completed: Student plan not Selected"<<endl<<"Passing on."<<endl;
			premiumPlan::SelectPlan(amount);
		}
	}
	

};
 
class basicPlan: public premiumPlan
{
 
public:
        basicPlan(premiumPlan* selectedPlan = NULL): premiumPlan(selectedPlan){}
        ~basicPlan(){}
        void SelectPlan(int amount){
    	if(amount>5000 && amount<8000)
    	{
    		cout<<"Request Completed: Basic plan Selected"<<endl;
		}
		else
		{
			cout<<"Request Not Completed: Basic plan not Selected"<<endl<<"Passing on."<<endl;
			premiumPlan::SelectPlan(amount);
		}
	}
};
class advancedPlan: public premiumPlan
{
 
public:
	
		advancedPlan(premiumPlan* selectedPlan = NULL): premiumPlan(selectedPlan){}
        ~advancedPlan(){}
        void SelectPlan(int amount){
    	if(amount>8000)
    	{
    		cout<<"Request Completed: Advanced plan Selected"<<endl;
		}
		else
		{
			cout<<"No Such Plan exists!"<<endl;
		}
	}
        
};
int main()
{
    cout<<"Chain of Responsibility"<<endl;
    cout<<endl;
    
    advancedPlan* advanced = new advancedPlan;
    basicPlan* basic = new basicPlan(advanced);
    StudentPlan* student = new StudentPlan(basic);
    premiumPlan* premium = new premiumPlan(student);
    
	cout<<"Executing Plan 1"<<endl;
    premium->SelectPlan(5000);
    cout<<endl;
    
 
    std::cout<<"Executing Plan 2"<<endl;
    premium->SelectPlan(7000);
    cout<<endl;
    
    
    std::cout<<"Executing Plan 3"<<endl;
    premium->SelectPlan(9000);
    cout<<endl;
    
    
 
    return 0;
}
