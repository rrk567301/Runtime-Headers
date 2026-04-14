@class NSString, HIRunLoopSemaphore;

@interface NSCFRunLoopSemaphore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    HIRunLoopSemaphore *_underlyingSemaphore;
}

@property (class, readonly) struct __CFString { } *mode;

@property (copy) NSString *legend;
@property (copy) NSString *loggingDomain;
@property (readonly) struct __CFString { } *mode;

- (void)signal;
- (id)retain;
- (BOOL)wait:(double)a0;
- (id)init;
- (void)dealloc;
- (void)wait;
- (id)initWithMode:(struct __CFString { } *)a0;
- (oneway void)release;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
