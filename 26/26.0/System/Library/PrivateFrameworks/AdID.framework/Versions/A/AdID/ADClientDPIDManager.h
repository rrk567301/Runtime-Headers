@class NSDate, CKRecordID, NSString, NSObject, CKRecordZoneID, NSMutableArray, CKContainer;
@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject {
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
}

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *recordIDLegacy;
@property (retain, nonatomic) CKContainer *privateContainer;
@property (nonatomic) BOOL isPrivateContainerSecure;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *DPID;
@property (nonatomic) BOOL updateInProgress;
@property (retain, nonatomic) NSMutableArray *operationsInProgress;
@property (nonatomic) BOOL sandboxEnvironment;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property unsigned long long dpidReconcileState;
@property (retain) NSDate *dpidReconcileStartDate;
@property (readonly, nonatomic) BOOL isTest;

+ (id)sharedInstance;
+ (id)DPIDOperationTypeToString:(unsigned long long)a0;

- (void)setiCloudAccountSubscribed:(BOOL)a0;
- (id)operationQueueLog;
- (BOOL)iCloudAccountSubscribed;
- (id)primaryiCloudAccountAltDSID;
- (BOOL)canGenerateDPID;
- (BOOL)isRestrictedByApple;
- (void)syncDPIDWithiCloud:(id /* block */)a0;
- (BOOL)shouldSyncDPID;
- (void)removeDPIDfromiCloud:(id /* block */)a0;
- (void)setupLocalDPID;
- (id)subscriptionIdentifier;
- (void)fetchDPIDfromiCloud:(id /* block */)a0;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (void)saveDPIDtoiCloud:(id)a0 completionHandler:(id /* block */)a1;
- (void)startOperation:(unsigned long long)a0;
- (void)resetEncryptedZone:(id /* block */)a0;
- (void)createErrorForPrivateDB:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleCloudKitError:(id)a0;
- (void)setIsDPIDLocalTo:(BOOL)a0;
- (id)init;
- (void)resetDPID:(id /* block */)a0;
- (void)resolveAccountVsStoredManateeState:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)updateActiveRecordICloudDSID;
- (id)containerWithIDString:(id)a0;
- (id)generateDPID;
- (void)teardowniCloudSubscription:(id /* block */)a0;
- (BOOL)isLoggedIntoiTunes;
- (BOOL)devicePersonalizedAdsEnabled;
- (id)insecureContainer;
- (void)setupiCloudSubscription:(id /* block */)a0;
- (BOOL)canContinueProcessing:(id)a0;
- (id)secureContainer;
- (void)finishOperation:(unsigned long long)a0;
- (void)reconcileDPID:(id /* block */)a0;
- (void)retryIfNeeded:(id /* block */)a0;
- (void)continueReconcileWithAccountStatus:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (id)conformDPIDToUseWithRecord:(id)a0 legacyRecord:(id)a1;
- (void)writeDPIDtoKeychain;
- (void)backupFlowForCloudKitWorkAtTime:(id)a0 with:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handlePushNotification:(id)a0 completionHandler:(id /* block */)a1;

@end
