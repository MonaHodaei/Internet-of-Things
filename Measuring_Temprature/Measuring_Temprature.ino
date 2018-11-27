
//Initialize/define the output pin of the chosen temperature sensor
int outputpin= 0;
//This sets the ground pin,LOW and the input voltage pin,HIGH.
void setup()
{
Serial.begin(9600);
}
 
//Main loop
void loop()
{
int rawvoltage= analogRead(outputpin);
float millivolts= (rawvoltage/1024.0) * 3300;
float celsius= millivolts/40;
Serial.print(celsius);
Serial.print("Degrees Celsius, ");
 
Serial.print((celsius * 9)/5 + 32);
Serial.println("Degrees Fahrenheit");
delay(500);
 
}

