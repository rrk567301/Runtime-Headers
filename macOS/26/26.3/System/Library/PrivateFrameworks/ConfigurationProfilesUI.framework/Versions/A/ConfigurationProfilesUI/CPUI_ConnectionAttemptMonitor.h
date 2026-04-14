@class CWWiFiClient, NSSet;

@interface CPUI_ConnectionAttemptMonitor : NSObject <CWEventDelegate>

@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (retain, nonatomic) CWWiFiClient *wifiClient;
@property (nonatomic) BOOL ssidChanged;
@property (copy, nonatomic) NSSet *initialUpAndRunningInterfaces;

- (BOOL)stopMonitoring;
- (void)startMonitoring;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUpWiFiClient;
- (id)currentUpAndRunningInterfaces;
- (void)tearDownWiFiClient;

@end
