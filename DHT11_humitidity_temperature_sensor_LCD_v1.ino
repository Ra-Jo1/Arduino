//print humidity and temperature with DHT11 arduino on lcd screen

#include <DHT.h>
#define Type DHT11
#include <LiquidCrystal.h>

int sensePin = 2;
DHT11 HT(sensePin,Type);
float humidity;
float tempC;

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12 ;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int setTime = 500;
int dt = 1000;

void setup() {
  Serial.begin(9600);
  HT.begin();
  lcd.begin(16,2);
  delay(setTime);
}

void loop() {
  humidity = HT.readHumidity();  
  tempC = HT.readTemperature();
  
  lcd.setCursor(0,0);
  lcd.print("humidity: ");
  lcd.print(humidity);
  
  lcd.setCursor(1,0);
  lcd.print("temperature: ");
  lcd.print(tempC);

  delay(dt);
  lcd.clear();

}
