# arduino-weather-station
# Arduino Uno Mini Weather Station 🌦️

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Arduino-00979D.svg)
![Simulator](https://img.shields.io/badge/Simulator-Wokwi-8A2BE2.svg)

A virtual weather station built using the Wokwi online simulator. This project reads temperature and humidity data from a DHT22 sensor and displays it on a 16x2 I2C LCD screen. It's a foundational project for learning about sensor integration, data display, and basic embedded systems programming within the Arduino ecosystem.

***

### ➤ [View Live Simulation on Wokwi](YOUR_WOKWI_PROJECT_LINK_HERE)

### Project Demo

![Project Screenshot](demo-screenshot.png)

## Features

-   **Real-time Data:** Fetches and displays current temperature in Celsius (°C).
-   **Humidity Reading:** Displays relative humidity as a percentage (%).
-   **I2C Communication:** Utilizes the I2C protocol for efficient communication with the LCD, requiring only two data wires.
-   **User-Friendly Display:** Information is clearly formatted and presented on the 16x2 LCD screen.
-   **Error Handling:** Displays an error message on the LCD if the sensor fails to provide a reading.

## Technology & Components

### Hardware (Virtual)

-   **Arduino Uno:** The microcontroller used as the brain of the project.
-   **DHT22 Sensor:** For measuring temperature and humidity.
-   **16x2 I2C LCD:** For displaying the collected data.

### Software & Libraries

-   **Language:** C++ (with the Arduino framework)
-   **Platform:** [Wokwi Online Simulator](https://wokwi.com/)
-   **Libraries:**
    -   `DHT sensor library`: To interface with the DHT22 sensor.
    -   `LiquidCrystal_I2C`: To control the I2C LCD display.
    -   `Wire.h`: For I2C communication.

## Code Overview

The `sketch.ino` file contains the complete logic for the project:

-   **`setup()`**: This function runs once at the beginning. It initializes the serial monitor for debugging, starts the DHT sensor, and sets up the LCD screen by turning on the backlight and printing a startup message.
-   **`loop()`**: This function runs repeatedly after `setup()` is complete. In each cycle, it:
    1.  Reads the temperature and humidity from the DHT22 sensor.
    2.  Checks if the readings are valid.
    3.  Clears the LCD screen to prepare for new data.
    4.  Formats and prints the temperature and humidity values onto the LCD.
    5.  Waits for a few seconds before repeating the process.

## Future Improvements

-   **Data Logging:** Store sensor readings over time and display minimum/maximum values.
-   **Alerts:** Add an LED that blinks or changes color if the temperature exceeds a certain threshold.
-   **Additional Sensors:** Integrate a photoresistor to measure ambient light level or a barometer for atmospheric pressure.

---
*Project created on July 19, 2025 
