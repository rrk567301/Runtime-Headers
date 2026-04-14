@class CWWiFiClient, NSSet;

@interface CPUI_ConnectionAttemptMonitor : NSObject <CWEventDelegate>

@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (retain, nonatomic) CWWiFiClient *wifiClient;
@property (nonatomic) BOOL ssidChanged;
@property (copy, nonatomic) NSSet *initialUpAndRunningInterfaces;

- (void)startMonitoring;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)dealloc;
- (BOOL)stopMonitoring;
- (void).cxx_destruct;
- (void)setUpWiFiClient;
- (id)currentUpAndRunningInterfaces;
- (void)tearDownWiFiClient;

@end
