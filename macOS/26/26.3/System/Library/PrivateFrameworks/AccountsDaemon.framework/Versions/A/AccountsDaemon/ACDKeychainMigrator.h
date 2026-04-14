@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (id)allKeychainItems;
- (id)_keychainItemFromAttributes:(id)a0;
- (id)_keychainItemsForAccount:(id)a0 accountTypeIdentifiers:(id)a1;
- (id)_keychainItemFromAttributesArray:(id)a0;
- (void)migrateAllKeychainItems;
- (id)init;
- (id)keychainItemsForAccounts:(id)a0;
- (BOOL)migrateKeychainItem:(id)a0 toKeybag:(BOOL)a1;
- (void).cxx_destruct;
- (void)_validateKeychainItemClass:(id)a0;

@end
