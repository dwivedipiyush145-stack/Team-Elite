#include<iostream>
#include<string>
#include "inputinterfacemodule.h"
#include "climatemodule.h"
#include "cropsuitabilitymodule.h"
#include "irrigationadvisorymodule.h"
#include "suitablefertilizermodule.h"
#include "advisorydecisionmodule.h"

using namespace std;

int main(){
    farminput data = collectfarmdata();

    if(validatefarmdata(data)){
        savefarmdata(data);
        cout<<"Farm data proccessed successfully"<<endl;

        string climatewarning = climatemodule(data.temperature,data.rainfall,data.season);
        string cropsuggested = cropsuitability(data.soiltype,data.season,data.crop,data.temperature,data.rainfall);
        string irrigationadvice = irrigationadvisory(cropsuggested,data.season,data.rainfall,climatewarning,data.soiltype);
        string suggestedfertilizer = suitablefertilizer(data.crop,data.soiltype,data.season,climatewarning);
        string advisoryfinal = advisorydecision(climatewarning,cropsuggested,irrigationadvice,suggestedfertilizer);
        
    }
    else {
        cout<<"ERROR : Invalid farm data "<<endl;
    }
   
    
   
    return 0;

}