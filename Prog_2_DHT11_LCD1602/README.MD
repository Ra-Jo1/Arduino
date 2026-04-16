# DHT11 Temperature and Humidity Display on LCD 1602 (Arduino)

## 📌 Description

This project reads **temperature and humidity data** from a **DHT11 sensor** and displays the values on a **16x2 LCD screen (LCD 1602)** using an Arduino mega 2560.

***

## 🧰 Hardware Required

*   Arduino board (Uno, Nano, Mega, etc.) here a Arduino mega 2560
*   **DHT11** temperature and humidity sensor
*   **LCD 1602 (16x2)** display
*   Jumper wires
*   Potentiometer (for LCD contrast, optional but recommended)
*   Computer with Arduino IDE installed

***

## 📚 Required Libraries

*   **DHT Sensor Library**
*   **LiquidCrystal Library** (included by default in Arduino IDE)

Install the DHT library via the Arduino Library Manager.

***

## 🔌 Wiring

### DHT11 Sensor

*   **VCC** → Arduino 5V
*   **GND** → Arduino GND
*   **DATA** → Arduino digital pin **2**

### LCD 1602

*   **RS** → Pin **7**
*   **EN** → Pin **8**
*   **D4** → Pin **9**
*   **D5** → Pin **10**
*   **D6** → Pin **11**
*   **D7** → Pin **12**
*   **VCC** → 5V
*   **GND** → GND

***

## ⚙️ How It Works

1.  Initializes serial communication at **9600 baud**
2.  Starts the DHT11 sensor
3.  Initializes the LCD in **16x2 mode**
4.  Reads:
    *   Humidity (%)
    *   Temperature (°C)
5.  Displays:
    *   Humidity on the first LCD line
    *   Temperature on the second LCD line
6.  Updates the display every **1 second**

***

## ▶️ How to Use

1.  Connect the DHT11 sensor and LCD as described
2.  Open the code in Arduino IDE
3.  Selecte USB port
4.  Upload the sketch to the Arduino board
5.  Power the Arduino
6.  View temperature and humidity values directly on the LCD screen

***

## 📝 Notes

*   The LCD is cleared after each update to refresh the display
*   Adjust the LCD contrast with the Potentiometer if characters are not visible
*   The DHT11 sensor is suitable for basic environmental monitoring

***

## 📄 Author

Ra-Jo
