@class RBProcess, RBProcessState;

@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcessState *_state;
    RBProcess *_process;
}

- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;
- (void).cxx_destruct;

@end
