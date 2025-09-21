@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (id)newTimer;
- (void)async:(id /* block */)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (id)debugDescription;
- (BOOL)isSuspended;
- (void)sync:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)assertInside;
- (void)suspend;
- (void)resume;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (void)assertOutside;
- (id)runloop;
- (BOOL)inPermissiveMode;
- (id)getTimeCoercibleVariantInstance;
- (void)heartBeat:(id)a0;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void).cxx_destruct;

@end
