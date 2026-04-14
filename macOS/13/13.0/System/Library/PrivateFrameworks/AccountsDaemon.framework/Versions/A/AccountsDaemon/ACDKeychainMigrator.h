@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)migrateAllKeychainItems;
- (BOOL)migrateKeychainItem:(id)a0 toKeybag:(BOOL)a1;
- (void)_validateKeychainItemClass:(id)a0;
- (id)allKeychainItems;
- (id)keychainItemsForAccounts:(id)a0;
- (id)_keychainItemsForAccount:(id)a0 accountTypeIdentifiers:(id)a1;
- (id)_keychainItemFromAttributes:(id)a0;
- (id)_keychainItemFromAttributesArray:(id)a0;

@end
