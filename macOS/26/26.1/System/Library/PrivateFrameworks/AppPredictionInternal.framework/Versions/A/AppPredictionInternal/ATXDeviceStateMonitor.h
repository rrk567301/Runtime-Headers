@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (void)setSSID:(id)a0;
+ (void)setAirplaneMode:(BOOL)a0;
+ (void)startMockingSystem;
+ (id)SSID;
+ (BOOL)onWifi;
+ (void)stopMockingSystem;
+ (BOOL)airplaneMode;

@end
