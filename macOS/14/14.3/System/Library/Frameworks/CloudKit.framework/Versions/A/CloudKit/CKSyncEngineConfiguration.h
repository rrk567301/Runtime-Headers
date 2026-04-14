@class CKDatabase, NSString, CKSyncEngineStateSerialization, NSData, NSObject, CKAssetDownloadStagingManager;
@protocol CKSyncEngineAsyncDelegate, CKSyncEngineDataSource, OS_xpc_object, CKSyncEngineDelegate, CKSyncEngineDelegateInternal;

@interface CKSyncEngineConfiguration : NSObject <CKPropertiesDescription>

@property (nonatomic) BOOL ignoreSystemConditions;
@property (nonatomic) BOOL useUniqueActivityIdentifiers;
@property (nonatomic, getter=isPushSyncCoalescerEnabled) BOOL pushSyncCoalescerEnabled;
@property (weak) id<CKSyncEngineAsyncDelegate> asyncDelegate;
@property (weak) id<CKSyncEngineDelegateInternal> internalDelegate;
@property (weak, nonatomic) id<CKSyncEngineDataSource> dataSource;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride;
@property (retain, nonatomic) NSString *apsMachServiceName;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL continueModifyingPendingChangesAfterFailure;
@property (nonatomic) BOOL allowFetchAndModifyConcurrently;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (nonatomic) BOOL useOpportunisticPushTopic;
@property (nonatomic) BOOL automaticSyncingEnabled;
@property (retain) CKAssetDownloadStagingManager *assetDownloadStagingManager;
@property (retain) CKDatabase *database;
@property (copy) CKSyncEngineStateSerialization *stateSerialization;
@property (weak) id<CKSyncEngineDelegate> delegate;
@property BOOL automaticallySync;
@property (copy) NSString *subscriptionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2;
- (id)initWithDatabase:(id)a0 stateSerialization:(id)a1;
- (id)initWithDatabase:(id)a0 stateSerialization:(id)a1 asyncDelegate:(id)a2;
- (id)initWithDatabase:(id)a0 stateSerialization:(id)a1 delegate:(id)a2;

@end
