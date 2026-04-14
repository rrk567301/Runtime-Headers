@interface WAUtil : NSObject

+ (id)deviceName;
+ (unsigned long long)getAWDTimestamp;
+ (id)rotateObscureKey;
+ (id)getObscureKey;
+ (id)_getBasePersistenceKeychainQuery;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)getTokenForIdentifier:(id)a0;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)unobscureModelData:(id)a0 forModelkey:(id)a1;
+ (id)groupTypeToString:(long long)a0;
+ (id)groupTypeToAWDComponentID;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (id)trimTokenForLogging:(id)a0;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;

@end
