@class NSArray, NSMutableDictionary, CKDPCSKeySyncCoreAnalytics, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    BOOL _hasZoneSaves;
    BOOL _hasZoneDeletes;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;
@property (nonatomic) BOOL didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (nonatomic) BOOL needsSynchronizeSigningIdentities;
@property (nonatomic) BOOL didSynchronizeSigningIdentities;
@property (retain, nonatomic) id<CKModifyRecordZonesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (BOOL)isOperationType:(int)a0;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (id)_locallyCreatedParentPCSDataForZone:(id)a0 error:(id *)a1;
- (void)main;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_shouldUseZoneishPCSForZone:(id)a0;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_fetchPCSDataForZone:(id)a0 completion:(id /* block */)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)relevantZoneIDs;
- (BOOL)_saveZonesToServer;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2 expirationDate:(id)a3 expired:(BOOL)a4 etag:(id)a5;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)supportsClearAssetEncryption;
- (void)_fetchPCSDataForZonesFromServer;
- (void)_synchronizeSigningIdentitiesIfNeeded;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (BOOL)_updateZone:(id)a0 withNewPCS:(id)a1 error:(id *)a2;
- (void)_handleParentPCSForZone:(id)a0 completion:(id /* block */)a1;
- (id)_topoSortRecordZones;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (void).cxx_destruct;
- (id)_addParentPCS:(id)a0 toZonePCS:(id)a1;
- (void)_sendErrorForFailedZones;
- (void)_checkAndPrepareZones;

@end
