@interface CNSharedProfileStateOracleTestDouble : CNSharedProfileStateOracle

+ (char)isFeatureEnabled;
+ (char)shouldBypassPersistenceCheck;

@end
