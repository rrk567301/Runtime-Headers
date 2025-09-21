@interface AXSwitchControlServer : AXServer

+ (id)server;

- (BOOL)_connectIfNecessary;
- (id)_serviceName;
- (BOOL)isScannerActive;
- (BOOL)setupAutomation;
- (BOOL)isScannerPaused;
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
- (struct CGPoint { double x0; double x1; })pointerPoint;
- (BOOL)setPointerPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)tearDownAutomation;

@end
