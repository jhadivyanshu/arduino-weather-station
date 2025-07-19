// FINAL CODE: Mini Weather Station
#include <Wire.h> // Required for I2C communication
#include <LiquidCrystal_I2C.h> // Library for the LCD
#include "DHT.h" // Library for the sensor

// --- SENSOR SETUP ---
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// --- LCD SETUP ---
// Initialize the LCD object. The address (0x27) and dimensions (16x2)
// are standard for Wokwi's virtual component.
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Start the sensor
  dht.begin();

  // Initialize the LCD
  lcd.init();
  // Turn on the LCD backlight
  lcd.backlight();

  // Print a startup message to the LCD
  lcd.setCursor(0, 0); // Set cursor to column 0, line 0
  lcd.print("Weather Station");
  lcd.setCursor(0, 1); // Set cursor to column 0, line 1
  lcd.print("Starting...");
  delay(2000); // Wait 2 seconds
}

void loop() {
  // Read humidity and temperature from the sensor
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Check if the reading was successful
  if (isnan(h) || isnan(t)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
    delay(2000);
    return;
  }

  // Clear the LCD screen for fresh data
  lcd.clear();

  // --- Display Temperature ---
  lcd.setCursor(0, 0);    // Go to the first line
  lcd.print("Temp: ");
  lcd.print(t);           // Print the temperature value
  lcd.print(" C");

  // --- Display Humidity ---
  lcd.setCursor(0, 1);    // Go to the second line
  lcd.print("Humid: ");
  lcd.print(h);           // Print the humidity value
  lcd.print(" %");

  // Wait for 5 seconds before taking the next reading
  delay(5000);
}