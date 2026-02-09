#include "advisorydecisionmodule.h"
#include<iostream>
#include<string>

using namespace std;

string advisorydecision(string climatewarning,string cropsuggested,string irrigationadvice){
    string finaladvisory = "";

    //-------------------------------Climate information------------------------------------------
    if(climatewarning == "DROUGHT RISK"){
        finaladvisory = finaladvisory + "CLIMATE WARNING : Drought conditions expected.\n";
    }
    else if(climatewarning == "EXCESSIVE RAINFALL"){
        finaladvisory = finaladvisory + "CLIMATE WARNING : Excessive rainfall risk,can cause waterlogging.\n";
    }
    else if(climatewarning == "HEAT STRESS"){
        finaladvisory = finaladvisory + "CLIMATE WARNING : Heat stress conditions expected.\n";
    }
    else if(climatewarning == "COLD STRESS"){
        finaladvisory = finaladvisory + "CLIMATE WARNING : Cold stress conditions expected,it may affect crop growth.\n";
    }
    else if(climatewarning == "NORMAL CLIMATE"){
        finaladvisory = finaladvisory + "CLIMATE WARNING : Normal climatic conditions.\n";
    }
    else {
        finaladvisory = finaladvisory + "Climate information not availaible.\n";
    }

    //--------------------------------Crop advice--------------------------------------------------
    if(cropsuggested == "" || cropsuggested.find("NOT SUITABLE") != string::npos){
        finaladvisory = finaladvisory + "CROP ADVISORY : Current conditions are not suitable for major crops.\n";
    }
    else {
        finaladvisory = finaladvisory + "CROP ADVISORY : " + cropsuggested + ".\n";
    }
    
    //--------------------------------Irrigation advice--------------------------------------------
    finaladvisory = finaladvisory + "Irrigation advice : " + irrigationadvice + ".\n";

    //--------------------------------General precautions------------------------------------------
    if(climatewarning == "DROUGHT RISK"){
        finaladvisory = finaladvisory + "PRECAUTIONS : Use processes like mulching and sprinkler irrigation.\n";
    }
    else if(climatewarning == "EXCESSIVE RAINFALL"){
        finaladvisory = finaladvisory + "PRECAUTIONS : prevent standing water and delay use of fertilizers and pesticides.\n";
    }
    else if(climatewarning == "HEAT STRESS"){
        finaladvisory = finaladvisory + "PRECAUTIONS : Use shade nets wherever possible and avoid spraying chemicals during high temperatures.\n";
    }
    else if(climatewarning == "COLD STRESS"){
        finaladvisory = finaladvisory + "PRECAUTIONS : Cover crops with plastic sheets or straw and avoid irrigation at night.\n";
    }
    else {
        finaladvisory = finaladvisory + "PRECAUTIONS : Follow recommended crop management practices.\n";
    }

    return finaladvisory;


}