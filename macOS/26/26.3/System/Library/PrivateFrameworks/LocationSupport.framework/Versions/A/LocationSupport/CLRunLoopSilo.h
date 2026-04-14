@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (void)sync:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (void)assertOutside;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0;
- (id)newTimer;
- (BOOL)inPermissiveMode;
- (void)suspend;
- (BOOL)isSuspended;
- (void)heartBeat:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (id)getTimeCoercibleVariantInstance;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)runloop;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)assertInside;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;

@end
