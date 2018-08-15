import serial #Serial imported for Serial communication
import time #Required to use delay functions
import pyautogui #required for pressing function to work

ArduinoSerial = serial.Serial('com3',9600) #Create Serial port object called arduinoSerialData
time.sleep(2) #wait for 2 seconds for the communication to get established

while 1:
    incoming = str (ArduinoSerial.readline()) #read the serial data and print it as line
    print(incoming)

    if 'Left' in incoming:
        pyautogui.press('left')  

    if 'Right' in incoming:
        pyautogui.press('right') 

    if 'down' in incoming:
        pyautogui.press('down')
        
    if 'up' in incoming:
        pyautogui.press('up')

    incoming = "";
