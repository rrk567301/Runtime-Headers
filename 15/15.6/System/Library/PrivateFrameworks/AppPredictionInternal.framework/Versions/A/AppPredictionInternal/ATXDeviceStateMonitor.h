@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (id)SSID;
+ (void)setSSID:(id)a0;
+ (char)airplaneMode;
+ (void)setAirplaneMode:(char)a0;
+ (char)onWifi;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;

@end
