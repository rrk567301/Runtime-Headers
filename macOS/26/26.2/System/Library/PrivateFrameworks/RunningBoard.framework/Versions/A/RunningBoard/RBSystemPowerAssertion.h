@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (int)_targetPid;
- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (id)init;

@end
