@class NSObject, CUTWeakReference, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PCDispatchTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    char _isValid;
}

@property (readonly, nonatomic) char isValid;
@property (retain, nonatomic) NSDate *fireDate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)_callTarget;
- (void)_cleanupTimer;
- (id)initWithQueue:(id)a0 target:(id)a1 selector:(SEL)a2 fireTime:(unsigned long long)a3;

@end
