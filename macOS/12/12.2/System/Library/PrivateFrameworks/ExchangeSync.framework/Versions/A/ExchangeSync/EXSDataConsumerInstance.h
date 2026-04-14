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
@property (weak, nonatomic) NSObject<EXSDataConsumerInstanceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shutdown;
- (void)accountChanged;
- (void)startup;
- (void)shutdownInstance;
- (void)startupInstance;
- (void)accountAdded;
- (void)accountRemoved;
- (void)processChangesSinceLastSync;
- (void)dispatchOnWorkQueue:(id /* block */)a0;
- (BOOL)waitForConsumerToBeReady;
- (void)checkSourceIntegrity;
- (void)dataConsumerNeedsSync:(id)a0;
- (void)dataConsumerHasFolderChanges:(id)a0;
- (void)dataConsumer:(id)a0 hasItemChangesInFolder:(id)a1;
- (id)initWithHandler:(id)a0 forAccount:(id)a1 withDataManager:(id)a2 dispatchWorkloop:(id)a3;
- (void)processOutstandingChangeItems;

@end
