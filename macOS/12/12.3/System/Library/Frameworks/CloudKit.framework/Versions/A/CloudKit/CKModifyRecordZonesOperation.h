@class NSArray, NSMutableDictionary, CKModifyRecordZonesOperationInfo, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks> {
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneIDs;
@property (readonly, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (void)handleDeleteForRecordZoneID:(id)a0 error:(id)a1;
- (void)handleSaveForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (id)relevantZoneIDs;

@end
