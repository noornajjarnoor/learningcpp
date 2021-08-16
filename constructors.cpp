#include <iostream>
class ball{
    private:
    std::string m_color;
    double m_radius;
    public:
    ball(std::string c , double r ){
        m_color=c;
        m_radius=r;
    }
    ball(std::string c){
        m_color=c;
        m_radius=10.0;
    }
    ball(double r){
        m_radius=r;
        m_color="black";
    }
    ball(){
        m_color="black";
        m_radius=10.0;
    }
    void print(){
        std::cout<<"the color is: ";
        std::cout<< m_color << std::endl;
        std::cout<<"the radius is : ";
        std::cout<< m_radius;
    
    }

};
int main()
{
	ball def{};
	def.print();
 
	ball blue{ "blue" };
	blue.print();
	
	ball twenty{ 20.0 };
	twenty.print();
	
	ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();
 
	return 0;
}