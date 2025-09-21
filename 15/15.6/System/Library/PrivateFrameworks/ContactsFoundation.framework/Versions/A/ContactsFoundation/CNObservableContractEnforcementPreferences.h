@interface CNObservableContractEnforcementPreferences : NSObject

+ (char)primitiveShouldEnforceRxProtocols;
+ (char)primitiveShouldSwizzleNilResults;
+ (char)shouldEnforceRxProtocols;
+ (char)shouldSwizzleNilResults;

@end
