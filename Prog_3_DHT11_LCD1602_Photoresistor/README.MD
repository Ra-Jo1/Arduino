# DHT11 Temperature, Humidity, and Light Monitoring with LCD 1602 (Arduino)

## 📌 Description

This project uses an **Arduino** to read:

*   **Temperature** and **humidity** from a **DHT11 sensor**
*   **Light intensity** from a **photoresistor**

The values are displayed sequentially on a **16x2 LCD (LCD 1602)**.

***

## 🧰 Hardware Required

*   Arduino board (Uno, Nano, Mega, etc.) here mega 2560
*   **DHT11** temperature and humidity sensor
*   **Photoresistor (LDR)**
*   **LCD 1602 (16x2)** display
*   Jumper wires
*   Resistor (for the photoresistor voltage divider) here R = 5k
*   Potentiometer (optional, for LCD contrast)
*   Computer with Arduino IDE installed

***

## 📚 Required Libraries

*   **DHT Sensor Library**
*   **LiquidCrystal Library** (included by default in Arduino IDE)

***

## 🔌 Wiring

### DHT11 Sensor

*   **VCC** → Arduino 5V
*   **GND** → Arduino GND
*   **DATA** → Digital pin **2**

### Photoresistor (LDR)

*   One side → **5V**
*   Other side → **A0** (with a resistor to GND)

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

1.  Initializes serial communication and the LCD
2.  Reads:
    *   Humidity (%)
    *   Temperature (°C)
    *   Light level (analog value from photoresistor)
3.  Displays:
    *   Humidity and temperature on the LCD
    *   Then light intensity on the LCD
4.  Each screen is shown for **3 seconds**
5.  The LCD clears before showing new data

***

## ▶️ How to Use

1.  Connect all components according to the wiring section
2.  Open the code in Arduino IDE
3.  Selecte USB port
4.  Upload the sketch to the Arduino
5.  Power the Arduino
6.  Observe the values shown on the LCD screen

***

## 📝 Notes

*   The photoresistor returns an **analog value** (0–1023), not a direct lux value
*   The LCD is cleared between displays for better readability
*   Adjust the LCD with the potentiometer contrast if text is not visible
*   Avoid very frequent readings of the DHT11 sensor

***

## 📄 Author

Ra-Jo
