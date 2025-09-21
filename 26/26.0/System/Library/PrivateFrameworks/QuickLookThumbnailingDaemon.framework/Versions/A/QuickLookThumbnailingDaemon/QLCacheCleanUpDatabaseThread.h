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

- (void)pause;
- (void)dealloc;
- (void)startCleanUp;
- (void)stop;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)_threadMain;
- (void)addHitWithThumbnailData:(id)a0;
- (void)_writeAndCleanUp;
- (void)cleanUpForReset;
- (id)initWithCacheThread:(id)a0;
- (void).cxx_destruct;
- (BOOL)_updateHitCount;

@end
