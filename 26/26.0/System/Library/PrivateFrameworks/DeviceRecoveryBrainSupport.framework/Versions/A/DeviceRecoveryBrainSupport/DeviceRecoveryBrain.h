@class NSString, NSXPCConnection, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface DeviceRecoveryBrain : NSObject <NSXPCListenerDelegate, DeviceRecoveryBrainServiceInterface>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL testModeEnabled;
@property (nonatomic) int issuesScanResultOverride;
@property (nonatomic) int recoveryResultOverride;
@property (nonatomic) BOOL isRunningInDeviceRecoveryEnvironment;
@property (nonatomic) BOOL isInternalBuild;
@property (retain, nonatomic) NSString *systemDataVolumeMountPath;
@property (retain, nonatomic) NSString *userDataVolumeMountPath;
@property (retain, nonatomic) NSString *updateVolumeMountPath;
@property (retain, nonatomic) NSString *userHomeDirectory;
@property (nonatomic) BOOL freeSpaceThresholdOverridden;
@property (retain, nonatomic) NSObject<OS_os_transaction> *keepAliveTransaction;
@property (readonly, nonatomic) BOOL isExternalBrain;
@property (retain, nonatomic) NSNumber *freeSpaceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connectionInvalidated;
- (id)init;
- (void)connectionInterrupted;
- (void).cxx_destruct;
- (id)startService:(id)a0;
- (void)recoverDevice:(id /* block */)a0;
- (void)resetRecovery:(id /* block */)a0;
- (void)scanForIssues:(id /* block */)a0;
- (void)checkFreeSpace:(id /* block */)a0;
- (BOOL)client:(id)a0 hasBooleanEntitlement:(id)a1;
- (BOOL)clientHasRecoveryBrainControllerEntitlement:(id)a0;
- (void)configureBrain:(id)a0 completion:(id /* block */)a1;
- (id)filesInDirectory:(id)a0 withPrefix:(id)a1 extension:(id)a2 excludeSymlinks:(BOOL)a3;
- (id)initExternalBrain:(BOOL)a0;
- (void)reclaimFreeSpace:(id /* block */)a0;
- (void)recoverDeviceFromBootedOS:(id)a0 userUnlocked:(BOOL)a1 completion:(id /* block */)a2;
- (id)recoverTestFiles;
- (id)scanForTestFiles;

@end
