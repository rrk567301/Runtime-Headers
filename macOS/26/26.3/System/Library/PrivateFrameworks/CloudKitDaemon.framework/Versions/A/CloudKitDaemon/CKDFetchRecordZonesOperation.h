@class NSArray, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol CKFetchRecordZonesOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (retain, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID;
@property (nonatomic) BOOL shouldRetry;
@property (retain, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry;
@property (retain, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (retain, nonatomic) NSMutableSet *zoneIDsNeedingDugongKeyRoll;
@property (nonatomic) BOOL ignorePCSFailures;
@property (retain, nonatomic) id<CKFetchRecordZonesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordZoneFetchedProgressBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (void)_locked_callbackForRecordZone:(id)a0 zoneID:(id)a1 error:(id)a2;
- (id)activityCreate;
- (int)operationType;
- (void)_cachePCSOnRecordZone:(id)a0;
- (BOOL)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)a0 error:(id *)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_sendErrorForFailedZones;
- (void)_handleAnonymousZoneDataObjects:(id)a0 responsecode:(id)a1;
- (void)main;
- (void)_handleRecordZoneSaved:(id)a0 error:(id)a1;
- (void)_handleRecordZoneFetch:(id)a0 zoneID:(id)a1 responseCode:(id)a2 error:(id)a3;
- (void)_continueHandlingFetchedRecordZone:(id)a0 zoneID:(id)a1;
- (void).cxx_destruct;
- (void)fetchZonesFromServer;
- (void)fetchZonesFromServer:(id)a0;
- (void)saveZonesWithUpdatedZonePCS;

@end
