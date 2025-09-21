@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log, EFScheduler, EFCancelable;

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_accounts;
    id<EFScheduler> _recoveryHandlerScheduler;
    id<EFCancelable> _cancelable;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSArray *allAccounts;
@property (readonly, nonatomic) NSArray *receivingAccounts;
@property (readonly, nonatomic) NSArray *deliveryAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (id)accountForIdentifier:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRemoteConnection:(id)a0;
- (void)accountsAdded:(id)a0;
- (void)accountsChanged:(id)a0;
- (void)accountsRemoved:(id)a0;
- (void)_postAccountChangedNotification;
- (void)requestAccounts;
- (void)_fetchAccountsAndObserveChanges;
- (void)didEndObserving;
- (id)_currentAccountsByObjectIDMap;
- (id)accountForAccountIdentifier:(id)a0;
- (void)didBeginObserving;

@end
