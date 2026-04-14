@class NSString, NSArray, NSOperationQueue, VSRemoteNotifier, VSAccount, VSKeychainEditingContext, VSPreferences, NSUndoManager;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate>

@property (retain) VSAccount *cachedFirstAccount;
@property BOOL needsUpdateCachedFirstAccount;
@property (retain, nonatomic) VSKeychainEditingContext *keychainEditingContext;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;
@property (weak, nonatomic) id changeObserver;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSPreferences *preferences;
@property (readonly, copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAccountStore;
+ (Class)accountClass;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (BOOL)isFirstAccountLoaded;
- (BOOL)_updateCachedFirstAccount;
- (void)_sendLocalNotification;
- (id)_accountForKeychainItem:(id)a0;
- (id)_keychainItemsWithLimit:(unsigned long long)a0;
- (id)_uniqueIdentifierForKeychainItem:(id)a0;
- (void)_insertModernKeychainItemForAccount:(id)a0 context:(id)a1;
- (id)firstAccount;
- (void)_fetchAccountsSimulatingExpiredToken:(BOOL)a0 forProviderIDs:(id)a1 completion:(id /* block */)a2;
- (void)fetchAccountsWithCompletionHandler:(id /* block */)a0;
- (void)_insertLegacyKeychainItemForAccount:(id)a0 context:(id)a1;
- (BOOL)_insertAccount:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)_sendRemoteNotification;
- (id)firstAccountIfLoaded;
- (void)saveAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
