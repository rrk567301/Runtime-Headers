@class OITSUPointerKeyDictionary, NSThread, NSCondition, OITSURetainedPointerKeyDictionary;
@protocol TSUiOSMemoryWarningFlushable;

@interface OITSUFlushingManager : NSObject {
    OITSURetainedPointerKeyDictionary *_objects;
    void *_sortedObjects;
    void *_sortedNewObjects;
    OITSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id<TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)_backgroundThread:(id)a0;
- (void)doneWithObject:(id)a0;
- (void)unsafeToFlush:(id)a0;
- (void)safeToFlush:(id)a0 wasAccessed:(BOOL)a1;
- (void)didReceiveMemoryWarning;
- (void)_flushAllEligible;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)eraseInfoForObject:(id)a0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)transferNewObjects;
- (void)advanceClock;
- (BOOL)controlsActiveObject:(id)a0;
- (BOOL)controlsInactiveObject:(id)a0;
- (void)_didUseObject:(id)a0;
- (void)_bgTaskStarted;
- (void)_bgTaskFinished;
- (void)_bgThreadActive;
- (void)_bgThreadInactive;

@end
