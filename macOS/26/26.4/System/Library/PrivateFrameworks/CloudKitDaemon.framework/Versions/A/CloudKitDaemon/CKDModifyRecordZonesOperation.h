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
@property (retain, nonatomic) NSMutableDictionary *saveConfigsByZoneID;
@property (retain, nonatomic) NSMutableDictionary *deleteConfigsByZoneID;
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
@property (retain, nonatomic) NSMutableDictionary *shareRecordByZoneID;
@property (nonatomic) unsigned long long savePolicy;
@property (retain, nonatomic) id<CKModifyRecordZonesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (BOOL)isOperationType:(int)a0;
- (BOOL)supportsClearAssetEncryption;
- (void)_fetchAndPrepareSharesForReparentedZones:(id)a0 completion:(id /* block */)a1;
- (void)_sendCoreAnalyticsEventForKeySync;
- (int)operationType;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)relevantZoneIDs;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (BOOL)_saveZonesToServer;
- (void)main;
- (void)_sendErrorForFailedZones;
- (BOOL)_createZonePCSForZone:(id)a0 ownerPublicKey:(id)a1 error:(id *)a2;
- (BOOL)needsUserKeySyncToPopulateServiceIdentity;
- (BOOL)makeStateTransition;
- (void)_checkAndPrepareZones;
- (void)_checkCurrentPCSIdentity;
- (id)_addParentPCS:(id)a0 toZonePCS:(id)a1;
- (void)_synchronizeUserKeyRegistryFailingOnError:(BOOL)a0;
- (BOOL)_updateZone:(id)a0 withNewPCS:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)_synchronizeSigningIdentitiesIfNeeded;
- (BOOL)_shouldUseZoneishPCSForZone:(id)a0;
- (void)_fetchPCSDataForZonesFromServer;
- (id)_locallyCreatedParentPCSDataForZone:(id)a0 error:(id *)a1;
- (id)_nearestServerStoredAncestorZoneIDForZone:(id)a0;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2 directExpirationDate:(id)a3 expirationDate:(id)a4 expired:(BOOL)a5 changeTag:(id)a6;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchPCSDataForZone:(id)a0 completion:(id /* block */)a1;
- (void)_createNewPCSForZoneInSharedDB:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleParentPCSForZone:(id)a0 completion:(id /* block */)a1;
- (id)_topoSortRecordZones;

@end
