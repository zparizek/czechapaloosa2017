const int humiditymeasureInPin = A1; //A1
const int waterPumpPin = 2; //D2 
const int ledPin = 4; //D4

int dryThreshold = 500; // value below which is the soil considered dry ()
int pumpHoseTime = 1; // time in ms for water to reach end of the hose (ms)
int singleWaterDose = 1; // time that equals single water dose
int checkInterval = 1; 

void setup() 
{
  //setup serial link speed - Serial.begin
  //set+up pin modes for water pump and LED- pinMode 
}

int readcurrentHumidity()
{
  //get me the current value from humidity pin - analogRead (10bits)
  // print it on serial Serial.print / Serial.println 
  // & return it
}

void loop()
{  
  if ( some condition ) //decide if you need to water your flower or if keep chillin
  { 
    
    // start pumping - digitalWrite
    // light a LED so we know you're pumping - digitalWrite
    // let us know it on serial if you like - you already know how to do that

    // keep up good job for some time - delay 

    // that much water will do the trick, just stop and let us know  
  }
  
  // chech again in 5 mins..ok rather 15 sec for now
}
