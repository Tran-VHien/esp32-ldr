#include <Arduino.h>

// 1. ĐỊNH NGHĨA CHÂN ADC
// Chúng ta dùng GPIO 34 như sơ đồ mạch
const int LDR_PIN = 34;

void setup() {
  // 2. KHỞI ĐỘNG CỔNG UART (SERIAL)
  // Khởi động ở tốc độ 115200, khớp với file platformio.ini
  Serial.begin(115200);
}

void loop() {
  // 3. ĐỌC GIÁ TRỊ TỪ LDR
  // ESP32 có ADC 12-bit, nên giá trị trả về là từ 0 đến 4095
  int sensorValue = analogRead(LDR_PIN);

  // 4. IN GIÁ TRỊ RA UART CHO TELEPLOT
  // Đây là định dạng chuẩn của Teleplot:
  // ">" là ký tự bắt đầu
  // "brightness" là tên biến (bạn có thể đặt tên khác)
  // ":" là dấu phân cách
  // "%d" là giá trị số nguyên (sensorValue)
  // "\n" là ký tự kết thúc (NGẮT DÒNG)
  Serial.printf(">brightness:%d\n", sensorValue);

  // 5. ĐỢI MỘT CHÚT
  // Đợi 200 mili-giây trước khi đọc lại
  // Giúp đồ thị mượt hơn và không làm "lụt" cổng Serial
  delay(200);
}