@interface _NSDisplayLink : NSDisplayLink {
    id /* block */ _displayTiming;
    id /* block */ _handler;
    struct __CFRunLoopTimer { } *_timer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    unsigned long long _scheduleCount;
    unsigned char _paused : 1;
    unsigned char _firing : 1;
}

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)isPaused;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void)setPaused:(BOOL)a0;
- (void)_fire;
- (void)_schedule;
- (id)initWithDisplayTiming:(id /* block */)a0 handler:(id /* block */)a1;

@end
