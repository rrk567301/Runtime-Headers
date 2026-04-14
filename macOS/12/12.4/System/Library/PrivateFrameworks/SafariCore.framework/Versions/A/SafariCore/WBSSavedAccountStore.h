@class NSArray, NSSet, NSMutableDictionary, WBSKeychainCredentialNotificationMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSavedAccountStore : NSObject {
    NSMutableDictionary *_highLevelDomainToUsernameToPasswordToSavedAccounts;
    NSArray *_savedAccountsWithPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSArray *savedAccountsWithPasswords;
@property (readonly, nonatomic) NSArray *savedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill;
@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedAccountsWithPasswordsExcludingNeverSaveMarkerPasswords;

+ (id)sharedStore;
+ (void)removeCredentialTypes:(long long)a0 forSavedAccount:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)savedAccountsForPersistentIdentifiers:(id)a0;
- (void)removeHideWarningMarkerForSavedAccount:(id)a0;
- (BOOL)canSaveUser:(id)a0 password:(id)a1 forProtectionSpace:(id)a2 highLevelDomain:(id)a3;
- (id)saveUser:(id)a0 password:(id)a1 forProtectionSpace:(id)a2 highLevelDomain:(id)a3;
- (void)_postSavedAccountStoreDidChangeNotification;
- (id)_savedAccountForProtectionSpace:(id)a0 user:(id)a1 password:(id)a2;
- (id)savedAccountWithAllMetadataForURLCredential:(id)a0 protectionSpace:(id)a1;
- (id)_savedAccountsWithPasswords;
- (id)_allInternetPasswordEntriesFromKeychain;
- (id)_allSidecarsFromKeychain;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)_removeSavedAccount:(id)a0 fromCachedCollectionsForCredentialTypes:(long long)a1;
- (void)_removeSidecarObjectsOnInternalQueueForSavedAccount:(id)a0 withBlock:(id /* block */)a1;
- (void)_saveSidecarObjectsOnInternalQueueForSavedAccount:(id)a0 withBlock:(id /* block */)a1;
- (void)_ensureDomainsToUsersExists;
- (void)_saveSidecarObjectsOnInternalQueueForSavedAccountWithPassword:(id)a0 withBlock:(id /* block */)a1;
- (void)removeCredentialTypes:(long long)a0 forSavedAccount:(id)a1;
- (id)_persistentIdentifierForUser:(id)a0 host:(id)a1;
- (BOOL)changeSavedAccount:(id)a0 toUser:(id)a1 password:(id)a2;
- (id)savedAccountForURLCredential:(id)a0 protectionSpace:(id)a1;
- (void)savedAccountWithAllMetadataForURLCredential:(id)a0 protectionSpace:(id)a1 completion:(id /* block */)a2;
- (id)savedAccountForURL:(id)a0 user:(id)a1 password:(id)a2;
- (BOOL)_canMergeSavedAccount:(id)a0 withOtherSavedAccountWithoutSidecarConflict:(id)a1;
- (void)removeSite:(id)a0 fromSavedAccountWithPassword:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)canChangeSavedAccount:(id)a0 toUser:(id)a1 password:(id)a2;
- (BOOL)changeSavedAccountWithRequest:(id)a0;
- (void)saveTOTPGenerator:(id)a0 forSavedAccount:(id)a1;
- (void)removeTOTPGenerator:(id)a0 forSavedAccount:(id)a1;
- (void)saveNotesEntry:(id)a0 forSavedAccount:(id)a1;
- (void)saveHideMarker:(id)a0 forSavedAccount:(id)a1;
- (void)resetHiddenSecurityRecommendationsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)numberOfSavedAccountsForHighLevelDomain:(id)a0;
- (id)persistentIdentifierForCredential:(id)a0 protectionSpace:(id)a1;
- (id)persistentIdentifierForSavedAccount:(id)a0;
- (void)_migratePasswordsFor70968783;

@end
