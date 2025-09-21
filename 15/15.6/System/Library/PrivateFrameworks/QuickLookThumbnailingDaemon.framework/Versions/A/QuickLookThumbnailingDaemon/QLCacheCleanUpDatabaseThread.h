@class NSMutableDictionary, NSConditionLock, NSThread, _QLCacheThread;

@interface QLCacheCleanUpDatabaseThread : NSObject {
    NSConditionLock *_threadLock;
    struct __CFRunLoop { } *_threadRunLoop;
    NSThread *_thread;
}

@property char diskCacheCleanupDone;
@property (retain) _QLCacheThread *cacheThread;
@property (retain) NSMutableDictionary *thumbnailsHit;
@property (readonly, nonatomic) unsigned long long hitToSaveCount;
@property (readonly, nonatomic) int currentMode;
@property (nonatomic) char shouldRemoveThumbnailsForDeletedFiles;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)_threadMain;
- (char)_updateHitCount;
- (void)cleanUpForReset;
- (void)_stopWriteAndCleanUpThreadRunLoop;
- (void)_writeAndCleanUp;
- (void)addHitWithThumbnailData:(id)a0;
- (id)initWithCacheThread:(id)a0;
- (void)startCleanUp;

@end
