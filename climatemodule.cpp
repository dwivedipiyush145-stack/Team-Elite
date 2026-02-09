#include "climatemodule.h"
#include<iostream>

using namespace std;

string climatemodule(float temperature,float rainfall,const string& season){
    if(temperature>30 && rainfall<10){
        return "DROUGHT RISK";          // Season could be any 
    }
    if(rainfall>50){
        return "EXCESSIVE RAINFALL";
    }
    if(temperature>35 && rainfall<=30 && (season == "Kharif" || season == "Zaid")){
        return "HEAT STRESS";
    }
    if(temperature<10 && season == "Rabi"){
        return "COLD STRESS";
    }
    if(temperature>15 && temperature<30 && rainfall>10 && rainfall<50){
        return "NORMAL CLIMATE";
    }

    return "UNDEFINED CLIMATE";

}