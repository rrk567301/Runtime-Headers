@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (int)_targetPid;
- (id)init;
- (id)_preventIdleSleepIdentifiers;
- (void).cxx_destruct;

@end
