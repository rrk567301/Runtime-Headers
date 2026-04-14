@class IKVRamManager, NSString, IKRamManager, IKCacheData;

@interface IKCacheManager : NSObject <IKVRamManagerDelegateProtocol, IKRamManagerDelegateProtocol> {
    IKVRamManager *_vramManager;
    IKRamManager *_ramManager;
    IKCacheData *_cache;
    BOOL _openGLEnabled;
    unsigned int _cacheTimeoutReferenceSessionID;
    int _cacheTimeoutNotificationPosted;
    id _cacheTimeoutLauncher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (id)database;
- (unsigned int)sessionID;
- (void)purge;
- (id)iconCache;
- (void)freeCache;
- (id)ramManager;
- (id)vramManager;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1;
- (void)unshareIconIfNeeded:(id)a0;
- (void)unbindEntryAtIndex:(unsigned long long)a0 size:(int)a1;
- (BOOL)addThumbnail:(id)a0 atUID:(id)a1;
- (void)flushGLOperations;
- (id)bindEntryInRam:(unsigned long long)a0 size:(int)a1;
- (id)initWithVRAMSupport:(BOOL)a0 sharedContext:(id)a1 pixelFormat:(id)a2;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (void)bumpSession;
- (void)makeReadyForSharedContext:(id)a0 pixelFormat:(id)a1;
- (void)invalidateEntryAtUID:(id)a0;
- (BOOL)alreadyHasIconInCache:(struct OpaqueIconRef { } *)a0 atSize:(int)a1 validForUID:(id)a2;
- (void)_stopCacheTimeOutTimerIfNeeded;
- (void)_startCacheTimeOutTimer;
- (void)unbindEntriesAtIndex:(unsigned long long)a0;
- (void)freeVRamCache;
- (void)freeRamCache;
- (unsigned long long)unshareEntriesWithUIDIfNeeded:(id)a0;
- (void)resetInternalCacheVersionForUID:(id)a0;
- (void)compressEntryIfNeeded:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (void)vramManagerDidUnbindEntry:(unsigned long long)a0 withSize:(int)a1;
- (void)ramManagerDidUnbindEntry:(unsigned long long)a0 withSize:(int)a1;
- (id)imageAtIndex:(unsigned long long)a0 size:(int)a1;
- (void)freeCacheForUID:(id)a0;
- (unsigned long long)countOfBoundSizesAtIndex:(unsigned long long)a0;
- (int)bestThumbnailSizeWithIndex:(id)a0 renderingSize:(struct CGSize { double x0; double x1; })a1 glRendering:(BOOL)a2 lowFrameRateMode:(BOOL)a3;
- (void)IKCleanTimedOutCache;

@end
