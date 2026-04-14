@class NSArray, WBSKeychainCredentialNotificationMonitor, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSGeneratedPasswordStore : NSObject {
    NSMutableArray *_cachedGeneratedPasswords;
    NSObject<OS_dispatch_queue> *_queue;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    BOOL _shouldIgnoreKeychainUpdates;
}

@property (class, readonly, nonatomic) WBSGeneratedPasswordStore *sharedStore;
@property (class, readonly, nonatomic) unsigned long long generatedPasswordExpirationTimeInDays;

@property (readonly, nonatomic) NSDate *currentExpirationDate;
@property (readonly, nonatomic) NSArray *allUnexpiredGeneratedPasswords;

- (void)_reset;
- (id)init;
- (void)preWarm;
- (void).cxx_destruct;
- (void)_loadIfNeeded;
- (void)debug_removeAll;
- (id)_generatedPasswordsFilteringExpiredPasswords:(id)a0 olderThanDate:(id)a1;
- (void)_purgeExpiredPasswordsOnInternalQueue:(id)a0;
- (void)_removeAllGeneratedPasswordsOnInternalQueue;
- (void)addGeneratedPassword:(id)a0 forProtectionSpace:(id)a1 inPrivateBrowsingSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)clearGeneratedPasswordsMatchingSavedAccount:(id)a0 completionHandler:(id /* block */)a1;
- (id)generatedPasswordsForProtectionSpace:(id)a0 options:(unsigned long long)a1;
- (id)generatedPasswordsMatchingSavedAccount:(id)a0;
- (void)removeGeneratedPassword:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeGeneratedPasswordMatchingSavedAccount:(id)a0;
- (void)synchronouslyRemoveGeneratedPasswordsNewerThanDate:(id)a0;
- (void)updateGeneratedPassword:(id)a0 withPassword:(id)a1 completionHandler:(id /* block */)a2;

@end
