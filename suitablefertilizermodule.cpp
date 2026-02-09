#include "suitablefertilizermodule.h"
#include<iostream>
#include<string>

using namespace std;

string fertilizeradvice(string crop,string soiltype,string season,string climatewarning){
    string advice = "";

    //-------------------------------Crop Based fertilizer----------------------------------------
    if(crop=="RICE"){
        advice = "Requires Urea or Ammonium sulphate, rich in nitrogen.";
    }
    else if(crop=="WHEAT"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like DAP, Urea.";
    }
    else if(crop=="MAIZE"){
        advice = "Nitrogen rich fertilizer like NPK(20:20:0), Urea.";
    }
    else if(crop=="MILLETS"){
        advice = "Requires moderate amount of nitrogen rich fertilizers.";
    }
    else if(crop=="BARLEY" || crop=="OATS"){
        advice = "Requires moderate amount of nitrogen ,fertilizers like DAP, Urea.";
    }
    else if(crop=="GRAM(Chickpea)"){
        advice = "Requires phosphorous rich fertilizers like SSP, DAP, avoid using nitrogen.";
    }
    else if(crop=="LENTIL(Masoor)"){
        advice = "Requires phosphorous rich fertilizers, like SSP,DAP.";
    }
    else if(crop=="FIELDPEA" || crop=="GREENGRAM" || crop=="BLACKGRAM"){
        advice = "Requires phosphorous,fertilizers like SSP.";
    }
    else if(crop=="SOYBEAN"){
        advice = "Requires phosphorous and potassium rich fertilizers, like SSP,DAP.";
    }
    else if(crop=="GROUNDNUT"){
        advice = "Requires calcium and phosphorous rich fertilizers, like SSP,Gypsum.";
    }
    else if(crop=="MUSTARD"){
        advice = "Requires Nitrogen and phosphorous rich fertilizers, like Urea,DAP.";
    }
    else if(crop=="COTTON"){
        advice = "Requires Nitrogen and potassium rich fertilizers, like NPK,MOP(Potash).";
    }
    else if(crop=="POTATO"){
        advice = "Requires high potassium rich fertilizers, like NPK,MOP."; 
    }
    else if(crop=="CAULIFLOWER"){
        advice = "Requires Nitrogen and phosphorous rich fetilizers, like Urea,DAP.";
    }
    else if(crop=="TOMATO"){
        advice = "Requires balanced amount of NPK.";
    }
    else if(crop=="WATERMELON" || crop=="MUSKMELON"){
        advice = "Requires Potassium rich fertilizers, like NPK,MOP.";
    }
    else if(crop=="CUCUMBER"){
        advice = "Requires balanced amount of NPK.";
    }
    else if(crop=="BRINJAL"){
        advice = "Requires nitrogen and potassium rich fertilizers like Urea, NPK.";
    }
    else if(crop=="COWPEA"){
        advice = "Requires phosphorous rich fertilizers like SSP, DAP; avoid excess nitrogen.";
    }
    else if(crop=="JUTE"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="OKRA"){
        advice = "Requires nitrogen and potassium rich fertilizers like Urea, NPK.";
    }
    else if(crop=="SPONGE GOURD"){
        advice = "Requires nitrogen and potassium rich fertilizers like Urea, NPK.";
    }
    else if(crop=="SPINACH"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="RADISH"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="FENUGREEK"){
        advice = "Requires phosphorous rich fertilizers like SSP, DAP.";
    }
    else if(crop=="CORIANDER"){
        advice = "Requires phosphorous rich fertilizers like SSP, DAP.";
    }
    else if(crop=="SWEETCORN"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like NPK, Urea.";
    }
    else if(crop=="FRENCH BEAN"){
        advice = "Requires phosphorous rich fertilizers like SSP, DAP.";
    }
    else if(crop=="BITTER GOURD"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="SUMMER TOMATO"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="RIDGE GOURD"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="BOTTLE GOURD"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="WATER CHESTNUT"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="AMARANTHUS"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }   
    else if(crop=="KANG KONG"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="CABBAGE"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="PARSLEY"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="KNOL-KHOL"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="SWISS CHARD"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="SUMMER LETTUCE"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="PURSLANE"){
        advice = "Requires nitrogen and phosphorous rich fertilizers like Urea, DAP.";
    }
    else if(crop=="ROUND GOURD"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    else if(crop=="POINTED GOURD"){
        advice = "Requires nitrogen, phosphorous and potassium rich fertilizers like NPK, Urea.";
    }
    //-----------------------------------Soiltype based fertilizer-------------------------------------------

    if(soiltype=)