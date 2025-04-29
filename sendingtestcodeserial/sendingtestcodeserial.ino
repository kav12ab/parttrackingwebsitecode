#include <HardwareSerial.h>

// Serial Communication (Using UART1 on ESP32)
HardwareSerial mySerial(1);  // Use UART1 for serial communication

// Struct Definition (Same as Receiving ESP32)
struct SensorData1 {
    long sensorID;
    int boxCount;
};

// ** Sensor Data to Send **
SensorData1 sensorDataArray[] = {
    {63600001, 0},
    {63600002, 0},
    {63600003, 0},
    {63600004, 0},
    {63600005, 0}
};

// Number of Sensors
const int SENSOR_COUNT = sizeof(sensorDataArray) / sizeof(sensorDataArray[0]);

// Timing Variables
unsigned long lastSendTime = 0;
const int sendInterval = 2000; // 2 seconds (2000 milliseconds)

void setup() {
    Serial.begin(115200);   // USB Serial for debugging
    mySerial.begin(9600, SERIAL_8N1, 4, 5);  // TX=GPIO4, RX=GPIO5

    Serial.println("\n🚀 ESP32 Data Sender Ready!");
}

void loop() {
    // ** Check if 2 seconds have passed since last update **
    if (millis() - lastSendTime >= sendInterval) {
        lastSendTime = millis(); // Reset timer

        Serial.println("\n📡 Sending Sensor Data via Serial...");

        // ** Generate Random Box Counts for Each Sensor **
        for (int i = 0; i < SENSOR_COUNT; i++) {
            sensorDataArray[i].boxCount = random(1, 11); // Random value between 1 and 10

            Serial.print("➡️ Sending -> SensorID: ");
            Serial.print(sensorDataArray[i].sensorID);
            Serial.print(", BoxCount: ");
            Serial.println(sensorDataArray[i].boxCount);
        }

        // ** Send Data Over Serial to Receiving ESP32 **
        mySerial.write((uint8_t*)&sensorDataArray, sizeof(sensorDataArray));

        Serial.println("✅ Data Sent Successfully!");
    }

    // ** Non-blocking loop continues to run other tasks (if needed) **
}
