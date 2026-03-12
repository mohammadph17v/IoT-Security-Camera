1. Connection & Initial Setup
Powering the Module: Connect the ESP32-CAM to a stable 5V power source. Using the integrated Buck Converter is highly recommended to eliminate image vibration and ensure stable performance.


Network Access: Once powered, the camera will connect to the configured WiFi network.


Accessing the Dashboard: Open your web browser and enter the IP address displayed in the Serial Monitor (e.g., http://192.168.1.XX).

2. Camera Control (Pan-Tilt)
Manual Control: Use the on-screen joystick to rotate the camera. The dual-servo system allows for precise movement in both horizontal (Pan) and vertical (Tilt) axes.
Centering: Click the "Center Servos" button to instantly return the camera to its default 90° position.

3. Security Features
Motion Detection: Click "Enable Motion Detection" to activate the PIR sensor. When motion is detected:
The system will automatically capture a high-resolution image.
The onboard LED will flash for visual alert.
A notification will appear on the web dashboard.
Manual Capture: You can manually take a snapshot at any time by clicking the "Capture Image" button.

4. Power Management
Sleep Mode: Enable "Sleep Mode" to allow the camera to enter a low-power state after 30 seconds of inactivity.
Auto-Wake: The system will automatically wake up if the PIR sensor detects motion, ensuring no critical events are missed.

## 🛠 Installation & Dependencies

To compile this project, you need to install the following libraries in your Arduino IDE:

1. **ESP32 Board Package**: Go to `Tools > Board > Boards Manager` and search for "esp32" by Espressif Systems.
2. **ESP32Servo Library**: Go to `Sketch > Include Library > Manage Libraries` and search for "ESP32Servo".
3. **NTPClient**: For time synchronization (if not using the built-in time.h).

### Configuration
Before uploading, make sure to:
* Edit `src/config.h` with your WiFi credentials.
* Set the Board to **"AI Thinker ESP32-CAM"**.
* Enable **PSRAM** in the Tools menu for better streaming stability.