#include <assert.h>

const int bpmlimit[]={70,150};
const int spolimit =90;
const int respRatelimit[]={30,95};



bool bpmCheck(float bpm){
   if(bpm < bpmlimit[0]  || bpm > bpmlimit[1])  return false;
   return true;
}
bool spoCheck(float spo){
  if(spo2 < spolimit)  return false;
  return true;
}
bool resRatecheck(float respRate){
  if(respRate <respRatelimit[0]  || respRate > respRatelimit[1]) return false;
  return true;
}


  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
   return ( bpmCheck(bpm) && spoCheck(spo2) && resRatecheck(respRate))
}



int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
