@class IMDCKDatabaseManager, CKRecordID, NSDate, NSError, IMDRecordZoneManager, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKExitManager : IMDCKAbstractSyncController

@property (retain, nonatomic) CKRecordID *exitRecordID;
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride;
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager;
@property (retain, nonatomic) NSDate *exitRecordDate;
@property (retain, nonatomic) NSError *errorFetchingExitDate;
@property (nonatomic) BOOL fetchedExitDateOnLaunch;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_scheduleOperation:(id)a0;
- (id)initRecordZoneManager:(id)a0 databaseManager:(id)a1;
- (void)_setUpSubscription;
- (void)handleNotificationForSubscriptionID:(id)a0;
- (void)writeExitRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)exitRecordDateWithCompletion:(id /* block */)a0;
- (void)_evalToggleiCloudSettingsSwitch;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)a0;
- (void)deleteExitRecordWithCompletion:(id /* block */)a0;
- (id)syncCompleteRecordID;
- (id)analyticZoneRecordID;
- (long long)derivedQualityOfService;
- (id)exitConfiguration;
- (BOOL)_saltZoneCreated;
- (BOOL)_subscriptionCreated;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (void)writeSyncCompletedRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)submitCloudKitMetricWithOperationGroupName:(id)a0;
- (BOOL)_analyticZoneCreated;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)a0 analyticDictionary:(id)a1;
- (void)_scheduleMetricOperation:(id)a0;
- (id)_sharedCKUtilities;
- (id)_modifiedOpGroupName:(id)a0;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)a0 record:(id)a1 ignoreZoneNotFoundError:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_canSubmitCloudKitMetric;
- (BOOL)_canSubmitCloudKitAnalytic;
- (void)submitCloudKitMetricWithData:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (void)submitCloudKitAnalyticWithDictionary:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;

@end
