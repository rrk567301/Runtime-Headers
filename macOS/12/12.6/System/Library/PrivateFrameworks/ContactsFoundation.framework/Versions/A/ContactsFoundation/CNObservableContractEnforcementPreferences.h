@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;

@end
