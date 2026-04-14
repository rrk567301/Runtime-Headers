@interface AXSwitchControlServer : AXServer

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (BOOL)isScannerPaused;
- (BOOL)setupAutomation;
- (BOOL)isScannerActive;
- (BOOL)triggerCommand:(long long)a0;
- (void)_didConnectToClient;
- (BOOL)_triggerAutomationCommand:(long long)a0;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)clearSpokenPhrases;
- (id)currentFocusedElement;
- (struct CGPoint { double x0; double x1; })headTrackingPoint;
- (BOOL)isAutoScanEnabled;
- (BOOL)isDwellEnabled;
- (BOOL)isManualScanEnabled;
- (id)lastSpokenPhrases;
- (BOOL)tearDownAutomation;

@end
