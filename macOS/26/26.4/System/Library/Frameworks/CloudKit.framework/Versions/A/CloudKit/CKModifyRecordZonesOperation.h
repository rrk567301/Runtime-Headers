@class NSArray, NSString, CKModifyRecordZonesOperationInfo, NSMutableDictionary, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks> {
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
    NSArray *_configurationsToSave;
    NSArray *_configurationsToDelete;
}

@property (readonly, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock_wrapper;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock_wrapper;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) unsigned long long savePolicy;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)ckSignpostEndWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)handleSaveForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (id)initWithRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)relevantZoneIDs;
- (id)activityCreate;
- (void).cxx_destruct;
- (void)setModifyRecordZonesCompletionBlockIVar:(id /* block */)a0;
- (id)init;
- (void)handleDeleteForRecordZoneID:(id)a0 error:(id)a1;
- (id)initWithConfigurationsToSave:(id)a0 configurationsToDelete:(id)a1;

@end
