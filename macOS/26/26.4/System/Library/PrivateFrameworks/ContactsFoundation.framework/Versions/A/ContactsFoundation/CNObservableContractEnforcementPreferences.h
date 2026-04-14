@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)primitiveShouldSwizzleNilResults;
+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;

@end
