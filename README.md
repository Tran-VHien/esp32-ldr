# Dự án ESP32 Đọc Quang trở (LDR) với Teleplot

Dự án này đọc giá trị ánh sáng tương đối từ cảm biến quang trở (LDR) thông qua bộ chuyển đổi ADC của ESP32, sau đó gửi dữ liệu qua UART để hiển thị đồ thị thời gian thực bằng Teleplot trong VS Code.

Tiện ích **Teleplot** trong VS Code được sử dụng để bắt dữ liệu này và vẽ đồ thị cường độ sáng theo thời gian thực.

## Sơ đồ Mạch điện
Dự án sử dụng một mạch chia áp cơ bản:
* `3.3V` -> `LDR` -> `GPIO 34`
* `GPIO 34` -> `Điện trở 10kΩ` -> `GND`

## Đồ thị Hoạt động


![Đồ thị Teleplot LDR](dothi.png)
