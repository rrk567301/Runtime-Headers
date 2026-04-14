@class NSString;

@interface NSCFRunLoopSemaphore : NSObject {
    unsigned char _waiting : 1;
    unsigned char _waited : 1;
    unsigned char _signaled : 1;
    unsigned char _stopped : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    void *reserved;
}

@property (class, readonly) const struct __CFString { } *mode;

@property (copy) NSString *legend;
@property (copy) NSString *loggingDomain;
@property (readonly) struct __CFString { } *mode;

+ (void)initialize;
+ (struct __CFString { } *)currentRunLoopMode;
+ (id)invocations;
+ (void)_observe:(struct __CFString { } *)a0 whilePerforming:(id /* block */)a1;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)init;
- (void)signal;
- (BOOL)wait:(double)a0;
- (void)wait;
- (id)initWithMode:(struct __CFString { } *)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (void)_log:(id)a0 force:(BOOL)a1;
- (void)_log:(id)a0;

@end
