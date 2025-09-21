@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (BOOL)migrateKeychainItem:(id)a0 toKeybag:(BOOL)a1;
- (void)migrateAllKeychainItems;
- (void)_validateKeychainItemClass:(id)a0;
- (id)init;
- (id)_keychainItemsForAccount:(id)a0 accountTypeIdentifiers:(id)a1;
- (id)_keychainItemFromAttributes:(id)a0;
- (id)allKeychainItems;
- (id)_keychainItemFromAttributesArray:(id)a0;
- (id)keychainItemsForAccounts:(id)a0;
- (void).cxx_destruct;

@end
