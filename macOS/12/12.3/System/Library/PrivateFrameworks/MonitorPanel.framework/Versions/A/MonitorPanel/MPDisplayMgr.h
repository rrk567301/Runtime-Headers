@class NSArray, MPDisplay, NSMutableArray;

@interface MPDisplayMgr : NSObject {
    NSMutableArray *_displays;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hwChangeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    BOOL _hwChanged;
}

@property (readonly) NSArray *displays;
@property (readonly) MPDisplay *mainDisplay;
@property (readonly) BOOL hasBuiltinRetina;
@property (readonly) BOOL hasSmallBuiltinRetina;
@property (readonly) BOOL runningInSafeMode;
@property (readonly) BOOL hasNightShiftCabableDisplays;
@property (readonly) BOOL hasNightShiftCapableDisplays;

+ (id)sharedMgr;

- (void)dealloc;
- (id)init;
- (void)postNotification:(id)a0;
- (void)_removeNotifications;
- (id)displayWithID:(int)a0;
- (void)_updateDisplaysList;
- (void)serviceReconfigure:(id)a0;
- (void)_nameDisplays:(id)a0;
- (void)notifyReconfigure;
- (void)_refreshDisplays;
- (id)mirrorSetForDisplay:(id)a0;
- (void)_mirrorAllDisplaysTo:(id)a0 useBestMode:(BOOL)a1;
- (void)notifyHardwareChange;
- (void)notifyWillReconfigure;
- (void)lockAccess;
- (void)unlockAccess;
- (BOOL)tryLockAccess;
- (void)createMirrorSet:(id)a0;
- (BOOL)isAnyDisplayMirrored;
- (id)mirrorMasterForDisplay:(id)a0;
- (void)setMirrorMaster:(id)a0 useBestMode:(BOOL)a1;
- (void)setMirrorMasterMode:(id)a0;
- (void)setMirrorState:(BOOL)a0 useBestMode:(BOOL)a1;
- (void)stopAllMirroring;
- (void)stopMirroringForDisplay:(id)a0;

@end
