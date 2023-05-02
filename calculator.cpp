//---------------------libraries------------------
#include <iostream>
#include <array>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>

//----------------classes--------------------------

class calc {
    public:
    float sum(float q, float p);
    float dif(float q, float p);
    float mult(float q, float p);
    float div(float q, float p);
};

class sci {
    public:
    float cosc(float a);
    float sins(float a);
    float tant(float a);
};

//---------------fuctions-------------------------

float calc::sum(float q, float p){
           return q + p;
}
float calc::dif(float q, float p){
           return q - p;
}
float calc::mult(float q, float p){
           return q * p;
}
float calc::div(float q, float p){
           return q / p;
}
float sci::cosc(float a){
          return cos(a);
}
float sci::sins(float a){
          return sin(a);
}
float sci::tant(float a){
          return tan(a);
}
//----------main code----------------------------

int main(){
    calc obj;
    sci ob;
    std::string p;
    std::cout<<"do you need the scientific vr (y/n) ";
    std::cin>>p;
    if(p == "y"){
        int c;
        std::string v;
        std::cin>>v>>c;
        if(v == "cos"){std::cout<<ob.cosc(c);}
        if(v == "sin"){std::cout<<ob.sins(c);}
        if(v == "tan"){std::cout<<ob.tant(c);}

    }
    if(p == "n"){
        float a, b;
        std::string c;
        std::cin>>a>>c>>b;
        if(c == "+"){std::cout<<obj.sum(a,b);}
        if(c == "-"){std::cout<<obj.dif(a,b);}
        if(c == "*"){std::cout<<obj.mult(a,b);}
        if(c == "/"){std::cout<<obj.div(a,b);}
    }
    
return 0;}