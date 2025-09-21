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

+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (void)didEnterBackground;
- (id)autorelease;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didReceiveMemoryWarning;
- (id)retain;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)retainCount;
- (void)willEnterForeground;
- (oneway void)release;
- (void)_bgThreadActive;
- (void)doneWithObject:(id)a0;
- (void)_backgroundThread:(id)a0;
- (void)_bgTaskStarted;
- (void)_bgThreadInactive;
- (void)_didUseObject:(id)a0;
- (void)_flushAllEligible;
- (void)_bgTaskFinished;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (BOOL)controlsActiveObject:(id)a0;
- (BOOL)controlsInactiveObject:(id)a0;
- (struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)eraseInfoForObject:(id)a0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)safeToFlush:(id)a0 wasAccessed:(BOOL)a1;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)a0;

@end
