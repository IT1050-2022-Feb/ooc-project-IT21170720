#include "Report.h"
#include <iostream>
#include <cstring>

Report::Report(){
  reportID = 0;
  description = "";
}

Report::Report(int repID, string repDesc){
  reportID = repID;
  description = repDesc;
}

void Report::displayPaymentDetail(){
  
}

void Report::displayBookingVehicleDetail(){

}

Report::~Report(){
  
}