@class NSArray, NSSet, NSMutableDictionary, NSHashTable;
@protocol NSObject;

@interface ACMonitoredAccountStore : ACAccountStore {
    NSSet *_accountTypesToMonitor;
    NSSet *_monitoringReaders;
    NSArray *_propertiesToPrefetch;
    NSMutableDictionary *_accountsByID;
    NSHashTable *_delegates;
    id<NSObject> _credentialsDidChangeObserver;
    id<NSObject> _didBecomeActiveObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _monitoredAccountsCacheLock;
}

@property (readonly) NSArray *monitoredAccounts;

- (void)addDelegate:(id)a0;
- (void)_sendNotificationOfChange;
- (void)_registerForCredentialChangedNotifications;
- (id)initWithAccountTypes:(id)a0 delegate:(id)a1;
- (void)_lock_accountWasRemoved:(id)a0;
- (void)_accountsListPopulated:(id)a0;
- (void)registerWithCompletion:(id /* block */)a0;
- (void)_lock_accountWasModified:(id)a0;
- (void)_lock_processAccountsListForNotifications:(id)a0 forType:(id)a1;
- (void)_registerNotifyReaders;
- (void)registerSynchronouslyWithError:(id *)a0;
- (void)credentialsChangedNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithWithRemoteEndpoint:(id)a0 effectiveBundleID:(id)a1 accountTypes:(id)a2 propertiesToPrefetch:(id)a3 delegate:(id)a4;
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)initWithAccountTypes:(id)a0 propertiesToPrefetch:(id)a1 delegate:(id)a2;
- (void)_registerAccountMonitorWithCompletion:(id /* block */)a0;
- (void)_registerForApplicationStateDidChangeNotification;
- (void)removeDelegate:(id)a0;
- (void)_lock_accountWasAdded:(id)a0;
- (void)_reregisterForAccountType:(id)a0;
- (id)_allDelegates;
- (id)monitoredAccountWithIdentifier:(id)a0;

@end
