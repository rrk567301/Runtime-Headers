@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) BOOL isScreenCurtainEnabled;

+ (id)server;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (BOOL)triggerCommand:(long long)a0;
- (id)currentFocusedElement;
- (id)lastSpokenPhrases;
- (void)clearLastSpokenPhrases:(id /* block */)a0;
- (id)lastSpokenContents;
- (id)lastSoundsPlayed;
- (void)clearLastSoundsPlayed:(id /* block */)a0;
- (id)currentRotorName;
- (id)lastScreenChange;
- (BOOL)triggerGesture:(id)a0;
- (BOOL)triggerCommand:(long long)a0 withArgument:(id)a1;
- (BOOL)triggerEventCommand:(id)a0;
- (BOOL)isBrailleInputUIShowing;
- (BOOL)isHandwritingInputUIShowing;
- (BOOL)isBluetoothBrailleDisplayConnected;
- (void)performAutomationTestingCommand:(id)a0 userInfo:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;

@end
