@class NSArray, NSMutableDictionary, NSString, EXSAccountManager, NSObject, EXSDataManager;
@protocol OS_dispatch_workloop;

@interface EXSSyncEngine : NSObject <EXSSyncEngineDelegate>

@property (nonatomic) BOOL shouldStayRunning;
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
- (void)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (void)immediatelySync;
- (BOOL)startupMigratedConsumerDelegate:(id)a0 consumerSourceIdentifier:(id)a1;
- (BOOL)handleExchangeAccountAction:(id)a0;
- (BOOL)startEngineInstanceForAccountAction:(id)a0;
- (BOOL)updateEngineInstanceForAccountAction:(id)a0;
- (void)accountShutdown:(id)a0 isRemovedAccount:(BOOL)a1;
- (BOOL)removeDelegatesForRemovedAccount:(id)a0;
- (void)cleanupOrphanedDataSourceWithExistingAccounts:(id)a0;
- (id)addDelegateForAccountID:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(BOOL)a3;
- (BOOL)removeDelegateFromAccountID:(id)a0 delegateSourceID:(id)a1;
- (id)syncEngineInstanceForAccountID:(id)a0;
- (void)runMaintenanceActivities;
- (void)loadDataConsumerPlugins;
- (void)loadDataConsumerPlugins:(id)a0;

@end
