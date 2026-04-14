@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (BOOL)onWifi;
+ (id)SSID;
+ (void)stopMockingSystem;
+ (BOOL)airplaneMode;
+ (void)setAirplaneMode:(BOOL)a0;
+ (void)startMockingSystem;
+ (void)setSSID:(id)a0;

@end
