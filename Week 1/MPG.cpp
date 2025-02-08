// MPG.cpp,Mansor Amond-Mansaray, 2/6/2025,This program determines the miles per gallon by dividing the number of miles driven by the number of gallons used.

#include <iostream>

int main(){   
    const double KM_PER_MILE = 1.60934;
    
    std::string desc;
    int miles;
    float gallons;      
    float mpg;

    
    std::cout<<"Please enter a description of your car: ";
    std::getline(std::cin, desc);
    
    std::cout<<"How many miles did you drive? ";
    std::cin>>miles;
    std::cout<<"How many gallons of gas did you use? ";
    std::cin>>gallons;

    mpg = miles / gallons;

    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"You drove " << miles << " miles and used " << gallons << " gallons."<<std::endl;
    std::cout<<"Your fuel efficiency is " << mpg << " miles per gallon."<<std::endl;

    return 0;
}