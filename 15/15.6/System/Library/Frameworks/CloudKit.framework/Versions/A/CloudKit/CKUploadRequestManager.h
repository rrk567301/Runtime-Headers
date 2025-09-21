@class CKSyncEngine, CKUploadRequestPersistentStore, CKUploadRequestManagerInternals, CKUploadRequestManagerResponseActionThrottler, NSString, CKContainer;

@interface CKUploadRequestManager : NSObject

@property (class, nonatomic) char ignoreUploadRequestPushNotifications;

@property (readonly, nonatomic) CKUploadRequestManagerInternals *internals;
@property (readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property (readonly, nonatomic) CKContainer *repairContainer;
@property (readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property (readonly, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (copy) id /* block */ assetRequestCallback;
@property (copy) id /* block */ packageRequestCallback;
@property (copy) NSString *machServiceName;
@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property (nonatomic) double recurringFetchPeriod;
@property (nonatomic) double tryAgainLaterRetryTime;
@property (nonatomic) double retryableErrorRetryTime;
@property (nonatomic) double cancelledErrorRetryTime;
@property (nonatomic) double retryableErrorMaxRetryCount;
@property (nonatomic) double notificationDebouncePeriod;
@property (nonatomic) long long assetRepairSchedulerRepairBatchCountLimit;
@property (nonatomic) double assetRepairSchedulerDefaultSuspensionTime;
@property (nonatomic) long long assetRepairSchedulerRepairRetryCount;

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)unregister;
- (void)fetchServerChanges:(id /* block */)a0;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1 ignoringSystemConditions:(char)a2;
- (void)manuallyTriggerUploadRequests;
- (void)registerForItemRequests;
- (void)scheduleOrInvokeRepairsNow;
- (void)setCallback:(id /* block */)a0 forOverridePoint:(long long)a1;

@end
