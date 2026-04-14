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

- (void)_writeAndCleanUp;
- (void)startCleanUp;
- (void)stop;
- (void)pause;
- (id)initWithCacheThread:(id)a0;
- (BOOL)_updateHitCount;
- (void)_threadMain;
- (void)addHitWithThumbnailData:(id)a0;
- (void)cleanUpForReset;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stopWriteAndCleanUpThreadRunLoop;

@end
