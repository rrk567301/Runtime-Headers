@interface FMKeychainManager : NSObject

+ (id)sharedInstance;

- (void)_migrateToValueDataIfNeeded:(id)a0 account:(id)a1 service:(id)a2;
- (BOOL)setPassword:(id)a0 forAccount:(id)a1 service:(id)a2;
- (BOOL)deleteDataForAccount:(id)a0 service:(id)a1;
- (int)_delete:(id)a0;
- (id)allServices;
- (id)passwordForAccount:(id)a0 service:(id)a1;
- (int)_add:(id)a0;
- (int)_updateWithQuery:(id)a0 attributes:(id)a1;
- (id)allAccountsForService:(id)a0;
- (id)dataForAccount:(id)a0 service:(id)a1;
- (id)allRecords;
- (BOOL)setData:(id)a0 forAccount:(id)a1 service:(id)a2 synchronizable:(long long)a3 dataProtectionClass:(long long)a4 migratable:(long long)a5;
- (BOOL)setData:(id)a0 forAccount:(id)a1 service:(id)a2;
- (id)_accessibilityForDataProtectionClass:(long long)a0 migratable:(BOOL)a1;
- (id)itemForAccount:(id)a0 service:(id)a1 error:(id *)a2;
- (BOOL)setPassword:(id)a0 forAccount:(id)a1 service:(id)a2 synchronizable:(long long)a3 dataProtectionClass:(long long)a4 migratable:(long long)a5;
- (id)_query:(id)a0 error:(id *)a1;

@end
