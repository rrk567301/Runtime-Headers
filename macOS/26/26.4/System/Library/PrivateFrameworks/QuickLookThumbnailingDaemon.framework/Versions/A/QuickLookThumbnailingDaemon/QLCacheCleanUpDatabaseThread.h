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

- (void)stop;
- (void)startCleanUp;
- (void)pause;
- (BOOL)_updateHitCount;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)cleanUpForReset;
- (void)_threadMain;
- (void).cxx_destruct;
- (void)_writeAndCleanUp;
- (void)addHitWithThumbnailData:(id)a0;
- (id)initWithCacheThread:(id)a0;
- (void)dealloc;

@end
