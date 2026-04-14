@class RBProcess, RBProcessState;

@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcessState *_state;
    RBProcess *_process;
}

- (int)_targetPid;
- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;

@end
