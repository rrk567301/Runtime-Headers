@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (void)heartBeat:(id)a0;
- (id)getTimeCoercibleVariantInstance;
- (BOOL)isSuspended;
- (void)resume;
- (void)suspend;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (void)sync:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)runloop;
- (id)newTimer;
- (void).cxx_destruct;
- (BOOL)inPermissiveMode;
- (id)debugDescription;
- (double)currentLatchedAbsoluteTimestamp;
- (void)assertInside;
- (void)assertOutside;

@end
