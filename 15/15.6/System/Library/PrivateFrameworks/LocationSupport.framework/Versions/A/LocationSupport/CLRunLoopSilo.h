@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    char _useCLPermissiveTimer;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (char)isSuspended;
- (id)newTimer;
- (void)heartBeat:(id)a0;
- (id)runloop;
- (void)assertInside;
- (void)async:(id /* block */)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(char)a1;
- (void)sync:(id /* block */)a0;
- (id)getTimeCoercibleVariantInstance;
- (double)currentLatchedAbsoluteTimestamp;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)assertOutside;
- (char)inPermissiveMode;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;

@end
