@interface DNDSModeResolutionService : NSObject

- (char)_preferModeAssertion:(id)a0 toModeAssertion:(id)a1;
- (unsigned long long)_priorityForModeAssertion:(id)a0;
- (id)recalculateModeForSnapshot:(id)a0;

@end
