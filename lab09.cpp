#include<iostream>

using namespace std;


class Packing{
 
public:
 

virtual string pack()
{
        string packk = "Pack";

        return packk;
}
    virtual int price()
    {
        int pricee=0;

        return pricee;
    }
};

class CD : public Packing {

public:
string pack()
{
        string packk = "CD Title";
        return packk;
}
};

class CDType : public CD{
protected:
    Packing packin_array[5];

public:
string pack()
{
        string packk = "CD Title";
        return  packk;
}
int price()
{
        int pricee = 0;
        return pricee;
}
};

class Company : public CD{
public:
int price()
{
        int pricee = 0;
        return pricee;
}
};

class Sony : public Company{
public:
    string pack()
    {
        string x = "Sony";
        return x;
    }
    int price()
    {
        int y = 125;
        return y;
    }
};

class Samsung : public Company{
public:
    string pack()
    {
        string x = "Samsung";
        return x;
    }
    int price()
    {
        int y = 100;
        return y;
    }
};

class CDBuilder : public CDType{
protected:
    Sony sony;
    Samsung samsung;
public:
   
    void buildsamsung()
    {
        cout << "\n\nPasked Product " << samsung.pack() << " has price: " << samsung.price()<<endl;
    }
     void buildSonyCD()
    {
        cout<<"\n\nPacked Product "<<sony.pack()<<" has price: "<<sony.price()<<endl;
    
    }
};

int main()
{
    CDBuilder x;
    x.buildsamsung();
    x.buildSonyCD();



	return 0;
}


