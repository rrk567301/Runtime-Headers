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

- (BOOL)canContinueProcessing:(id)a0;
- (BOOL)devicePersonalizedAdsEnabled;
- (void)continueReconcileWithAccountStatus:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (id)insecureContainer;
- (void)saveDPIDtoiCloud:(id)a0 completionHandler:(id /* block */)a1;
- (id)operationQueueLog;
- (void)resetEncryptedZone:(id /* block */)a0;
- (void)resolveAccountVsStoredManateeState:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)handleCloudKitError:(id)a0;
- (void)setupiCloudSubscription:(id /* block */)a0;
- (void)createErrorForPrivateDB:(id)a0 completionHandler:(id /* block */)a1;
- (id)conformDPIDToUseWithRecord:(id)a0 legacyRecord:(id)a1;
- (BOOL)shouldSyncDPID;
- (void)teardowniCloudSubscription:(id /* block */)a0;
- (void)finishOperation:(unsigned long long)a0;
- (BOOL)iCloudAccountSubscribed;
- (void)setIsDPIDLocalTo:(BOOL)a0;
- (id)containerWithIDString:(id)a0;
- (void).cxx_destruct;
- (void)writeDPIDtoKeychain;
- (void)retryIfNeeded:(id /* block */)a0;
- (void)backupFlowForCloudKitWorkAtTime:(id)a0 with:(id /* block */)a1;
- (id)generateDPID;
- (id)secureContainer;
- (void)startOperation:(unsigned long long)a0;
- (id)init;
- (BOOL)canGenerateDPID;
- (void)setiCloudAccountSubscribed:(BOOL)a0;
- (void)resetDPID:(id /* block */)a0;
- (void)setupLocalDPID;
- (id)subscriptionIdentifier;
- (void)reconcileDPID:(id /* block */)a0;
- (void)fetchDPIDfromiCloud:(id /* block */)a0;
- (void)handlePushNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateActiveRecordICloudDSID;
- (BOOL)isRestrictedByApple;
- (void)syncDPIDWithiCloud:(id /* block */)a0;
- (id)primaryiCloudAccountAltDSID;
- (BOOL)isLoggedIntoiTunes;
- (void)removeDPIDfromiCloud:(id /* block */)a0;
- (unsigned long long)primaryiCloudAccountSecurityLevel;

@end
