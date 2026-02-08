//print humidity and temperature with DHT11 arduino on lcd 1602 screen + photoresistor
#include <DHT.h>
#include <LiquidCrystal.h>
#define Type DHT11

int sensePin = 2;
DHT HT(sensePin,Type);
float humidity;
float tempC;

int rs = 7;
int e = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);

int prpin = A0; //pr : photoresistor
int prval;

int dt = 3000;
int setTime = 500;

void setup() {
  Serial.begin(9600);
  HT.begin();
  lcd.begin(16,2);
  pinMode(prpin,INPUT);
  delay(setTime);
}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();

  prval = analogRead(prpin);

  lcd.setCursor(0,0);
  lcd.print("humidity: ");
  lcd.print(humidity);

  lcd.setCursor(0,1);
  lcd.print("tempC: ");
  lcd.print(tempC);
  delay(dt);
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("light: ");
  lcd.print(prval);
  delay(dt);
  lcd.clear();  
  
}
