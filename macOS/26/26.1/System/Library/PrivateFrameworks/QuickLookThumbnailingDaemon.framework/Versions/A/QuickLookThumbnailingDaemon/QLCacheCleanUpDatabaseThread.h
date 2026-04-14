@class NSMutableDictionary, NSConditionLock, NSThread, _QLCacheThread;

@interface QLCacheCleanUpDatabaseThread : NSObject {
    NSConditionLock *_threadLock;
    struct __CFRunLoop { } *_threadRunLoop;
    NSThread *_thread;
}

@property BOOL diskCacheCleanupDone;
@property (retain) _QLCacheThread *cacheThread;
@property (retain) NSMutableDictionary *thumbnailsHit;
@property (readonly, nonatomic) unsigned long long hitToSaveCount;
@property (readonly, nonatomic) int currentMode;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;

- (BOOL)_updateHitCount;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)cleanUpForReset;
- (void)pause;
- (id)initWithCacheThread:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)startCleanUp;
- (void).cxx_destruct;
- (void)addHitWithThumbnailData:(id)a0;
- (void)_writeAndCleanUp;
- (void)_threadMain;

@end
