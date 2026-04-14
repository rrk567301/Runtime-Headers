@interface KeychainAccountStorage : NSObject

+ (void)initialize;
+ (id)storedInfoForAccount:(struct AOSAccount { } *)a0;
+ (BOOL)storeInfo:(id)a0 forAccount:(struct AOSAccount { } *)a1;
+ (void)removeInfoForAccount:(struct AOSAccount { } *)a0;
+ (id)configuredAccountIdentifiers;
+ (id)_dsidForAccount:(struct AOSAccount { } *)a0;
+ (id)_storedKeyForDSID:(id)a0 andAccount:(struct AOSAccount { } *)a1;
+ (id)_storedInfoForDSID:(id)a0 withKey:(id)a1;
+ (BOOL)_accountsDirectoryCreated;
+ (BOOL)_storeKey:(id)a0 forDSID:(id)a1 service:(id)a2 primaryAppleID:(id)a3 andAccount:(struct AOSAccount { } *)a4;
+ (BOOL)_storeInfo:(id)a0 forDSID:(id)a1 withKey:(id)a2;
+ (BOOL)_updateAliases:(id)a0 forDSID:(id)a1;
+ (void)_removeKeyForDSID:(id)a0 andService:(id)a1;
+ (void)_removeInfoForDSID:(id)a0;
+ (id)_cachedKeyForDSID:(id)a0;
+ (void)_setCachedKey:(id)a0 forDSID:(id)a1;
+ (BOOL)_isValidKeychainItem:(struct __SecKeychainItem { } *)a0;
+ (int)_updateItem:(struct __SecKeychainItem { } *)a0 withNewServiceName:(id)a1;
+ (id)_appStringFromSecTrustedApplication:(struct __SecTrustedApplication { } *)a0;
+ (id)_decryptedDataForDSID:(id)a0 andKey:(id)a1;
+ (id)_generateKeyFromData:(id)a0;
+ (BOOL)_updateAlias:(id)a0 forDSID:(id)a1;
+ (id)_dsidForAlias:(id)a0;
+ (id)_aliasPathsForDSID:(id)a0;
+ (void)_removeAliasesForDSID:(id)a0;
+ (void)_deleteFileAtPath:(id)a0 ifNotOfExpectedType:(id)a1;

@end
