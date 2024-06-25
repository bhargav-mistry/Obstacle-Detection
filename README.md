# 🚀 Obstacle or Motion Detection IoT Project

## Overview
Welcome to the Obstacle or Motion Detection IoT project! This project utilizes a PIR Sensor, Buzzer, and NodeMCU ESP8266 to detect motion and obstacles in a specified area, triggering alerts through sound notifications.


## Components Used
- 🛠️ **NodeMCU ESP8266**: WiFi-enabled microcontroller for IoT applications.
- 🕵️ **PIR Sensor**: Detects motion by sensing infrared radiation.
- 🔊 **Buzzer**: Produces sound alerts upon motion detection.
- 🔌 **Breadboard & Jumper Wires**: Prototyping tools for easy circuit assembly.

## Project Description
### PIR Sensor
- The Passive Infrared (PIR) sensor detects changes in infrared radiation emitted by moving objects within its field of view.

### Buzzer
- The buzzer emits audible alerts when motion is detected, signaling potential intrusions or movements.

### NodeMCU ESP8266
- Acts as the central controller to interface with the PIR sensor and buzzer, facilitating data processing and IoT connectivity.

## Setup and Installation
### Hardware Setup
1. Connect PIR Sensor VCC/GND to NodeMCU ESP8266.
2. Connect PIR Sensor OUT to NodeMCU ESP8266 digital input pin.
3. Connect Buzzer to NodeMCU ESP8266 digital output pin and GND.

### Software Setup
1. Install Arduino IDE and ESP8266 board support.
2. Upload the provided sketch to NodeMCU ESP8266.
3. Customize WiFi credentials and sensor parameters as needed.

## Usage
- Deploy the setup in desired locations for motion detection.
- Monitor alerts through the buzzer when motion or obstacles are detected.
- Extend functionality by integrating with IoT platforms for remote monitoring.

## Contributing
Contributions are welcome! Please fork the repository and submit pull requests.

## License
This project is licensed under the [MIT License](https://github.com/bhargav-mistry/Obstacle-Detection/blob/main/LICENSE).

## Contact
- Reach out to project maintainers or contributors.
