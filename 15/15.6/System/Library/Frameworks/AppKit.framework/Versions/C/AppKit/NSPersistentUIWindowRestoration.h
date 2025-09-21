@class NSPersistentUIKeyedUnarchiver, NSString, NSDictionary, NSData, NSWindowRestorationOptions, NSMutableDictionary, NSWindow;

@interface NSPersistentUIWindowRestoration : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_persistentIDToRecord;
    NSPersistentUIKeyedUnarchiver *_windowCoder;
    char _talagentWindowTransferredOwnership;
    char _restoredWindowPinned;
    char _finishedRestoring;
}

@property (readonly) unsigned int windowID;
@property (copy) NSDictionary *talagentWindowDictionary;
@property (readonly) NSWindow *restoredWindow;
@property (retain) NSData *lastMinuteWindowData;
@property (readonly, copy) NSWindowRestorationOptions *options;
@property (readonly) char requiresSecureCoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bulkDisposeTalagentWindowsIfUnused:(id)a0 withFade:(char)a1;

- (void).cxx_destruct;
- (unsigned int)acquireTalagentWindow;
- (void)closeWindowCoder;
- (void)disposeTalagentWindowIfUnused;
- (void)finishRestoringWithWindow:(id)a0;
- (id)initWithWindowID:(unsigned int)a0 requireSecureCoding:(char)a1 options:(id)a2;
- (char)isFinishedRestoring;
- (char)isGlobal;
- (void)pinRestoredWindowToTalagentWindow;
- (id)recordForPersistentID:(id)a0;
- (void)setRecord:(id)a0 forPersistentID:(id)a1;
- (unsigned int)talagentWindow;
- (void)unpinRestoredWindowFromTalagentWindow;
- (id)windowCoder;

@end
