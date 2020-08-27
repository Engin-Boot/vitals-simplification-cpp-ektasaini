#include <assert.h>

const int bpmlimit[]={70,150};
const int spolimit =90;
const int respRatelimit[]={30,95};

bool isVitalInRange(float value , float lower, float upper ){
   return (value>=lower && value <=upper);
}
bool vitalsAreOk(float bpm, float spo, float respRate) {
   return (isVitalsInRange (bpm , bpmlimit[0],bpmlimit[1] ) && isVitalsInRange(spo,spolimit,INT_MAX) && isVitalsInRange(respRate ,respRatelimit[0],respRatelimit[1]) );
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
   
  
}
