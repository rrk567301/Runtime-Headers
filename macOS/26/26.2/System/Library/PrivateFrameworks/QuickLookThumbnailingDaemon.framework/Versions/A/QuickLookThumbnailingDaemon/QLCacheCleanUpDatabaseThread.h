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
- (BOOL)_updateHitCount;
- (void)_writeAndCleanUp;
- (void)stop;
- (void)addHitWithThumbnailData:(id)a0;
- (void).cxx_destruct;
- (void)cleanUpForReset;
- (void)startCleanUp;
- (id)initWithCacheThread:(id)a0;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)_threadMain;
- (void)dealloc;

@end
