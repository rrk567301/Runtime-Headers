@class NSMutableArray;

@interface NSEventQueue : NSObject {
    NSMutableArray *_events;
    unsigned long long _capacity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

+ (BOOL)event:(id)a0 isEqualTo:(id)a1;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (void)logEventCount;
- (void)enqueue:(id)a0;
- (id)nextEventEqualToEvent:(id)a0 dequeue:(BOOL)a1;
- (id)dequeueTimestamp:(double)a0;

@end
