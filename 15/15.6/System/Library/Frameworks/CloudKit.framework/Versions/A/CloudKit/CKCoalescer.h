@class NSObject;
@protocol OS_dispatch_source;

@interface CKCoalescer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    char _finished;
    char _delegateProcessingInProgress;
    NSObject<OS_dispatch_source> *_fireTimer;
    unsigned long long _coalesceStart;
    unsigned long long _fireDelay;
    unsigned long long _eventCount;
    unsigned long long _noticeCount;
}

@property (readonly, copy, nonatomic) id /* block */ notifyBlock;
@property unsigned long long activityDelay;
@property unsigned long long maxActivityDelay;
@property unsigned long long coalescingInterval;
@property unsigned long long processingDelay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finish:(id /* block */)a0;
- (void)mutate:(id /* block */)a0;
- (void)assertLocked;
- (void)coalesce:(id /* block */)a0;
- (void)delayPostBy:(unsigned long long)a0;
- (id)initWithActivityDelay:(unsigned long long)a0 maxActivityDelay:(unsigned long long)a1 coalescingInterval:(unsigned long long)a2 processingDelay:(unsigned long long)a3 notifyBlock:(id /* block */)a4;
- (id)initWithNotifyBlock:(id /* block */)a0;
- (id)initWithNotifyFrequency:(unsigned long long)a0 notifyBlock:(id /* block */)a1;
- (void)postFinishedNotice;
- (void)postNotice;
- (void)processingComplete;

@end
