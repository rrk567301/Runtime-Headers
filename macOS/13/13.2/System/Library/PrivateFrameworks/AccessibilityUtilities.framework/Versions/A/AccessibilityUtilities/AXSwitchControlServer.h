@interface AXSwitchControlServer : AXServer

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (BOOL)_triggerAutomationCommand:(long long)a0;
- (BOOL)setupAutomation;
- (BOOL)tearDownAutomation;
- (BOOL)triggerCommand:(long long)a0;
- (id)currentFocusedElement;
- (BOOL)isScannerActive;
- (BOOL)isScannerPaused;
- (BOOL)isAutoScanEnabled;
- (BOOL)isManualScanEnabled;
- (BOOL)isDwellEnabled;

@end
