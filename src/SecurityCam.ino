#include "esp_camera.h"
#include <WiFi.h>
#include "esp_timer.h"
#include "img_converters.h"
#include "Arduino.h"
#include "fb_gfx.h"
#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"
#include "esp_http_server.h"
#include <ESP32Servo.h>
#include <Preferences.h>
#include "time.h"

// استدعاء الملفات الجديدة
#include "config.h"
#include "index_html.h"

// تعريف الدبابيس (Pins) والمتغيرات من صفحة 1 [cite: 3-8]
#define SERVO_1 12
#define SERVO_2 13
#define LED_PIN 4
#define PIR_PIN 2

// باقي الكود البرمجي (Setup & Loop) من صفحة 14 إلى 21