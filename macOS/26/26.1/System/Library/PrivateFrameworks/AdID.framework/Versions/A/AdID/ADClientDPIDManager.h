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

- (void)continueReconcileWithAccountStatus:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (BOOL)canGenerateDPID;
- (id)subscriptionIdentifier;
- (void)setiCloudAccountSubscribed:(BOOL)a0;
- (void)finishOperation:(unsigned long long)a0;
- (void)handlePushNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleCloudKitError:(id)a0;
- (void)resetDPID:(id /* block */)a0;
- (void)setupiCloudSubscription:(id /* block */)a0;
- (void)startOperation:(unsigned long long)a0;
- (void)updateActiveRecordICloudDSID;
- (BOOL)devicePersonalizedAdsEnabled;
- (void)writeDPIDtoKeychain;
- (void)removeDPIDfromiCloud:(id /* block */)a0;
- (id)conformDPIDToUseWithRecord:(id)a0 legacyRecord:(id)a1;
- (BOOL)canContinueProcessing:(id)a0;
- (id)primaryiCloudAccountAltDSID;
- (void)setIsDPIDLocalTo:(BOOL)a0;
- (id)containerWithIDString:(id)a0;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (void)resolveAccountVsStoredManateeState:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)reconcileDPID:(id /* block */)a0;
- (void)retryIfNeeded:(id /* block */)a0;
- (void)saveDPIDtoiCloud:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldSyncDPID;
- (void)resetEncryptedZone:(id /* block */)a0;
- (void)teardowniCloudSubscription:(id /* block */)a0;
- (void)syncDPIDWithiCloud:(id /* block */)a0;
- (BOOL)isLoggedIntoiTunes;
- (id)generateDPID;
- (id)secureContainer;
- (void)backupFlowForCloudKitWorkAtTime:(id)a0 with:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setupLocalDPID;
- (BOOL)isRestrictedByApple;
- (id)operationQueueLog;
- (void)createErrorForPrivateDB:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)fetchDPIDfromiCloud:(id /* block */)a0;
- (BOOL)iCloudAccountSubscribed;
- (id)insecureContainer;

@end
