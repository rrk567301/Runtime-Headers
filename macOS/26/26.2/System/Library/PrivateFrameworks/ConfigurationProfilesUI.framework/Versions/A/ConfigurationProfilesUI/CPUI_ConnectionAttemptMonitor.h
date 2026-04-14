@class CWWiFiClient, NSSet;

@interface CPUI_ConnectionAttemptMonitor : NSObject <CWEventDelegate>

@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (retain, nonatomic) CWWiFiClient *wifiClient;
@property (nonatomic) BOOL ssidChanged;
@property (copy, nonatomic) NSSet *initialUpAndRunningInterfaces;

- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (BOOL)stopMonitoring;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUpWiFiClient;
- (id)currentUpAndRunningInterfaces;
- (void)tearDownWiFiClient;

@end
