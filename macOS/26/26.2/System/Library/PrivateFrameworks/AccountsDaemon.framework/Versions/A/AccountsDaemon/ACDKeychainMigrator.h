@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (id)keychainItemsForAccounts:(id)a0;
- (id)_keychainItemFromAttributesArray:(id)a0;
- (void)_validateKeychainItemClass:(id)a0;
- (id)_keychainItemFromAttributes:(id)a0;
- (void).cxx_destruct;
- (void)migrateAllKeychainItems;
- (BOOL)migrateKeychainItem:(id)a0 toKeybag:(BOOL)a1;
- (id)init;
- (id)_keychainItemsForAccount:(id)a0 accountTypeIdentifiers:(id)a1;
- (id)allKeychainItems;

@end
