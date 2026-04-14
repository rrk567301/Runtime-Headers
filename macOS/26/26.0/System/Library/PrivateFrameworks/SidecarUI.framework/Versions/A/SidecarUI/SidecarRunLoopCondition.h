@interface SidecarRunLoopCondition : SidecarRunLoopSource {
    _Atomic BOOL _flag;
    _Atomic BOOL _modal;
}

@property (copy) id /* block */ handler;

- (id)_description;
- (void)signal;
- (void)waitInMode:(id)a0;
- (void)perform;
- (void).cxx_destruct;
- (long long)runModalForWindow:(id)a0;
- (void)waitInMode:(id)a0 withTimeout:(double)a1;

@end
