@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;

@end
