int normalCheckInterval = 30000;

void setup() 
{
  Serial.begin(9600);   //serial monitor for debugging purposes
  pinMode(what pin, INPUT/output);  //sets the sensor pin as input
}

int whatevet functionty() 
{
  currentHumidity = analogRead (humidityProbePin); //provides power to the sensor
  Serial.print("Sensor value: "); //for debugging
  Serial.println(currentHumidity );
}

void loop() 
{
 
 digitalWrite (waterPumpPin, HIGH); 
currentHumidity = readcurrentHumidity();
  delay(30*1000);
}
