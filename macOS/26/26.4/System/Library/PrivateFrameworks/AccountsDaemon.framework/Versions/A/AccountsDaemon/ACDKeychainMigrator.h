@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;

- (id)_keychainItemFromAttributesArray:(id)a0;
- (id)_keychainItemsForAccount:(id)a0 accountTypeIdentifiers:(id)a1;
- (id)allKeychainItems;
- (void).cxx_destruct;
- (void)migrateAllKeychainItems;
- (id)_keychainItemFromAttributes:(id)a0;
- (id)init;
- (void)_validateKeychainItemClass:(id)a0;
- (id)keychainItemsForAccounts:(id)a0;
- (BOOL)migrateKeychainItem:(id)a0 toKeybag:(BOOL)a1;

@end
