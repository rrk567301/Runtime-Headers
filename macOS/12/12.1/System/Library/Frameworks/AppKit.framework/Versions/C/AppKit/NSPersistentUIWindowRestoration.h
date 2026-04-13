@class NSString, NSDictionary, NSData, NSMutableDictionary, NSPersistentUIKeyedUnarchiver, NSWindow;

@interface NSPersistentUIWindowRestoration : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_persistentIDToRecord;
    NSPersistentUIKeyedUnarchiver *_windowCoder;
    BOOL _talagentWindowTransferredOwnership;
    BOOL _restoredWindowPinned;
    BOOL _finishedRestoring;
}

@property (readonly) unsigned int windowID;
@property (copy) NSDictionary *talagentWindowDictionary;
@property (readonly) NSWindow *restoredWindow;
@property (retain) NSData *lastMinuteWindowData;
@property (readonly) BOOL requiresSecureCoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bulkDisposeTalagentWindowsIfUnused:(id)a0 withFade:(BOOL)a1;

- (void)dealloc;
- (BOOL)isGlobal;
- (id)recordForPersistentID:(id)a0;
- (id)windowCoder;
- (unsigned int)talagentWindow;
- (void)unpinRestoredWindowFromTalagentWindow;
- (unsigned int)acquireTalagentWindow;
- (id)initWithWindowID:(unsigned int)a0 requireSecureCoding:(BOOL)a1;
- (void)setRecord:(id)a0 forPersistentID:(id)a1;
- (void)finishRestoringWithWindow:(id)a0;
- (BOOL)isFinishedRestoring;
- (void)closeWindowCoder;
- (void)disposeTalagentWindowIfUnused;
- (void)pinRestoredWindowToTalagentWindow;

@end
