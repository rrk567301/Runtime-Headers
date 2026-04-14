@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (BOOL)onWifi;
+ (void)stopMockingSystem;
+ (id)SSID;
+ (void)setSSID:(id)a0;
+ (void)setAirplaneMode:(BOOL)a0;
+ (void)startMockingSystem;
+ (BOOL)airplaneMode;

@end
