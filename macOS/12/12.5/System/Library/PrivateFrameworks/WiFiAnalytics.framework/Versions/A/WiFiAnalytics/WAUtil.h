@interface WAUtil : NSObject

+ (id)deviceName;
+ (unsigned long long)getAWDTimestamp;
+ (id)_getBasePersistenceKeychainQuery;
+ (id)getObscureKey;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (id)unobscureModelData:(id)a0 forModelkey:(id)a1;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (id)rotateObscureKey;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)getTokenForIdentifier:(id)a0;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)groupTypeToString:(long long)a0;
+ (id)groupTypeToAWDComponentID;
+ (id)trimTokenForLogging:(id)a0;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (id)_generateInvocationForMethod:(void *)a0;

@end
