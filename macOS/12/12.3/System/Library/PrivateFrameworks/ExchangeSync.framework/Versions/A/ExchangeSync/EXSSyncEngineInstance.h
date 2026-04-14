@class EXSSyncProtocol, NSArray, EXSAccount, NSString, EXSDataManager, NSObject;
@protocol OS_dispatch_queue;

@interface EXSSyncEngineInstance : NSObject <EXSSyncProtocolDelegate, EXSDataConsumerInstanceDelegate>

@property (retain, nonatomic) EXSDataManager *dataManager;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkloop;
@property (weak, nonatomic) NSArray *dataConsumerPlugins;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncEngineInstanceQueue;
@property BOOL isRunning;
@property (retain, nonatomic) EXSSyncProtocol *syncProtocol;
@property (retain, nonatomic) NSArray *dataConsumerInstances;
@property (readonly, nonatomic) EXSAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shutdown;
- (void)accountChanged;
- (void)startup;
- (void)accountAdded;
- (void)accountRemoved;
- (void)dataConsumerInstance:(id)a0 needsFoldersRepushed:(id)a1;
- (void)dispatchOnWorkQueue:(id /* block */)a0;
- (void)dataConsumerInstanceNeedsSync:(id)a0;
- (void)dataConsumerInstanceHasFolderChanges:(id)a0;
- (void)dataConsumerInstance:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)immediatelySync;
- (void)changeItemPostedNotificationHandler:(id)a0;
- (void)syncProtocolHasFolderChanges:(id)a0;
- (void)syncProtocol:(id)a0 hasItemChangesInFolder:(id)a1;
- (id)initWithAccount:(id)a0 dataConsumerPlugins:(id)a1 dispatchWorkloop:(id)a2;

@end
