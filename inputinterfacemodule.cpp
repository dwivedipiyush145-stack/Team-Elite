#include "inputinterfacemodule.h"
#include<iostream>
#include<fstream>
using namespace std;

farminput collectfarmdata(){
    farminput data;

    ifstream file("farm_input.txt");
    
    if(!file){
        cout<<"ERROR : Unable to open input file !"<<endl;
        return data;
    }
   
    getline(file,data.location);
    getline(file,data.crop);
    getline(file,data.soiltype);
    getline(file,data.season);
    file>>data.temperature;
    file>>data.rainfall;
    
    file.close();

    return data;

}

bool validatefarmdata(const farminput& data){
    if(data.location.empty() || data.crop.empty()){
        return false;       // Invalid data 
    }
    if(data.soiltype.empty() || data.season.empty()){
        return false;         // Invalid data 
    }
    if(data.temperature<0 || data.temperature>60){
        return false;         // Invalid data 
    }
    if(data.rainfall<0){
        return false;           // Invalid data
    }
    
    return true;                // Valid data

}

void savefarmdata(const farminput& data){
    ofstream file("farm_input_cleaned.txt");

    if(!file){
        cout<<"ERROR : Unable to save farm data "<<endl;
        return;
    }

    file<<data.location<<endl;
    file<<data.crop<<endl;
    file<<data.soiltype<<endl;
    file<<data.season<<endl;
    file<<data.temperature<<endl;
    file<<data.rainfall<<endl;

    file.close();

}

