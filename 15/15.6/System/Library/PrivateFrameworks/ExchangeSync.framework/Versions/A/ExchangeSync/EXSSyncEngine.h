@class NSArray, NSMutableDictionary, NSString, EXSAccountManager, NSObject, EXSDataManager;
@protocol OS_dispatch_workloop;

@interface EXSSyncEngine : NSObject <EXSSyncEngineDelegate>

@property (nonatomic) char shouldStayRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *dispatchWorkloop;
@property (retain, nonatomic) EXSAccountManager *accountManager;
@property (retain, nonatomic) NSArray *dataConsumerPlugins;
@property (retain, nonatomic) NSMutableDictionary *syncEngineInstances;
@property (readonly, nonatomic) EXSDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (void)startup;
- (void)immediatelySync;
- (id)syncEngineInstanceForAccountID:(id)a0;
- (void)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (void)accountShutdown:(id)a0 isRemovedAccount:(char)a1;
- (id)addDelegateForAccountID:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(char)a3;
- (void)cleanupOrphanedDataSourceWithExistingAccounts:(id)a0;
- (char)handleExchangeAccountAction:(id)a0;
- (void)loadDataConsumerPlugins;
- (void)loadDataConsumerPlugins:(id)a0;
- (id)newEXSyncEngineInstanceForAccount:(id)a0;
- (char)removeDelegateFromAccountID:(id)a0 delegateSourceID:(id)a1;
- (void)removeInactiveAccount:(id)a0;
- (void)runMaintenanceActivities;
- (char)startEngineInstanceForAccountAction:(id)a0;
- (char)startupMigratedConsumerDelegate:(id)a0 consumerSourceIdentifier:(id)a1;
- (char)updateDelegates:(id)a0 forParentAccountChange:(long long)a1;
- (char)updateEngineInstanceForAccountAction:(id)a0;

@end
