@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (id)_preventIdleSleepIdentifiers;
- (id)init;
- (int)_targetPid;
- (void).cxx_destruct;

@end
