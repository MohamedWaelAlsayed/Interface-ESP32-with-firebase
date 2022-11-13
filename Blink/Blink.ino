#define sensorPin 4
float Celsius, Fahrenheit, Kelvin;
int sensorValue;
void setup() {
Serial.begin(9600);
Serial.println("Initialising.....");
}
void loop() {
GetTemp();
Serial.print("Celsius: ");
Serial.println(Celsius);
Serial.print("Fahrenheit: ");
Serial.println(Fahrenheit);
Serial.println();
delay(2000);
}
void GetTemp()
{
sensorValue = analogRead(sensorPin); // read the

Kelvin = (((float(sensorValue) / 4095) * 5) * 100); // convert to
Celsius = Kelvin - 273.15; // convert to
Fahrenheit = (Celsius * 1.8) +32; // convert to
}
