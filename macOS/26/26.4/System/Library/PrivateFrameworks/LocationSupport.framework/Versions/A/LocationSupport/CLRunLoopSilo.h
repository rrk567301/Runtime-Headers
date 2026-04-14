@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (void)async:(id /* block */)a0;
- (void)resume;
- (id)getTimeCoercibleVariantInstance;
- (id)newTimer;
- (id)debugDescription;
- (id)runloop;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (void)assertInside;
- (void)assertOutside;
- (void)suspend;
- (void)heartBeat:(id)a0;
- (BOOL)isSuspended;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (double)currentLatchedAbsoluteTimestamp;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)inPermissiveMode;
- (void)sync:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;

@end
