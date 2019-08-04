/* Add your keys & rename this file to auth.h */

#ifndef _AUTH_DETAILS
#define _AUTH_DETAILS

// Wifi Settings
#define WIFI_HOSTNAME "GarDoor"
#define WIFI_SSID "ssid"
#define WIFI_PASSWORD "password"

// MQTT Settings
#define MQTT_SERVER "mqtt server ip"
#define MQTT_USER ""
#define MQTT_PASSWORD ""
#define MQTT_PORT 1883
#define MQTT_AVAIL_TOPIC WIFI_HOSTNAME "/availability"

// OTA Settings for pushing updated software
#define OTApassword "ota password" //the password you will need to enter to upload remotely via the ArduinoIDE
#define OTAport 8266

// Distance Parameters
#define ULTRASONIC_MAX_DISTANCE 400 // Maximum distance (in cm) to ping.
#define ULTRASONIC_DIST_MAX_CLOSE 120 // Maximum distance to indicate door is closed (in cm)
#define ULTRASONIC_DIST_MAX_CAR 120 // Maximum distance to indicate car is present (in cm)
#define ULTRASONIC_SETTLE_TIMEOUT 500 // ms to wait between pings (as all sensors get triggered at the same time)
#define RELAY_ACTIVE_TIMEOUT 500 // ms the time the relay will close to actuate the door opener
#define DOOR_TRIG_PIN 14 // D5 on ESP8266

// Door 1 Parameters
#define DOOR1_ALIAS "Door"
#define MQTT_DOOR1_ACTION_TOPIC WIFI_HOSTNAME "/1/action"
#define MQTT_DOOR1_STATUS_TOPIC WIFI_HOSTNAME "/1/status"
#define DOOR1_RELAY_PIN 12 // D6 on ESP8266
#define DOOR1_ECHO_PIN 4 // D2 on ESP8266
#define DOOR1_LIMIT_RELAY_CLOSE false

// Door 2 Parameters
#define DOOR2_ENABLED true
#define CAR_ALIAS "Car"
#define MQTT_CAR_STATUS_TOPIC WIFI_HOSTNAME "/2/status"
#define DOOR2_ECHO_PIN 5 // D1 on ESP8266


// DHT Parameters
#define DHT_ENABLED true
#define DHT_PIN 13 // D7 on ESP8266
#define DHT_TYPE DHT22 // or: DHT21 or DHT22
#define MQTT_TEMPERATURE_TOPIC WIFI_HOSTNAME "/temperature"
#define MQTT_HUMIDITY_TOPIC WIFI_HOSTNAME "/humidity"
#define DHT_PUBLISH_INTERVAL 300
#define DHT_TEMPERATURE_CELSIUS true
#define DHT_TEMPERATURE_ALIAS "Garage Temperature"
#define DHT_HUMIDITY_ALIAS "Garage Humidity"

#endif