@class NSArray, InputSource, NSString, NSNumber, HUDController;

@interface HUDWindowController : NSWindowController <InputSourceOwnerProtocol, HUDDataSource, TSMMessageProtocol> {
    InputSource *fCurrentInputSource;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } fTargetApp;
    NSNumber *fTargetDocRef;
    BOOL fIsSecureMode;
    BOOL fHotKeysRegistered;
    BOOL fSourceListContainsOnlyCurrentSource;
    HUDController *hudViewController;
}

@property struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *targetApp;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newHUDWindowController;

- (void)dealloc;
- (void)update;
- (id)bundle;
- (BOOL)isSecureMode;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)sourceWasChangedTo:(id)a0;
- (void)setNotificationOverride;
- (void)handleEnabledInputSourcesChange;
- (void)setHotKeysRegistered:(BOOL)a0;
- (void)escape:(id)a0;
- (void)unregisterWindowHotKeys;
- (void)registerWindowHotKeys;
- (void)awakeFromNb;
- (void)setTargetAppToTIMTarget;
- (void)setCurrentInputSourceFromName:(id)a0;
- (void)toggleCharacterPaletteInputSource;
- (BOOL)areHotKeysRegistered;

@end
