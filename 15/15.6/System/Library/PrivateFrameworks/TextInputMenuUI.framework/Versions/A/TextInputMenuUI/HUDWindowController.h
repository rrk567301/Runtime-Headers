@class NSArray, InputSource, NSString, NSNumber, HUDController;

@interface HUDWindowController : NSWindowController <InputSourceOwnerProtocol, HUDDataSource, TSMMessageProtocol> {
    InputSource *fCurrentInputSource;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } fTargetApp;
    NSNumber *fTargetDocRef;
    char fIsSecureMode;
    char fHotKeysRegistered;
    char fSourceListContainsOnlyCurrentSource;
    HUDController *hudViewController;
}

@property (nonatomic) char ignoreNextFlagChangedEvent;
@property (nonatomic) char inlineSwicherVisible;
@property struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *targetApp;
@property struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } targetSwitcher;
@property (retain) NSNumber *targetTSMDocument;
@property InputSource *currentInputSource;
@property (retain) HUDController *hudViewController;
@property (retain) NSArray *inputs;
@property long long inputsCount;
@property unsigned short hotKeyChar;
@property unsigned short hotVirtualKey;
@property unsigned int hotModifiers;
@property (readonly) struct EventHotKeyID { unsigned int x0; unsigned int x1; } escapeHotKeyID;
@property (retain) NSArray *fDisabledInputSources;
@property (readonly, nonatomic) char hudActive;
@property (readonly, nonatomic) char hudVisible;
@property (readonly, nonatomic) char hudObscure;
@property (nonatomic) char eventCaptureOurs;
@property (readonly, nonatomic) char supportsMouse;
@property (readonly, nonatomic) char inlineSwitcherEnalbed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newHUDWindowController;

- (void).cxx_destruct;
- (id)bundle;
- (void)flagsChanged:(id)a0;
- (void)update;
- (char)isSecureMode;
- (void)commitSelection;
- (void)escape:(id)a0;
- (void)handleEnabledInputSourcesChange;
- (char)areHotKeysRegistered;
- (void)awakeFromNb;
- (void)changeInputToSelection;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)hideHUD:(char)a0 immediate:(char)a1;
- (void)hotKeyDown:(id)a0;
- (void)hotKeyUp:(id)a0;
- (void)moveSelection:(long long)a0;
- (void)registerWindowHotKeys;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (void)setCurrentInputSourceFromName:(id)a0;
- (void)setHotKeysRegistered:(char)a0;
- (void)setNotificationOverride;
- (void)setTargetAppToTIMTarget;
- (void)showHUD:(unsigned long long)a0;
- (void)sourceWasChangedTo:(id)a0;
- (void)toggleCharacterPaletteInputSource:(long long)a0;
- (void)unregisterWindowHotKeys;

@end
