@class NSMutableDictionary, LUIClockTimer;

@interface LUIClockTimerClient : NSObject <LUIClockTimerHandle> {
    LUIClockTimer *_clockTimer;
    unsigned long long _interval;
    double _timeAdjustment;
    id /* block */ _handler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFRunLoopSource { } *_rls;
    NSMutableDictionary *_modes;
}

@property (readonly) unsigned long long interval;
@property (readonly) double animationTimeAdjustment;

- (void)dealloc;
- (void)invalidate;
- (void)signal;
- (id)description;
- (void)_perform;
- (void).cxx_destruct;
- (void)_invalidateRunLoopSource;
- (void)_scheduleWithRunLoop:(struct __CFRunLoop { } *)a0 inMode:(struct __CFString { } *)a1;
- (void)_unscheduleFromRunLoop:(struct __CFRunLoop { } *)a0 inMode:(struct __CFString { } *)a1;
- (id)initWithClockTimer:(id)a0 interval:(unsigned long long)a1 animationTimeAdjustment:(double)a2 handler:(id /* block */)a3;
- (void)scheduleWithRunLoop:(id)a0 inMode:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 inMode:(id)a1;

@end
