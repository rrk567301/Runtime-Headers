@class NSDate, CKRecordID, NSString, NSObject, CKRecordZoneID, NSMutableArray, CKContainer;
@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject {
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
}

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *recordIDLegacy;
@property (retain, nonatomic) CKContainer *privateContainer;
@property (nonatomic) char isPrivateContainerSecure;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *DPID;
@property (nonatomic) char updateInProgress;
@property (retain, nonatomic) NSMutableArray *operationsInProgress;
@property (nonatomic) char sandboxEnvironment;
@property (nonatomic) char supportsDeviceToDeviceEncryption;
@property unsigned long long dpidReconcileState;
@property (retain) NSDate *dpidReconcileStartDate;
@property (readonly, nonatomic) char isTest;

+ (id)sharedInstance;
+ (id)DPIDOperationTypeToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)subscriptionIdentifier;
- (id)secureContainer;
- (char)canGenerateDPID;
- (void)startOperation:(unsigned long long)a0;
- (void)backupFlowForCloudKitWorkAtTime:(id)a0 with:(id /* block */)a1;
- (char)canContinueProcessing:(id)a0;
- (id)conformDPIDToUseWithRecord:(id)a0 legacyRecord:(id)a1;
- (id)containerWithIDString:(id)a0;
- (void)continueReconcileWithAccountStatus:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)createErrorForPrivateDB:(id)a0 completionHandler:(id /* block */)a1;
- (char)devicePersonalizedAdsEnabled;
- (void)fetchDPIDfromiCloud:(id /* block */)a0;
- (void)finishOperation:(unsigned long long)a0;
- (id)generateDPID;
- (void)handleCloudKitError:(id)a0;
- (void)handlePushNotification:(id)a0 completionHandler:(id /* block */)a1;
- (char)iCloudAccountSubscribed;
- (id)insecureContainer;
- (char)isLoggedIntoiTunes;
- (char)isRestrictedByApple;
- (id)operationQueueLog;
- (id)primaryiCloudAccountAltDSID;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (void)reconcileDPID:(id /* block */)a0;
- (void)removeDPIDfromiCloud:(id /* block */)a0;
- (void)resetDPID:(id /* block */)a0;
- (void)resetEncryptedZone:(id /* block */)a0;
- (void)resolveAccountVsStoredManateeState:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)retryIfNeeded:(id /* block */)a0;
- (void)saveDPIDtoiCloud:(id)a0 completionHandler:(id /* block */)a1;
- (void)setIsDPIDLocalTo:(char)a0;
- (void)setiCloudAccountSubscribed:(char)a0;
- (void)setupLocalDPID;
- (void)setupiCloudSubscription:(id /* block */)a0;
- (char)shouldSyncDPID;
- (void)syncDPIDWithiCloud:(id /* block */)a0;
- (void)teardowniCloudSubscription:(id /* block */)a0;
- (void)updateActiveRecordICloudDSID;
- (void)writeDPIDtoKeychain;

@end
