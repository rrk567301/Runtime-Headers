@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (void).cxx_destruct;
- (id)init;

@end
