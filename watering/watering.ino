int normalCheckInterval = 30000;
int debugCheckInterval = 1000; 
int humidityProbePin = 1;
int waterPumpPin = 0;  //assignes a pin for the soil sensor
int dryThreshold = 500; // value where the soil is considered dry
int pumpHoseTime = 2000; // time in ms for water to reach end of the hose
int singleWaterDose = 1000; // time in ms for water to reach end of the hose
int currentHumidity = 0;
boolean debuggingMode = true;

void setup() 
{
  Serial.begin(9600);   //serial monitor for debugging purposes
  pinMode(humidityProbePin, INPUT);  //sets the sensor pin as input
  pinMode(waterPumpPin, OUTPUT);
}

int readcurrentHumidity() 
{
  currentHumidity = analogRead (humidityProbePin); //provides power to the sensor
  Serial.print("Sensor value: "); //for debugging
  Serial.println(currentHumidity );
}

void loop() 
{
  currentHumidity = readcurrentHumidity();
  if (currentHumidity < dryThreshold) {
    //if the average soil value is dry
    if (!debuggingMode) {
      digitalWrite (waterPumpPin, HIGH); 
      } 
    delay (pumpHoseTime + singleWaterDose);
    digitalWrite  (waterPumpPin, LOW);  
  }
  if (!debuggingMode) { digitalWrite (waterPumpPin, HIGH); } 
  delay(30*1000);
}
