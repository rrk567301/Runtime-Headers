@class SCRCStackQueue;

@interface SCRCThread : NSObject {
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource { } *_source;
    struct __CFRunLoop { } *_runLoop;
    char _isInvalid;
    char _isRegistered;
    char _isTimerSet;
    char _shouldStop;
    char _isWaitingForStoppingThread;
}

@property (retain, nonatomic, setter=_setKey:) id _key;
@property (nonatomic, setter=_setLastStartTime:) double lastStartTime;

+ (void)initialize;
+ (id)activity;
+ (char)_addThreadToRegisteredThreads:(id)a0 withThreadKey:(id)a1;
+ (double)_performSelector:(SEL)a0 withThreadKey:(id)a1 onTarget:(id)a2 waitTime:(double)a3 cancelMask:(unsigned int)a4 count:(unsigned int)a5 firstObject:(id)a6 moreObjects:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a7;
+ (char)_removeThreadFromRegisteredThreads:(id)a0 withThreadKey:(id)a1;
+ (long long)activeThreadCount;
+ (id)currentThreadTaskCache;
+ (long long)defaultThreadPriority;
+ (void)invalidateForKey:(id)a0;
+ (double)lastStartTimeForKey:(id)a0;
+ (void)postStopNotification;
+ (void)setDefaultThreadPriority:(long long)a0;
+ (id)threadTaskCacheKey;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (char)isInvalid;
- (void)_processQueue;
- (void)setIsInvalid:(char)a0;
- (char)_shouldStop;
- (void)_setIsWaitingForStoppingThread:(char)a0;
- (void)_assignThreadPriority;
- (char)_debug_currentlyRunningOnThisThread;
- (void)_enqueueImmediateTask:(id)a0 cancelMask:(unsigned int)a1 lastStartTime:(double *)a2;
- (void)_enqueueTask:(id)a0 cancelMask:(unsigned int)a1 lastStartTime:(double *)a2;
- (void)_enqueueWaitingTask:(id)a0 cancelMask:(unsigned int)a1 lastStartTime:(double *)a2;
- (id)_initWithKey:(id)a0 task:(id)a1;
- (char)_isWaitingForStoppingThread;
- (double)_performSelector:(SEL)a0 onTarget:(id)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 firstObject:(id)a4 moreObjects:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
- (void)_processQueueFromTimer;
- (void)_runThread:(id)a0;
- (void)_threadDidStop;
- (double)performSelector:(SEL)a0 onTarget:(id)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 objects:(id)a4;
- (double)performSelector:(SEL)a0 onTarget:(id)a1 count:(unsigned int)a2 objects:(id)a3;

@end
