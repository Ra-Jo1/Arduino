# DHT11 Temperature and Humidity Monitoring (Arduino)

## 📌 Description

This project reads **temperature and humidity values** using a **DHT11 sensor** connected to an Arduino board and displays the data in the **Serial Monitor**.

***

## 🧰 Hardware Required

*   Arduino board (Uno, Nano, Mega, etc.) here it's arduino mega 2560
*   **DHT11** temperature and humidity sensor
*   Jumper wires
*   Computer with Arduino IDE installed

***

## 📚 Required Library

*   **DHT Sensor Library** (install via Arduino Library Manager)

***

## 🔌 Wiring

*   **VCC** → Arduino 5V
*   **GND** → Arduino GND
*   **DATA** → Arduino digital pin **2**

***

## ⚙️ How It Works

1.  Initializes serial communication at **9600 baud**
2.  Starts the DHT11 sensor
3.  Reads:
    *   Humidity (%)
    *   Temperature (°C)
4.  Prints the values to the **Serial Monitor**
5.  Updates every **500 ms**

***

## ▶️ How to Use

1.  Connect the DHT11 sensor to the Arduino
2.  Open the code in Arduino IDE
3.  Select USB port
4.  Upload the sketch to the Arduino board
5.  Open the **Serial Monitor**
6.  Set the baud rate to **9600**   
7.  View the temperature and humidity readings

***

## 📝 Notes

*   The **DHT11** sensor is suitable for basic projects and learning purposes
*   Avoid reading data too frequently for better stability
*   If values show `NaN`, check wiring and library installation

***

## 📄 Author

Ra-Jo

