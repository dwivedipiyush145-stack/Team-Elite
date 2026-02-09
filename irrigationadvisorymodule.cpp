#include "irrigationadvisorymodule.h"
#include<iostream>
#include<string>

using namespace std;

string irrigationadvisory(string cropsuggested,string season,float rainfall,string climatewarning,string soiltype){
    if(climatewarning == "DROUGHT RISK"){
        return "Irrigation required frequently. Use drip irrigation or sprinkler irrigation.";
    }
    if(climatewarning == "EXCESSIVE RAINFALL"){
        return "Do not irrigate. Use surface drainage system to control excessive water or waterlogging.";
    }
    if(climatewarning == "HEAT STRESS"){
        return "Increase irrigation frequency. Do early morning or evening irrigation.";
    }
    if(climatewarning == "COLD STRESS"){
        return "Reduce irrigation frequency. Avoid overwatering.";
    }
    if(climatewarning == "NORMAL CLIMATE"){
        if(rainfall<10){
            return "Soil moisture is low. Irrigation required.";
        }
        if(rainfall>=10 && rainfall<=40){
            if(soiltype == "Sandy"){
                return "Moderate rainfall. Sandy soil requires frequent irrigation.";
            }
            if(soiltype == "Clay"){
                return "Moderate rainfall. Irrigate carefully to avoid waterlogging.";
            }
            if(soiltype == "Loamy"){
                return "Moderate rainfall. Normal irrigation as schedule advised.";
            }
            if(soiltype == "Black"){
                return "Moderate rainfall. Black soil retains moisture. Irrigate less frequently.";
            }
            if(soiltype == "Sandy-loam"){
                return "Moderate rainfall. Sandy-loam soil requires moderate irrigation.";
            }
 
        }
        if(rainfall>40){
            return "Sufficient rainfall. Delay irrigation.";
        }
    }
    if(cropsuggested.find("RICE")!= string::npos){
        return "Rice requires standing water. Maintain continuous irrigation.";
    }
    if(cropsuggested.find("MAIZE")!= string::npos){
        return "Maize need moderate irrigation at critical growth stages.";
    }
    if(cropsuggested.find("COTTON")!= string::npos){
        return "Cotton needs deep but less frequent irrigation.";
    }
    if(cropsuggested.find("SOYBEAN")!= string::npos){
        return "Soybean needs light but regular irrigation.";
    }
    if(cropsuggested.find("GROUNDNUT")!= string::npos){
        return "Groundnut requires moderate irrigation and avoid waterlogging.";
    }
    if(cropsuggested.find("MILLETS")!= string::npos){
        return "Millets require very less irrigation.Suitable for dry condition.";
    }

    if(cropsuggested.find("WHEAT")!= string::npos){
        return "Wheat need irrigation at tillering and flowering stages.";
    }
    if(cropsuggested.find("GRAM")!= string::npos){
        return "Gram(Chickpea) requires minimal irrigation, avoid excess water.";
    }
    if(cropsuggested.find("LENTIL")!= string::npos){
        return "Lentil need light irrigation. Excess water is harmful.";
    }
    if(cropsuggested.find("FIELDPEA")!= string::npos){
        return "Fieldpea requires moderate irrigation during flowering.";
    }
    if(cropsuggested.find("MUSTARD")!= string::npos){
        return "Mustard needs limited irrigation. Excess water reduces yield.";
    }
    if(cropsuggested.find("BARLEY")!= string::npos){
        return "Barley requires less irrigation as compared to wheat.";
    }
    if(cropsuggested.find("OATS")!= string::npos){
        return "Oats need moderate irrigation,especially during early growth.";
    }
    if(cropsuggested.find("CAULIFLOWER")!= string::npos){
        return "Cauliflower requires frequent light irrigation for healthy curd formation.";
    }
    if(cropsuggested.find("WATERMELON")!= string::npos){
        return "Watermelon requires regular irrigation but avoid water stagnation.";
    }
    if(cropsuggested.find("CUCUMBER")!= string::npos){
        return "Cucumber requires frequent irrigation,especially during fruiting.";
    }
    if(cropsuggested.find("MUSKMELON")!= string::npos){
        return "Muskmelon requires moderate irrigation,overwatering reduces sweetness.";
    }
    if(cropsuggested.find("GREENGRAM")!= string::npos){
        return "Greengram needs light irrigation. Avoid waterlogging .";
    }
    if(cropsuggested.find("BLACKGRAM")!= string::npos){
        return "Blackgram requires limited irrigation. Sensitive to excess water.";
    }

   return "No specific irrigation advice available for given conditions."


   

}
