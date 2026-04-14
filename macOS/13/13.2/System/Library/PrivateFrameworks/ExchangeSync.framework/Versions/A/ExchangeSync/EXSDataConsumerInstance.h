@class EXSDataConsumerPlugin, NSString, EXSAccount, EXSDataManager, NSObject;
@protocol OS_os_log, EXSDataConsumer, EXSDataConsumerInstanceDelegate, OS_dispatch_queue;

@interface EXSDataConsumerInstance : NSObject <EXSDataConsumerDelegate>

@property (retain, nonatomic) id<EXSDataConsumer> dataConsumer;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *logCategory;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkloop;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property BOOL isRunning;
@property (readonly, weak, nonatomic) EXSDataConsumerPlugin *plugin;
@property (readonly, weak, nonatomic) EXSAccount *account;
@property (readonly, weak, nonatomic) EXSDataManager *dataManager;
@property (readonly) BOOL supportsAttachments;
@property (weak, nonatomic) NSObject<EXSDataConsumerInstanceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shutdown;
- (void)startup:(long long)a0;
- (void)_accountChanged:(long long)a0;
- (BOOL)shouldDownloadAttachmentWithUUID:(id)a0;
- (void)syncStateDidChange:(id)a0;
- (void)dataConsumerNeedsSync:(id)a0;
- (void)dataConsumerHasFolderChanges:(id)a0;
- (void)dataConsumerHasMigratedData:(id)a0 withLastChangeID:(long long)a1;
- (void)dataConsumer:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)dataConsumer:(id)a0 requestAutomaticDownloadOfAttachmentWithUUID:(id)a1;
- (void)dataConsumerRequiresFullResync:(id)a0;
- (id)initWithHandler:(id)a0 forAccount:(id)a1 withDataManager:(id)a2 dispatchWorkloop:(id)a3;
- (void)accountAdded;
- (void)_accountAdded:(long long)a0;
- (void)accountMetadataChanged;
- (BOOL)consumerInterestedInEnabledDataClasses:(id)a0;
- (void)accountDisabledForDataClass;
- (void)accountEnabledForDataClass;
- (void)accountEnabledForDataClass:(long long)a0;
- (void)accountRemoved;
- (void)checkSourceIntegrity;
- (void)processChangesSinceLastSync;
- (void)processOutstandingChangeItems;
- (void)processAttachmentChangeForAttachmentWithExternalID:(id)a0;
- (void)dispatchOnWorkQueue:(id /* block */)a0;
- (void)startupInstance:(long long)a0;
- (void)shutdownInstance;
- (BOOL)waitForConsumerToBeReady;

@end
