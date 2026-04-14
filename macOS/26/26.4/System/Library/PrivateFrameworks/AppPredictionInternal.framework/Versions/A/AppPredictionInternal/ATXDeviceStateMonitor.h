@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (void)stopMockingSystem;
+ (BOOL)onWifi;
+ (id)SSID;
+ (void)setAirplaneMode:(BOOL)a0;
+ (void)setSSID:(id)a0;
+ (void)startMockingSystem;
+ (BOOL)airplaneMode;

@end
