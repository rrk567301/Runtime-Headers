@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (void)startMockingSystem;
+ (void)setAirplaneMode:(BOOL)a0;
+ (id)SSID;
+ (BOOL)airplaneMode;
+ (void)stopMockingSystem;
+ (void)setSSID:(id)a0;
+ (BOOL)onWifi;

@end
