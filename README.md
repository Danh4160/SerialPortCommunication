# Serial Port Communication
This small project's intent was to discover and test a 2-way serial communication between an Arduino/Teensy and a computer via USB cable. I used the Python library [PySerial](https://pyserial.readthedocs.io/en/latest/) to access read and write functionality for the serial ports and the serial buffer. 

## End Goal
As an Avionics Project Lead for the McGill Rocket Team, the end goal is to incorporate a two way communication between our rocket's Flight Computer on an STM32 chip and the RocketPy rocket simulator. This is to perform what we call hardware-in-the loop testing for the Flight Computer.

## How Does It Work?
The console prompts the user to turn the Teensy built-in LED  'on' or 'off'. The message is sent through the serial port and stored in the serial buffer. The Teensy waits until there is something in the serial buffer to read. This composes a one-way communication, Computer to Teensy. By modifying the code, I made it a two-way communication. Below is a small demo. 


