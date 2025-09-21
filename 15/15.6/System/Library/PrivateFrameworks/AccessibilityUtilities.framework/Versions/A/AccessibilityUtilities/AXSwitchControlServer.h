@interface AXSwitchControlServer : AXServer

+ (id)server;

- (char)_connectIfNecessary;
- (id)_serviceName;
- (char)isScannerActive;
- (char)triggerCommand:(long long)a0;
- (char)isScannerPaused;
- (char)setupAutomation;
- (void)_didConnectToClient;
- (char)_triggerAutomationCommand:(long long)a0;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)clearSpokenPhrases;
- (id)currentFocusedElement;
- (struct CGPoint { double x0; double x1; })headTrackingPoint;
- (char)isAutoScanEnabled;
- (char)isDwellEnabled;
- (char)isManualScanEnabled;
- (id)lastSpokenPhrases;
- (char)tearDownAutomation;

@end
