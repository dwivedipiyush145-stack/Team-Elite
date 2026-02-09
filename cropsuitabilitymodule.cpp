#include "cropsuitabilitymodule.h"
#include<iostream>
#include<string>

using namespace std;

string cropsuitability(const string& soiltype,const string& season,const string& farmerchoice,float temperature,float rainfall){
    string suggested = "";
    bool suitable = false;

    // ----------------------KHARIF-----------------------------------------
    if(season == "Kharif"){
        // Rice
        if((soiltype == "Clayey" || soiltype == "Loamy") && 
        temperature>=20 && temperature<=35 &&
        rainfall>=25 && rainfall<=50) {
            if(farmerchoice=="RICE"){
                suitable = true;
            }
            suggested = suggested + "RICE";
        }
        // Maize
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=18 && temperature<=27 && 
        rainfall>=12 && rainfall<=20) {
            if(farmerchoice == "MAIZE"){
                suitable = true;
            }
            suggested = suggested + "MAIZE";
        }
        // Cotton
        if(soiltype == "Black" &&
        temperature>=21 && temperature<=30 &&
        rainfall>=15 && rainfall<=25){
            if(farmerchoice=="COTTON"){
                suitable = true;
            }
            suggested = suggested + "COTTON";
        } 
        // Soybean
        if((soiltype == "Black" || soiltype == "Loamy") &&
        temperature>=20 && temperature<=30 &&
        rainfall>=12 && rainfall<=18){
            if(farmerchoice=="Soybean"){
                suitable = true;
            }
            suggested = suggested + "Soybean";
        }
        // Millets
        if((soiltype == "Sandy" || soiltype == "Loamy") &&
        temperature>=20 && temperature<=30 &&
        rainfall>=7 && rainfall<=12){
            if(farmerchoice=="MILLETS"){
                suitable = true;
            }
            suggested = suggested + "MILLETS";
        }
        // Groundnut
        if((soiltype == "Sandy-loam" || soiltype == "Loamy") &&
        temperature>=20 && temperature<=30 &&
        rainfall>=10 && rainfall<=15){
            if(farmerchoice=="GROUNDNUT"){
                suitable = true;
            }
            suggested = suggested + "GROUNDNUT";
        }
        if(soiltype == "Alluvial" &&
        temperature>=22 && temperature<=35 &&
        rainfall>=15 && rainfall<=30){
            if(farmerchoice=="BRINJAL"){
                suitable = true;
            }
            suggested = suggested + "BRINJAL";
        }
        
        if(soiltype == "Alluvial" &&
        temperature>=2 && temperature<=35 &&
        rainfall>=15 && rainfall<=25){
            if(farmerchoice=="COWPEA"){
                suitable = true;
            }
            suggested = suggested + "COWPEA";
        }
        if(soiltype == "Alluvial" &&
        temperature>=24 && temperature<=35 &&
        rainfall>=30 && rainfall<=50){
            if(farmerchoice=="JUTE"){
                suitable = true;
            }
            suggested = suggested + "JUTE";
        }
        if(soiltype == "Alluvial" &&
        temperature>=22 && temperature<=35 &&
        rainfall>=15 && rainfall<=30){
            if(farmerchoice=="OKRA(Lady Finger)"){
                suitable = true;
            }
            suggested = suggested + "OKRA(Lady Finger)";
        }
        if(soiltype == "Alluvial" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=20 && rainfall<=40){
            if(farmerchoice=="SPONGE GOURD"){
                suitable = true;
            }
            suggested = suggested + "SPONGE GOURD";
        }
        if(soiltype == "Silt" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=20 && rainfall<=40){
            if(farmerchoice=="BOTTLE GOURD"){
                suitable = true;
            }
            suggested = suggested + "BOTTLE GOURD";
        }
        if(soiltype == "Silt" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=30 && rainfall<=50){
            if(farmerchoice=="WATER CHESTNUT"){
                suitable = true;
            }
            suggested = suggested + "WATER CHESTNUT";
        }
        if(soiltype == "Silt" &&
        temperature>=20 && temperature<=35 &&
        rainfall>=15 && rainfall<=30){
            if(farmerchoice=="AMARANTHUS"){
                suitable = true;
            }
            suggested = suggested + "AMARANTHUS";
        }
        if(soiltype == "Silt" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=20 && rainfall<=40){
            if(farmerchoice=="KANG KONG"){
                suitable = true;
            }
            suggested = suggested + "KANG KONG";
        }

    }
        // -------------------------RABI----------------------------------------
        else if(season == "Rabi"){
        // Wheat
        if((soiltype == "Loamy" || soiltype == "Clayey-loam") && 
        temperature>=10 && temperature<=25 &&
        rainfall>=10 && rainfall<=15){
            if(farmerchoice=="WHEAT"){
                suitable = true;
            }
            suggested = suggested + "WHEAT";
        }
        // Gram(Chickpea)
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=15 && temperature<=25 &&
        rainfall>=5 && rainfall<=10){
            if(farmerchoice=="GRAM(Chickpea)"){
                suitable = true;
            }
            suggested = suggested + "GRAM(Chickpea)";
        }
        // Lentil(Masoor) - Pulse
        if(soiltype == "Loamy" &&
        temperature>=15 && temperature<=25 &&
        rainfall>=5 && rainfall<=10){
            if(farmerchoice=="LENTIL(Masoor)"){
                suitable = true;
            }
            suggested = suggested + "LENTIL(Masoor)";
        }
        // Fieldpea - Pulse
        if(soiltype == "Loamy" &&
        temperature>=10 && temperature<=20 &&
        rainfall>=8 && rainfall<=12){
            if(farmerchoice=="FIELDPEA"){
                suitable = true;
            }
            suggested = suggested + "FIELDPEA";
        }
        // Mustard
        if(soiltype == "Loamy" && 
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=8){
            if(farmerchoice=="MUSTARD"){
                suitable = true;
            }
            suggested = suggested + "MUSTARD";
        }
        // Barley
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=10 && temperature<=20 &&
        rainfall>=8 && rainfall<=12){
            if(farmerchoice=="BARLEY"){
                suitable = true;
            }
            suggested = suggested + "BARLEY";
        }
        // Oats
        if(soiltype == "Loamy" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=10 && rainfall<=15){
            if(farmerchoice=="OATS"){
                suitable = true;
            }
            suggested = suggested + "OATS";
        }
        // Cauliflower
        if(soiltype == "Loamy" &&
        temperature>=15 && temperature<=25 &&
        rainfall>=10 && rainfall<=15){
            if(farmerchoice=="CAULIFLOWER"){
                suitable = true;
            }
            suggested = suggested + "CAULIFLOWER";
        }
        // Potato
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=15 && temperature<=25 &&
        rainfall>=10 && rainfall<=15){
            if(farmerchoice=="POTATO"){
                suitable = true;
            }
            suggested = suggested + "POTATO";
        }
        if(soiltype == "Alluvial" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="SPINACH"){
                suitable = true;
            }
            suggested = suggested + "SPINACH";
        }
        if(soiltype == "Alluvial" &&
        temperature>=10 && temperature<=20 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="RADISH"){
                suitable = true;
            }
            suggested = suggested + "RADISH";
        }
        if(soiltype == "Alluvial" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="FENUGREEK"){
                suitable = true;
            }
            suggested = suggested + "FENUGREEK";
        }
        if(soiltype == "Alluvial" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="CORIANDER"){
                suitable = true;
            }
            suggested = suggested + "CORIANDER";
        }
         if(soiltype == "Silt" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="CABBAGE"){
                suitable = true;
            }
            suggested = suggested + "CABBAGE";
        }
         if(soiltype == "Silt" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="PARSLEY"){
                suitable = true;
            }
            suggested = suggested + "PARSLEY";
        }
         if(soiltype == "Silt" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="KNOL-KHOL"){
                suitable = true;
            }
            suggested = suggested + "KNOL-KHOL";
        }
         if(soiltype == "Silt" &&
        temperature>=10 && temperature<=25 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="SWISS CHARD"){
                suitable = true;
            }
            suggested = suggested + "SWISS CHARD";
        }
    }
        // ------------------------ZAID----------------------------------
        else if(season == "Zaid"){
        // Watermelon
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=25 && temperature<=35 &&
        rainfall>=5 && rainfall<=10){
            if(farmerchoice=="WATERMELON"){
                suitable = true;
            }
            suggested = suggested + "WATERMELON";
        }
        // Cucumber
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=20 && temperature<=30 &&
        rainfall>=8 && rainfall<=12){
            if(farmerchoice=="CUCUMBER"){
                suitable = true;
            }
            suggested = suggested + "CUCUMBER";
        }
        // Muskmelon
        if(soiltype == "Sandy-loam" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=5 && rainfall<=10){
            if(farmerchoice=="MUSKMELON"){
                suitable = true;
            }
            suggested = suggested + "MUSKMELON";
        }
        // Greengram
        if(soiltype == "Sandy-loam" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=5 && rainfall<=8){
            if(farmerchoice=="GREENGRAM"){
                suitable = true;
            }
            suggested = suggested + "GREENGRAM";
        }
        // Blackgram
        if(soiltype == "Loamy" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=5 && rainfall<=8){
            if(farmerchoice=="BLACKGRAM"){
                suitable = true;
            }
            suggested = suggested + "BLACKGRAM";
        }
        // Tomato
        if((soiltype == "Loamy" || soiltype == "Sandy-loam") &&
        temperature>=15 && temperature<=30 &&
        rainfall>=8 && rainfall<=15){
            if(farmerchoice=="TOMATO"){
                suitable = true;
            }
            suggested = suggested + "TOMATO";
        }
        if(soiltype == "Alluvial" &&
        temperature>=20 && temperature<=35 &&
        rainfall>=10 && rainfall<=20){
            if(farmerchoice=="SWEETCORN"){
                suitable = true;
            }
            suggested = suggested + "SWEETCORN";
        }
        if(soiltype == "Alluvial" &&
        temperature>=15 && temperature<=30 &&
        rainfall>=10 && rainfall<=20){
            if(farmerchoice=="FRENCH BEAN"){
                suitable = true;
            }
            suggested = suggested + "FRENCH BEAN";
        }
        if(soiltype == "Alluvial" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=15 && rainfall<=25){
            if(farmerchoice=="BITTER GOURD"){
                suitable = true;
            }
            suggested = suggested + "BITTER GOURD";
        }
        if(soiltype == "Alluvial" &&
        temperature>=20 && temperature<=32 &&
        rainfall>=10 && rainfall<=20){
            if(farmerchoice=="SUMMER TOMATO"){
                suitable = true;
            }
            suggested = suggested + "SUMMER TOMATO";
        }
        if(soiltype == "Alluvial" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=15 && rainfall<=30){
            if(farmerchoice=="RIDGE GOURD"){
                suitable = true;
            }
            suggested = suggested + "RIDGE GOURD";
        }
         if(soiltype == "Silt" &&
        temperature>=15 && temperature<=25 &&
        rainfall>=5 && rainfall<=10){
            if(farmerchoice=="SUMMER LETTUCE"){
                suitable = true;
            }
            suggested = suggested + "SUMMER LETTUCE";
        }
         if(soiltype == "Silt" &&
        temperature>=20 && temperature<=35 &&
        rainfall>=5 && rainfall<=15){
            if(farmerchoice=="PURSLANE"){
                suitable = true;
            }
            suggested = suggested + "PURSLANE";
        }
         if(soiltype == "Silt" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=10 && rainfall<=20){
            if(farmerchoice=="ROUND GOURD"){
                suitable = true;
            }
            suggested = suggested + "ROUND GOURD";
        }
         if(soiltype == "Silt" &&
        temperature>=25 && temperature<=35 &&
        rainfall>=15 && rainfall<=25){
            if(farmerchoice=="  POINTED GOURD"){
                suitable = true;
            }
            suggested = suggested + "POINTED GOURD";
        }
    }
        else {
            return "Not recognized, Please enter Kharif, Rabi or Zaid.";
        }
        if(suitable==true){
            return farmerchoice + " is suitable for your farm\n" + "More suitable crops : " + suggested;
        }
        else {
            return farmerchoice + " is not suitable for your farm\n" + "Suggested Cops : " + suggested;
        }
        
        
        
   
}