#ifndef INPUTINTERFACEMODULE_H
#define INPUTINTERFACEMODULE_H

#include<string>


struct farminput {
    std::string location;
    std::string crop;
    std::string soiltype;
    std::string season;
    float temperature;
    float rainfall;
};

farminput collectfarmdata(); 
    bool validatefarmdata(const farminput& data);
    void savefarmdata(const farminput& data);

    #endif
    
