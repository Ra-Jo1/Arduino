# There is 2 codes 
# First Arduino code in C++ for the electronic
# Second Python code is to grab the data 

# ----------------HERE THE SECOND CODE IN PYTHON :-----------------

import csv
import os
import serial
from datetime import datetime

com = 'COM7'
baud = 9600

ser = serial.Serial(com,baud)

csv_file = "Light_Humidity_Temperature_data.csv"

file_exists = os.path.isfile(csv_file)

with open(csv_file, mode = 'a',newline = '',encoding = 'utf-8') as file:
  writer = csv.writer(file)

  if not file_exists:
    writer.writerow(['date','light','humidity %','temperature °c'])

  while True:
    line = ser.readline().decode('utf-8').strip()

    if  line:
      now = datetime.now().strftime('%Y-%m-%d %H:%M:%S')
      writer.writerow([now, line])
      print(now, line)
