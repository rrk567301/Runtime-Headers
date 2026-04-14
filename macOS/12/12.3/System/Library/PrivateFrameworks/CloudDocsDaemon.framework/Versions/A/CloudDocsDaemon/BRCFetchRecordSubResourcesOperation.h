@class NSError, NSString, BRCPendingChangesStream, NSMutableDictionary, NSMutableSet, NSMutableArray, BRCServerZone, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    NSMutableDictionary *_recordsByID;
    NSMutableDictionary *_subResourceRecordsByID;
    NSMutableArray *_deletedRecordIDs;
    NSMutableArray *_deletedShareIDs;
    NSMutableSet *_movedZoneNames;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_group> *_xattrFetchingGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    NSObject<OS_dispatch_group> *_deserializeGroup;
    NSObject<OS_dispatch_source> *_deserializeSource;
    unsigned char _deserializeState;
    BOOL _isDoneFetchingRecords;
    BOOL _isDeltaSync;
    BOOL _canSaveDirectly;
    BOOL _canSaveDirectlyWithDeletes;
    BOOL _contentRecordsFetchedInline;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream;
@property (copy, nonatomic) id /* block */ queryFinishedServerTruthCallback;
@property (copy, nonatomic) id /* block */ queryFinishedClientTruthCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)stop;
- (void)addRecord:(id)a0;
- (id)records;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initAndScheduleWithServerZone:(id)a0 parentOperation:(id)a1 pendingChangesStream:(id)a2 contentRecordsFetchedInline:(BOOL)a3;
- (BOOL)saveRecordsWithQueryCursor:(id)a0;
- (void)notifyWhenRecordsAreFetchedAndFinish:(id /* block */)a0;
- (void)addRecordIDToDeserialize:(id)a0;
- (void)addRecordIDToDeserialize:(id)a0 recordType:(long long)a1;
- (void)shareIDWasDeleted:(id)a0;
- (void)recordIDWasDeleted:(id)a0;
- (BOOL)saveRecordsWithServerChangeToken:(id)a0 clientChangeToken:(long long)a1 syncStatus:(long long)a2;
- (void)notifyWhenCaughtUp:(BOOL)a0 whenRecordsAreFetchedAndFinish:(id /* block */)a1;
- (void)_scheduleXattrFetch;
- (void)_scheduleDeserialize;
- (void)_startWithParentOperation:(id)a0;
- (void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;
- (void)_prepareToSaveRecords;
- (void)_fetchRecordsBlockingSaveIfNecessary;
- (void)_notifyWhenRecordsAreFetched:(id /* block */)a0;
- (void)stopWithError:(id)a0;
- (BOOL)_markSubResourceRecordAsFetchedIfNecessary:(id)a0;
- (void)_cleanUpAfterSavingRecords;
- (BOOL)_hasRecordsPendingSubResources;
- (void)_saveRecordsToPendingChangesWithServerChangeToken:(id)a0 clientChangeToken:(long long)a1;
- (id)movedZoneNames;

@end
