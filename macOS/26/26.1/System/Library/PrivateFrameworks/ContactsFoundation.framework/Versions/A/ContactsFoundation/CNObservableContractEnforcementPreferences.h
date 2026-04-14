@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;
+ (BOOL)primitiveShouldSwizzleNilResults;

@end
