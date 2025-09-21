@interface FMKeychainManager : NSObject

+ (id)sharedInstance;

- (int)_add:(id)a0;
- (id)allServices;
- (id)allRecords;
- (char)setPassword:(id)a0 forAccount:(id)a1 service:(id)a2;
- (id)_accessibilityForDataProtectionClass:(long long)a0 migratable:(char)a1;
- (int)_delete:(id)a0;
- (void)_migrateToValueDataIfNeeded:(id)a0 account:(id)a1 service:(id)a2;
- (id)_query:(id)a0 error:(id *)a1;
- (int)_updateWithQuery:(id)a0 attributes:(id)a1;
- (id)allAccountsForService:(id)a0;
- (id)dataForAccount:(id)a0 service:(id)a1;
- (char)deleteDataForAccount:(id)a0 service:(id)a1;
- (id)itemForAccount:(id)a0 service:(id)a1 error:(id *)a2;
- (id)passwordForAccount:(id)a0 service:(id)a1;
- (char)setData:(id)a0 forAccount:(id)a1 service:(id)a2;
- (char)setData:(id)a0 forAccount:(id)a1 service:(id)a2 synchronizable:(long long)a3 dataProtectionClass:(long long)a4 migratable:(long long)a5;
- (char)setPassword:(id)a0 forAccount:(id)a1 service:(id)a2 synchronizable:(long long)a3 dataProtectionClass:(long long)a4 migratable:(long long)a5;

@end
