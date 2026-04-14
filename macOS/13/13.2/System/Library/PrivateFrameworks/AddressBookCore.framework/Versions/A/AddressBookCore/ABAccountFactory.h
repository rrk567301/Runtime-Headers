@class NSString, ABUserDefaults;
@protocol ABAccountFactoryDelegate, ABACAccountStore;

@interface ABAccountFactory : NSObject {
    ABUserDefaults *_userDefaults;
    id<ABACAccountStore> _accountStore;
}

@property (weak) id<ABAccountFactoryDelegate> delegate;
@property (copy) NSString *tag;
@property (readonly) NSString *basePath;

+ (id)sharedFactory;
+ (id)os_log;
+ (BOOL)isDirectoryServicesConfigured;
+ (Class)sourceClassForClassName:(id)a0;
+ (id)factoryWithBaseDirectory:(id)a0;
+ (id)accountComponentsWithAccountStore:(id)a0 basePath:(id)a1 fetchOptions:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)accountBuilderForAccountAtPath:(id)a0 withIdentifier:(id)a1;
- (id)makeComponentsValidationHelperWithComponents:(id)a0;
- (id)directoryServicesAccount;
- (id)uncachedLdapAccounts;
- (BOOL)shouldUseACAccountPersistence;
- (BOOL)configuredForSingleSource;
- (Class)sourceClassForClassName:(id)a0;
- (id)initWithBasePath:(id)a0 accountStore:(id)a1;
- (id)userLDAPAccounts;
- (id)accountBuilderForAccountComponents:(id)a0;
- (id)accountWithComponents:(id)a0;
- (id)persistentAccountWithIdentifier:(id)a0;
- (id)persistentAccountWithComponents:(id)a0;
- (id)ldapACAccountWithIdentifier:(id)a0;
- (id)ldapAccountWithACAccount:(id)a0;
- (id)ldapAccountWithIdentifier:(id)a0;
- (id)uncachedAccountWithIdentifier:(id)a0;
- (id)uncachedPersistentAccountsWithFetchOptions:(unsigned long long)a0;
- (id)uncachedLDAPMigrationAccounts;
- (id)uncachedPersistentMigrationAccounts;
- (id)accountsFromComponents:(id)a0;
- (id)migrationAccountsFromComponents:(id)a0;
- (id)migrationAccountWithComponents:(id)a0;
- (id)accountComponentsWithFetchOptions:(unsigned long long)a0;
- (id)accountComponentsAtPath:(id)a0;
- (id)accountComponentsWithBasePath:(id)a0;
- (id)uncachedAccounts;
- (id)makeAccountWithExistingSource:(id)a0;
- (id)localAccount;
- (id)pathForAccountWithIdentifier:(id)a0;

@end
