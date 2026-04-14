@interface AXSwitchControlServer : AXServer

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (BOOL)isScannerActive;
- (BOOL)setupAutomation;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)isScannerPaused;
- (void)_didConnectToClient;
- (BOOL)_triggerAutomationCommand:(long long)a0;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)currentFocusedElement;
- (BOOL)isAutoScanEnabled;
- (BOOL)isDwellEnabled;
- (BOOL)isManualScanEnabled;
- (BOOL)tearDownAutomation;

@end
