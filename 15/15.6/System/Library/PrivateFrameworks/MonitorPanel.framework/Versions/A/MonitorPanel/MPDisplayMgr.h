@class NSArray, MPDisplay, NSMutableArray;

@interface MPDisplayMgr : NSObject {
    NSMutableArray *_displays;
    NSMutableArray *_independentOutputDisplays;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hwChangeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    char _hwChanged;
}

@property (readonly) NSArray *displays;
@property (readonly) NSArray *independentOutputDisplays;
@property (readonly) MPDisplay *mainDisplay;
@property (readonly) char hasBuiltinRetina;
@property (readonly) char hasSmallBuiltinRetina;
@property (readonly) char runningInSafeMode;
@property (readonly) char hasNightShiftCabableDisplays;
@property (readonly) char hasNightShiftCapableDisplays;

+ (id)sharedMgr;

- (void)dealloc;
- (id)init;
- (void)postNotification:(id)a0;
- (void)_removeNotifications;
- (id)displayWithID:(int)a0;
- (void)_mirrorAllDisplaysTo:(id)a0 useBestMode:(char)a1;
- (void)_nameDisplays:(id)a0;
- (void)_refreshDisplays;
- (void)_updateDisplaysList;
- (void)createMirrorSet:(id)a0;
- (char)isAnyDisplayMirrored;
- (void)lockAccess;
- (id)mirrorMasterForDisplay:(id)a0;
- (id)mirrorSetForDisplay:(id)a0;
- (void)notifyHardwareChange;
- (void)notifyReconfigure;
- (void)notifyWillReconfigure;
- (void)serviceReconfigure:(id)a0;
- (void)setMirrorMaster:(id)a0 useBestMode:(char)a1;
- (void)setMirrorMasterMode:(id)a0;
- (void)setMirrorState:(char)a0 useBestMode:(char)a1;
- (void)stopAllMirroring;
- (void)stopMirroringForDisplay:(id)a0;
- (char)tryLockAccess;
- (void)unlockAccess;

@end
