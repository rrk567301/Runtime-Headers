@interface SidecarRunLoopCondition : SidecarRunLoopSource {
    _Atomic BOOL _flag;
    _Atomic BOOL _modal;
}

@property (copy) id /* block */ handler;

- (void)signal;
- (id)_description;
- (void).cxx_destruct;
- (void)perform;
- (void)waitInMode:(id)a0;
- (long long)runModalForWindow:(id)a0;
- (void)waitInMode:(id)a0 withTimeout:(double)a1;

@end
