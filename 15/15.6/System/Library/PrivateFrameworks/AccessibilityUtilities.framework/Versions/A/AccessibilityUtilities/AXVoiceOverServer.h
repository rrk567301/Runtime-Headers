@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) char isScreenCurtainEnabled;

+ (id)server;

- (char)_connectIfNecessary;
- (id)_serviceName;
- (char)triggerEventCommand:(id)a0;
- (char)triggerCommand:(long long)a0;
- (char)triggerGesture:(id)a0;
- (void)clearLastSoundsPlayed:(id /* block */)a0;
- (void)clearLastSpokenPhrases:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCursorFrame;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (char)isBluetoothBrailleDisplayConnected;
- (char)isBrailleInputUIShowing;
- (char)isBrailleScreenInputInScreenAwayMode;
- (char)isHandwritingInputUIShowing;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenContents;
- (id)lastSpokenPhrases;
- (void)performAutomationTestingCommand:(id)a0 userInfo:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (id)recognizedGestureForTutorial;
- (char)triggerCommand:(long long)a0 withArgument:(id)a1;

@end
