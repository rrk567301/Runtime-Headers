@class NSArray, NSMutableDictionary, CKDPCSKeySyncCoreAnalytics, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    char _hasZoneSaves;
    char _hasZoneDeletes;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) char allowDefaultZoneSave;
@property (nonatomic) char markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) char dontFetchFromServer;
@property (nonatomic) char didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (nonatomic) char needsSynchronizeSigningIdentities;
@property (nonatomic) char didSynchronizeSigningIdentities;
@property (retain, nonatomic) id<CKModifyRecordZonesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (char)isOperationType:(int)a0;
- (int)operationType;
- (void)_checkAndPrepareZones;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchPCSDataForZone:(id)a0;
- (void)_fetchPCSDataForZonesFromServer:(char)a0;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2 expirationDate:(id)a3 expired:(char)a4;
- (char)_saveZonesToServer;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_sendErrorForFailedZones;
- (void)_synchronizeSigningIdentitiesIfNeeded;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (char)makeStateTransition;
- (char)supportsClearAssetEncryption;

@end
