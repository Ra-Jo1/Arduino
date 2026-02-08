// There is 2 codes 
// First Arduino code in C++ for the electronic
// Second Python to grab the data 

// ----------------HERE THE FIRST CODE :-----------------

#include <LiquidCrystal.h>
#include <DHT.h>
#define Type DHT11

int sensePin = 2;
DHT HT(sensePin,Type);
float humidity;
float tempC;
int t = 1000;
int setTime = 500;

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
  lcd.begin(16,2);
 //start the object

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Humidity : ");
lcd.print(humidity);
lcd.print(" %");

lcd.setCursor(0,1);
lcd.print("Temp : ");
lcd.print(tempC);

delay(t);
lcd.clear();

humidity = HT.readHumidity();
tempC = HT.readTemperature();

Serial.print("humidity : ");
Serial.print(humidity);
Serial.print(" ");
Serial.print("temperature :");
Serial.println(tempC);
delay(t);

}
