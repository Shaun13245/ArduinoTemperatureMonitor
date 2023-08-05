//40563189 S.Britz
//Defien all ibraries
#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>
#define DS18B20 8

//define variables
OneWire ourWire(DS18B20);
DallasTemperature sensor(&ourWire);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

//add LCD
byte degree_symbol[8] =
{
0b00111,
0b00101,
0b00111,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000
};

//This will only run once
void setup()
{
	Serial.begin(9600);
	delay(1000);
	sensor.begin();
	lcd.begin(16, 2);
	lcd.createChar(1, degree_symbol);
	lcd.clear();
	lcd.setCursor(0, 0);
	lcd.print("Temp: ");
}

//This will run forever
void loop()
{
	sensor.requestTemperatures();
	Serial.print(sensor.getTempCByIndex(0));
	Serial.println("°C");
	lcd.setCursor(7, 0);
	lcd.print(sensor.getTempCByIndex(0));
	lcd.write(1);
	lcd.print("C");
	delay(1000);
}