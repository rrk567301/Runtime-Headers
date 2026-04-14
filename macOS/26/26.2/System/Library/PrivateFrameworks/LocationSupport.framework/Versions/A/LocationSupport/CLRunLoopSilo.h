@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (void)sync:(id /* block */)a0;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (BOOL)isSuspended;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (BOOL)inPermissiveMode;
- (void)suspend;
- (id)debugDescription;
- (id)getTimeCoercibleVariantInstance;
- (void)resume;
- (id)newTimer;
- (id)initWithIdentifier:(id)a0;
- (void)assertOutside;
- (void).cxx_destruct;
- (id)runloop;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)heartBeat:(id)a0;
- (void)async:(id /* block */)a0;
- (void)assertInside;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (double)currentLatchedAbsoluteTimestamp;

@end
