# Arduino Mega 2560 – DHT11 Monitoring with LCD and Python Data Logging

## 📌 Description

This project uses **two programs** working together:

1.  **Arduino code**
    *   Runs on an **Arduino Mega 2560**
    *   Reads **temperature and humidity** from a **DHT11 sensor**
    *   Displays the values on a **16x2 LCD**
    *   Sends the data through the **Serial port**

2.  **Python code**
    *   Reads the data from the Arduino via **USB (Serial)**
    *   Displays the data in the console
    *   Saves the data to a **CSV file** with a timestamp

***

## 🧰 Hardware Required

*   **Arduino Mega 2560**
*   **DHT11** temperature and humidity sensor
*   **LCD 1602 (16x2)** display
*   Jumper wires
*   Potentiometer (optional, for LCD contrast)
*   USB cable (Arduino ↔ computer)
*   Computer with Arduino IDE and Python installed

***

## 💻 Software Required

### Arduino

*   Arduino IDE
*   **DHT Sensor Library**
*   **LiquidCrystal Library** (included by default)

### Python

*   Python 3.x
*   Required Python libraries:
    *   `pyserial`
    *   `csv` (built‑in)
    *   `datetime` (built‑in)

Install pyserial if needed:

```bash
pip install pyserial
```

***

## 🔌 Wiring

### DHT11 Sensor

*   **VCC** → Arduino 5V
*   **GND** → Arduino GND
*   **DATA** → Digital pin **2**

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

### Arduino Code

1.  Initializes the DHT11 sensor
2.  Initializes the LCD (16x2)
3.  Reads:
    *   Humidity (%)
    *   Temperature (°C)
4.  Displays values on the LCD
5.  Sends humidity and temperature via **Serial (9600 baud)**

### Python Code

1.  Opens the selected **USB serial port**
2.  Reads incoming data from the Arduino
3.  Adds a timestamp
4.  Saves the data into a **CSV file**
5.  Prints values to the terminal

***

## ▶️ How to Use

### Step 1 – Arduino

1.  Connect all components to the **Arduino Mega 2560**
2.  Open the Arduino code in **Arduino IDE**
3.  Go to **Tools → Board → Arduino Mega or Mega 2560**
4.  Go to **Tools → Port** and **select the correct USB port**
5.  Upload the code to the board
6.  Open the **Serial Monitor** (9600 baud) to verify data output

***

### Step 2 – Python

1.  Connect the Arduino to the computer via USB
2.  Open the Python script
3.  Update the serial port if needed:
    ```python
    com = 'COM7'
    ```
    (Example: `COM3` on Windows, `/dev/ttyUSB0` on Linux, `/dev/tty.usbmodem` on macOS)
4.  Run the Python script
5.  Data is displayed in the terminal and saved to:
        Light_Humidity_Temperature_data.csv

***

## 📊 Output Example

*   LCD screen shows:
    *   Humidity (%)
    *   Temperature (°C)
*   CSV file contains:
    *   Date & time
    *   Serial data from Arduino

***

## 📝 Notes

*   The Arduino Mega 2560 provides stable serial communication for long‑term logging
*   The CSV file is created automatically if it does not exist
*   Baud rate must match between Arduino and Python (`9600`)
*   If no data appears, check:
    *   USB port selection
    *   Baud rate
    *   Sensor wiring

***

## 📄 Author

Ra-Jo


