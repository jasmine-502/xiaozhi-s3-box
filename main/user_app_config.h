#pragma once

#include "esp_gmf_oal_sys.h"
#include "esp_gmf_oal_mem.h"
#include "esp_gmf_oal_thread.h"

//是否是释放版本 1：是 0：否
// #define SYSTEM_SOFT_RELEASE_VERSION   1
#define SYSTEM_XIAOZHI_AI_SET_DEF   1



//默认蓝牙名
#define CONFIG_WIFI_SSID "wedo"



#define app_debug 1


#define CONFIG_USER_OTA_UPDATE_ENBLE 0
//音频测试宏定义
#define CONFIG_AUDIO_VALUE_TEST_ENABLE 0

//ota 接口
#if  SYSTEM_XIAOZHI_AI_SET_DEF
#define CONFIG_OTA_VERSION_URL "https://api.tenclass.net/xiaozhi/ota/"   //xiaozhi

#elif 0
#error "宏未定义"
#endif


//输出音量限制
#define OUTPUT_VOLUME_MAX 90
// #define OUTPUT_VOLUME_DEFAULT_VALUE 99

//电量检测是否打开
#define SYSTEM_BATTERY_CHECK_ENABLE 1
#define SYSTEM_ASSETS_VERSON_CHECK_ENABLE 0 //动态资源检查是否打开
//cpu负载检测是否打开
#define SYSTEM_CPU_MESSAGE_RUN_CHECK_ENABLE 1
#define SYSTEM_GPS_CHECK_ENABLE 1 //GPS 检测是否打开
#define SYSTEM_GPS_UPLOAD_CHECK_ENABLE 1 //上传接口是否打开

