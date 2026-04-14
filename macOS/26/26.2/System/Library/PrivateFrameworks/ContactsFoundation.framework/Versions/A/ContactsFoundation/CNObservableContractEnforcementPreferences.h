@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;

@end
