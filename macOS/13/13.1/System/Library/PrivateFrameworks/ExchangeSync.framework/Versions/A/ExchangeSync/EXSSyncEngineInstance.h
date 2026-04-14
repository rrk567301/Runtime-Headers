@class EXSAccount, NSArray, EXSSyncProtocol, NSString, EXSDataManager, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, EXSSyncEngineDelegate;

@interface EXSSyncEngineInstance : NSObject <EXSSyncProtocolDelegate, EXSDataConsumerInstanceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _attachmentDownloadRequestLock;
    NSMutableDictionary *_attachmentDownloadRequests;
}

@property (retain, nonatomic) EXSAccount *account;
@property (retain, nonatomic) EXSDataManager *dataManager;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkloop;
@property (weak, nonatomic) NSArray *dataConsumerPlugins;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncEngineInstanceQueue;
@property (retain, nonatomic) EXSSyncProtocol *syncProtocol;
@property (retain, nonatomic) NSArray *dataConsumerInstances;
@property (weak, nonatomic) id<EXSSyncEngineDelegate> engineDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (void)shutdown;
- (BOOL)startup:(BOOL)a0;
- (void)handleAccountChange:(id)a0;
- (void)dataConsumerInstance:(id)a0 needsFoldersRepushed:(id)a1;
- (void)dataConsumerInstanceNeedsSync:(id)a0;
- (void)dataConsumerInstanceHasFolderChanges:(id)a0;
- (void)dataConsumerInstanceHasMigratedData:(id)a0 withLastChangeID:(long long)a1;
- (void)dataConsumerInstance:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)dataConsumerInstance:(id)a0 requestAutomaticDownloadOfAttachmentWithUUID:(id)a1;
- (void)dispatchOnWorkQueue:(id /* block */)a0;
- (void)changeItemPostedNotificationHandler:(id)a0;
- (void)mailModifiedEWSInvitation:(id)a0;
- (void)syncProtocolHasFolderChanges:(id)a0;
- (void)syncProtocol:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)syncProtocol:(id)a0 hasUpdateForAttachmentWithExternalID:(id)a1;
- (id)initWithAccount:(id)a0 syncEngine:(id)a1 dataConsumerPlugins:(id)a2 dispatchWorkloop:(id)a3;
- (id)associatedDelegateSourceIdentifiers;
- (void)startUpMigratedDelegateInstance:(id)a0;
- (BOOL)startupWithPermissionCheck:(BOOL)a0 migratedData:(BOOL *)a1;
- (void)immediatelySync;
- (void)_createAndRegisterSyncProtocol;
- (void)_startupSyncProtocol;
- (BOOL)_accountNeedsDelegatePermissionCheck:(BOOL)a0;
- (void)_startupDataConsumers:(long long)a0;
- (void)_startupEXSSyncEngineInstanceAfterMigration;
- (void)_startupEXSSyncEngineInstance;
- (BOOL)_accountNeedsCalendarDataMigration:(long long)a0;
- (void)downloadAttachmentWithRequestID:(id)a0 attachmentUUID:(id)a1 connection:(id)a2;
- (void)removeAttachmentRequest:(id)a0;

@end
