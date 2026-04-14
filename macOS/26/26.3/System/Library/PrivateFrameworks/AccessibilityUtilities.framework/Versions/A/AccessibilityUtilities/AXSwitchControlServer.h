@interface AXSwitchControlServer : AXServer

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (BOOL)isScannerActive;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)isScannerPaused;
- (BOOL)setupAutomation;
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
