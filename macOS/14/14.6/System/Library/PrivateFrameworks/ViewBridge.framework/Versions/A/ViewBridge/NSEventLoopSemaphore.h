@interface NSEventLoopSemaphore : NSCFRunLoopSemaphore

@property (readonly) unsigned long long eventMask;

- (void)signal;
- (id)initWithMode:(struct __CFString { } *)a0 andEventMask:(unsigned long long)a1;
- (void)invokeLoopInModeForDuration:(double)a0 withBlock:(id /* block */)a1;

@end
