@interface KeychainAccountStorage : NSObject

+ (id)_dsidForAccount:(struct AOSAccount { } *)a0;
+ (void)initialize;
+ (void)setUnitTestingMode:(BOOL)a0;
+ (int)_updateItem:(struct __SecKeychainItem { } *)a0 withNewServiceName:(id)a1;
+ (BOOL)_accountsDirectoryCreated;
+ (id)_aliasPathsForDSID:(id)a0;
+ (id)_appStringFromSecTrustedApplication:(struct __SecTrustedApplication { } *)a0;
+ (id)_attemptKeychainLookupWithService:(const char *)a0 dsid:(id)a1 dsidStr:(const char *)a2 clientID:(id)a3 attemptNum:(int)a4;
+ (BOOL)_attemptDirectUpdate:(id)a0 appleID:(id)a1 encodedKeyData:(id)a2 clientID:(id)a3;
+ (BOOL)_attemptTemporaryServiceUpdate:(id)a0 service:(id)a1 appleID:(id)a2 encodedKeyData:(id)a3 attributes:(id)a4 clientID:(id)a5 isExistingItemValid:(BOOL)a6;
+ (BOOL)shouldUseNewAPI;
+ (id)_cachedKeyForDSID:(id)a0;
+ (id)_decryptedDataForDSID:(id)a0 andKey:(id)a1;
+ (void)_deleteFileAtPath:(id)a0 ifNotOfExpectedType:(id)a1;
+ (id)_dsidForAlias:(id)a0;
+ (id)_generateKeyFromData:(id)a0;
+ (BOOL)_handleDuplicateItemForService:(id)a0 dsid:(id)a1 appleID:(id)a2 encodedKeyData:(id)a3 attributes:(id)a4 clientID:(id)a5;
+ (BOOL)_handleReAddFailure:(id)a0 tempServiceName:(id)a1 service:(id)a2 appleID:(id)a3 isExistingItemValid:(BOOL)a4 clientID:(id)a5 reAddStatus:(int)a6;
+ (BOOL)_isAppNameUntrusted:(id)a0;
+ (BOOL)_isInvokedByUntrustedApp:(id)a0;
+ (BOOL)_isValidKeychainItem:(struct __SecKeychainItem { } *)a0;
+ (id)_performKeychainLookupForDSID:(id)a0 clientID:(id)a1;
+ (void)_removeAliasesForDSID:(id)a0;
+ (void)_removeInfoForDSID:(id)a0;
+ (void)_removeKeyForDSID:(id)a0 andService:(id)a1;
+ (void)_removeKeyFromSecItemForDSID:(id)a0 andService:(id)a1;
+ (void)_removeKeyFromSecKeychainForDSID:(id)a0 andService:(id)a1;
+ (void)_setCachedKey:(id)a0 forDSID:(id)a1;
+ (BOOL)_storeInfo:(id)a0 forDSID:(id)a1 withKey:(id)a2;
+ (BOOL)_storeKey:(id)a0 forDSID:(id)a1 service:(id)a2 primaryAppleID:(id)a3 andAccount:(struct AOSAccount { } *)a4;
+ (BOOL)_storeKeyUsingSecItem:(id)a0 forDSID:(id)a1 service:(id)a2 primaryAppleID:(id)a3 andAccount:(struct AOSAccount { } *)a4;
+ (BOOL)_storeKeyUsingSecKeychain:(id)a0 forDSID:(id)a1 service:(id)a2 primaryAppleID:(id)a3 andAccount:(struct AOSAccount { } *)a4;
+ (id)_storedInfoForDSID:(id)a0 withKey:(id)a1;
+ (id)_storedKeyForDSID:(id)a0 andAccount:(struct AOSAccount { } *)a1 andAccountInfo:(id)a2;
+ (id)_storedKeyForDSIDFromSecKeychain:(id)a0 andAccount:(struct AOSAccount { } *)a1;
+ (id)_storedKeyForDSIDUsingSecItem:(id)a0 andAccount:(struct AOSAccount { } *)a1;
+ (BOOL)_updateAlias:(id)a0 forDSID:(id)a1;
+ (BOOL)_updateAliases:(id)a0 forDSID:(id)a1;
+ (id)configuredAccountIdentifiers;
+ (BOOL)isInvokedByTrustedInternalTestApp:(id)a0;
+ (void)removeInfoForAccount:(struct AOSAccount { } *)a0;
+ (BOOL)storeInfo:(id)a0 forAccount:(struct AOSAccount { } *)a1;
+ (id)storedInfoForAccount:(struct AOSAccount { } *)a0;
+ (void)useNewAPI:(BOOL)a0 shouldMigrate:(BOOL)a1;

@end
