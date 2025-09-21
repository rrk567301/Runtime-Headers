@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MDMClientCore : NSObject

@property (nonatomic) unsigned long long channelType;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)clientWithChannelType:(unsigned long long)a0;

- (id)pushToken;
- (void)getOrgTokenForMAIDWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)getWatchPairingTokenForPhoneID:(id)a0 watchID:(id)a1 securityToken:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithChannelType:(unsigned long long)a0;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (void)evaluateMigrationStatusWithPollFromServer:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)reauthenticationComplete;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)blockMDMCommandsWithCompletion:(id /* block */)a0;
- (void)_debug_nagForMigrationWithCompletion:(id /* block */)a0;
- (void)_debug_stopNaggingForMigration;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)depPushTokenWithCompletion:(id /* block */)a0;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (BOOL)hasSetPersonaMappingForRestore;
- (BOOL)isAwaitingUserConfigured;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (void)monitorDEPPushTokenIfNeededWithCompletion:(id /* block */)a0;
- (void)monitorDEPPushTokenWithCompletion:(id /* block */)a0;
- (void)nagWithID:(id)a0 clientID:(id)a1 schedule:(id)a2 title:(id)a3 message:(id)a4 notificationTitle:(id)a5 notificationMessage:(id)a6 actionTitle:(id)a7 actionURL:(id)a8 dismissTitle:(id)a9 dismissURL:(id)a10 deadlineURL:(id)a11 completion:(id /* block */)a12;
- (void)notifyNewConfiguration;
- (void)preserveAppsWithCompletion:(id /* block */)a0;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeUnusedPreservedAppsWithCompletion:(id /* block */)a0;
- (void)requestDeviceObliterationWithPreserveDataPlan:(BOOL)a0 disallowProximitySetup:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)a0;
- (void)requestReturnToServiceObliterationWithPreserveDataPlan:(BOOL)a0 disallowProximitySetup:(BOOL)a1 mdmProfileData:(id)a2 wifiProfileData:(id)a3 revertToSnapshotName:(id)a4 bootstrapToken:(id)a5 completionHandler:(id /* block */)a6;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)sendMDMAuthenticationRequestWithCompletionHandler:(id /* block */)a0;
- (void)sendMDMCheckOutRequestWithCompletionHandler:(id /* block */)a0;
- (void)simulateDEPPushWithCompletion:(id /* block */)a0;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void)syncDEPPushTokenWithDelay:(double)a0 completion:(id /* block */)a1;
- (void)touchWithCompletion:(id /* block */)a0;
- (void)unblockMDMCommandsWithCompletion:(id /* block */)a0;
- (void)uprootMDM;

@end
