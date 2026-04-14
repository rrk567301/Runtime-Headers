@class CKSyncEngineFetchedRecordZoneChangesEvent, CKSyncEngineDidFetchChangesEvent, CKSyncEngineDidSendChangesEvent, CKSyncEngineWillFetchAssetEvent, CKSyncEngineAccountChangeEvent, CKSyncEngineWillFetchRecordZoneChangesEvent, CKSyncEngineDidFetchAssetEvent, CKSyncEngineDidFetchRecordZoneChangesEvent, NSString, CKSyncEngineSentRecordZoneChangesEvent, CKSyncEngineStateUpdateEvent, CKSyncEngineWillFetchChangesEvent, CKSyncEngineFetchedDatabaseChangesEvent, CKSyncEngineWillSendChangesEvent, CKSyncEngineSentDatabaseChangesEvent, CKSyncEngineFetchedAssetEvent;

@interface CKSyncEngineEvent : NSObject <CKPropertiesDescription>

@property (readonly, nonatomic) CKSyncEngineWillFetchAssetEvent *willFetchAssetEvent;
@property (readonly, nonatomic) CKSyncEngineFetchedAssetEvent *fetchedAssetEvent;
@property (readonly, nonatomic) CKSyncEngineDidFetchAssetEvent *didFetchAssetEvent;
@property (readonly) long long type;
@property (readonly, nonatomic) CKSyncEngineStateUpdateEvent *stateUpdateEvent;
@property (readonly, nonatomic) CKSyncEngineAccountChangeEvent *accountChangeEvent;
@property (readonly, nonatomic) CKSyncEngineWillFetchChangesEvent *willFetchChangesEvent;
@property (readonly, nonatomic) CKSyncEngineFetchedDatabaseChangesEvent *fetchedDatabaseChangesEvent;
@property (readonly, nonatomic) CKSyncEngineDidFetchChangesEvent *didFetchChangesEvent;
@property (readonly, nonatomic) CKSyncEngineWillFetchRecordZoneChangesEvent *willFetchRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineFetchedRecordZoneChangesEvent *fetchedRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineDidFetchRecordZoneChangesEvent *didFetchRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineWillSendChangesEvent *willSendChangesEvent;
@property (readonly, nonatomic) CKSyncEngineSentDatabaseChangesEvent *sentDatabaseChangesEvent;
@property (readonly, nonatomic) CKSyncEngineSentRecordZoneChangesEvent *sentRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineDidSendChangesEvent *didSendChangesEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initInternal;
- (id)redactedDescription;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;

@end
