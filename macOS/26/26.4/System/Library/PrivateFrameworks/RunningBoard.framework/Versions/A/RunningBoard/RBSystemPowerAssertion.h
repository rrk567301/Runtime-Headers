@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;
- (void).cxx_destruct;
- (id)init;

@end
