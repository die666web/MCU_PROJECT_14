#ifndef APP_TYPES_H
#define APP_TYPES_H
#include <stdbool.h>
#include <stdint.h>

// Nơi này để định nghĩa các dữ liệu sẽ được gửi đi: 1 là gửi dữ liệu ina -> oled 2. gửi lệnh điều khiển -> oled
// 1 là cho đo ina219
// 2 là cho điều khiển quạt

typedef struct {
    float voltage_v; // điện áp
    float current_a;  // dòng điện
    float power_w; // công xuất
    uint32_t sample_tick; // Thời gian lấy mẫu của freertos
    bool valid;      // Dữ liệu có đạt hay ko 
} app_measurement_t;

typedef struct { 
    bool relay_on; // Trang thai bat tat cua quat
    bool ota_locked;  // OTA có đang khóa cho việc nạp từ xa hay ko 
} app_control_state_t;

#endif
