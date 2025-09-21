@class CKSyncEngineFetchedRecordZoneChangesEvent, CKSyncEngineDidFetchChangesEvent, CKSyncEngineDidSendChangesEvent, CKSyncEngineAccountChangeEvent, CKSyncEngineWillFetchRecordZoneChangesEvent, NSString, CKSyncEngineDidFetchRecordZoneChangesEvent, CKSyncEngineSentRecordZoneChangesEvent, CKSyncEngineStateUpdateEvent, CKSyncEngineWillFetchChangesEvent, CKSyncEngineSentDatabaseChangesEvent, CKSyncEngineWillSendChangesEvent, CKSyncEngineFetchedDatabaseChangesEvent;

@interface CKSyncEngineEvent : NSObject <CKPropertiesDescription>

@property (readonly) long long type;
@property (readonly, nonatomic) CKSyncEngineStateUpdateEvent *stateUpdateEvent;
@property (readonly, nonatomic) CKSyncEngineAccountChangeEvent *accountChangeEvent;
@property (readonly, nonatomic) CKSyncEngineFetchedDatabaseChangesEvent *fetchedDatabaseChangesEvent;
@property (readonly, nonatomic) CKSyncEngineFetchedRecordZoneChangesEvent *fetchedRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineSentDatabaseChangesEvent *sentDatabaseChangesEvent;
@property (readonly, nonatomic) CKSyncEngineSentRecordZoneChangesEvent *sentRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineWillFetchChangesEvent *willFetchChangesEvent;
@property (readonly, nonatomic) CKSyncEngineWillFetchRecordZoneChangesEvent *willFetchRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineDidFetchRecordZoneChangesEvent *didFetchRecordZoneChangesEvent;
@property (readonly, nonatomic) CKSyncEngineDidFetchChangesEvent *didFetchChangesEvent;
@property (readonly, nonatomic) CKSyncEngineWillSendChangesEvent *willSendChangesEvent;
@property (readonly, nonatomic) CKSyncEngineDidSendChangesEvent *didSendChangesEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (char)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initInternal;

@end
