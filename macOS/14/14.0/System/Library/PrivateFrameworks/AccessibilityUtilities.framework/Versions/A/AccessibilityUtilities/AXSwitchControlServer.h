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
- (struct CGPoint { double x0; double x1; })headTrackingPoint;
- (BOOL)isAutoScanEnabled;
- (BOOL)isDwellEnabled;
- (BOOL)isManualScanEnabled;
- (BOOL)tearDownAutomation;

@end
