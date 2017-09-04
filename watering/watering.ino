
const int humiditymeasureInPin = A1; //A1
const int waterPumpPin = 2; //D2 
const int ledPin = 4; //D4

int dryThreshold = 520; // value below which is the soil considered dry
int pumpHoseTime = 2100; // time in ms for water to reach end of the hose
int singleWaterDose = 5; // single water dose
int checkInterval = 2000; 

void setup()
{
  Serial.begin(9600);   //serial monitor for debugging purposes
  pinMode(waterPumpPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

int readcurrentHumidity()
{
  int curentHumidityhelper;
  curentHumidityhelper = analogRead (humiditymeasureInPin); 
  Serial.print("Sensor value: "); //for debugging
  Serial.print(curentHumidityhelper );  
  Serial.print(" Set threshold: "); //for debugging
  Serial.println(dryThreshold ); 
  return (curentHumidityhelper);
}

void loop()
{
  if (readcurrentHumidity() < dryThreshold) 
  { 
    digitalWrite (waterPumpPin, HIGH); //launch pump  
    digitalWrite (ledPin, LOW); //light LED  
    Serial.print ("Starting pump..."); //for debugging
 
    delay (pumpHoseTime + singleWaterDose); // now we're pumping baby

    Serial.println (" ...stopped pump"); //for debugging
    digitalWrite  (waterPumpPin, LOW);  // stop pump
    digitalWrite  (ledPin, HIGH); //stop led  
  }
  delay(checkInterval);
}
