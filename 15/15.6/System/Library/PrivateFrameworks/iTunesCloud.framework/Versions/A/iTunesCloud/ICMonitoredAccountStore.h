@class ACMonitoredAccountStore, NSString, ACAccountType, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface ICMonitoredAccountStore : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore *_accountStore;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    ACAccountType *_cachedStoreAccountType;
}

@property (class, readonly, nonatomic) ICMonitoredAccountStore *sharedAccountStore;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (char)saveAccount:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0;
- (id)activeStoreAccountWithError:(id *)a0;
- (id)storeAccountForDSID:(id)a0 error:(id *)a1;
- (id)_registerAndLoadAccountsIfNecessary;
- (id)acAccountStore;
- (id)allStoreAccountsWithError:(id *)a0;
- (id)localStoreAccountWithError:(id *)a0;
- (id)primaryAppleAccountWithError:(id *)a0;
- (id)storeAccountForAltDSID:(id)a0 error:(id *)a1;
- (id)storeAccountForHomeUserIdentifier:(id)a0 error:(id *)a1;
- (id)storeAccountTypeWithError:(id *)a0;
- (id)storeAccountWithIdentifier:(id)a0 error:(id *)a1;

@end
