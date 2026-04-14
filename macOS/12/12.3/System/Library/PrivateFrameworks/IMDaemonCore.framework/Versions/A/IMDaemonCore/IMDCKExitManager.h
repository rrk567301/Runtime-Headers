@class IMDCKDatabaseManager, CKRecordID, NSDate, NSError, IMDRecordZoneManager, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKExitManager : IMDCKAbstractSyncController

@property (retain, nonatomic) CKRecordID *exitRecordID;
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride;
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager;
@property (retain, nonatomic) NSDate *exitRecordDate;
@property (retain, nonatomic) NSError *errorFetchingExitDate;
@property (nonatomic) BOOL fetchedExitDateOnLaunch;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_scheduleOperation:(id)a0;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)a0 analyticDictionary:(id)a1;
- (void)writeExitRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (id)initRecordZoneManager:(id)a0 databaseManager:(id)a1;
- (void)_setUpSubscription;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)a0;
- (BOOL)_saltZoneCreated;
- (BOOL)_subscriptionCreated;
- (id)exitConfiguration;
- (void)_evalToggleiCloudSettingsSwitch;
- (long long)derivedQualityOfService;
- (void)writeSyncCompletedRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)submitCloudKitMetricWithData:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (BOOL)_analyticZoneCreated;
- (void)submitCloudKitAnalyticWithDictionary:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (id)_sharedCKUtilities;
- (void)_scheduleMetricOperation:(id)a0;
- (BOOL)_canSubmitCloudKitMetric;
- (id)_modifiedOpGroupName:(id)a0;
- (id)syncCompleteRecordID;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)a0 record:(id)a1 ignoreZoneNotFoundError:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_canSubmitCloudKitAnalytic;
- (id)analyticZoneRecordID;
- (void)handleNotificationForSubscriptionID:(id)a0;
- (void)exitRecordDateWithCompletion:(id /* block */)a0;
- (void)deleteExitRecordWithCompletion:(id /* block */)a0;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (void)submitCloudKitMetricWithOperationGroupName:(id)a0;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;

@end
