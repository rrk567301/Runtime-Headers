@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate> {
    SCROBrailleDisplayManager *_brailleDisplayManager;
    char _wantsInputCallbacks;
    char _wantsDidDisplayCallbacks;
    struct { char didDisplay; char keypress; char userEventOccured; char replaceTextRange; char keyWillMem; char keymem; char panLeft; char panRight; char showPreviousAnnouncement; char showNextAnnouncement; char configChanged; char playDisplayConnectionSound; char playBorderHitSound; char playCommandNotSupportedSound; char bluetoothDisplayLoadFailed; char tableLoadFailed; char displayModeChanged; char copyStringToClipboard; char planarCanvasDidChange; char startEditing; char insertUntranslatedText; char deleteUntranslatedText; char speechRequest; char planarPan; } _callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleTableFailedToLoad:(id)a0;
- (void)configurationDidChange;
- (void)handleBrailleDeletedUntranslatedText:(id)a0 speakLiterally:(char)a1;
- (void)handleBrailleDidDisplay:(id)a0;
- (void)handleBrailleDidPanLeft:(id)a0 elementToken:(id)a1 appToken:(id)a2 lineOffset:(id)a3;
- (void)handleBrailleDidPanRight:(id)a0 elementToken:(id)a1 appToken:(id)a2 lineOffset:(id)a3;
- (void)handleBrailleDidShowNextAnnouncement:(id)a0;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)a0;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleInsertedUntranslatedText:(id)a0 speakLiterally:(char)a1;
- (void)handleBrailleKeyMemorize:(id)a0;
- (void)handleBrailleKeyWillMemorize:(id)a0;
- (void)handleBrailleKeypress:(id)a0;
- (void)handleBrailleReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 cursor:(unsigned long long)a2;
- (void)handleBrailleSpeechRequest:(id)a0 language:(id)a1;
- (void)handleCopyStringToClipboard:(id)a0;
- (void)handleDisplayModeChanged:(id)a0;
- (void)handleFailedToLoadBluetoothDevice:(id)a0;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 trusted:(char)a2;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 withObject:(id)a2 trusted:(char)a3;
- (int)handlePerformActionForKey:(int)a0 trusted:(char)a1;
- (void)handlePlanarPanFailedIsLeft:(char)a0;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (int)handleRegisterCallbackForKey:(int)a0 trusted:(char)a1;
- (int)handleSetValue:(id)a0 forKey:(int)a1 trusted:(char)a2;
- (void)handleStartEditing;
- (void)handleTacticalGraphicsCanvasDidChange:(id)a0;
- (void)handleUserEventOccured;
- (id)initWithBrailleDisplayManager:(id)a0;

@end
