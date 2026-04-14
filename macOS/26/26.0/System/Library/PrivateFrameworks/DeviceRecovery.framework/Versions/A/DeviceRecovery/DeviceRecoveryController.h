@class NSString, NSXPCConnection;

@interface DeviceRecoveryController : NSObject

@property (retain) NSXPCConnection *serviceConnection;
@property (nonatomic) BOOL testModeEnabled;
@property BOOL userAuthenticated;
@property BOOL dataVolumeMounted;
@property BOOL networkAvailable;
@property BOOL recoveryBrainLoaded;
@property BOOL issuesScanComplete;
@property BOOL repairableIssuesFound;
@property BOOL recoveryComplete;
@property (retain) NSString *mainOSLanguageCode;
@property (readonly) BOOL isRunningInDeviceRecoveryEnvironment;
@property (readonly) NSString *deviceRecoveryEntryReason;
@property (nonatomic) BOOL userApprovedAnalyticsSubmission;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)shutdownWithCompletion:(id /* block */)a0;
- (void)_shutdownWithCompletion:(id /* block */)a0 andReboot:(BOOL)a1 andSetNeRDBoot:(BOOL)a2;
- (void)disableRecoveryAutoBoot:(id /* block */)a0;
- (void)enableTestModeWithCompletion:(id /* block */)a0;
- (void)loadAccessibilitySettingsToDefaultsWithCompletion:(id /* block */)a0;
- (void)loadRecoveryBrainWithCompletion:(id /* block */)a0;
- (void)processAttributes:(id)a0;
- (void)rebootToNeRDWithCompletion:(id /* block */)a0;
- (void)rebootWithCompletion:(id /* block */)a0;
- (void)recoverDeviceFromBootedOS:(id /* block */)a0;
- (void)recoverDeviceWithCompletion:(id /* block */)a0;
- (void)reportNetworkAvailabilityWithCompletion:(id /* block */)a0;
- (void)resetRecovery:(id /* block */)a0;
- (void)scanForIssuesWithCompletion:(id /* block */)a0;
- (void)userAuthenticated:(id)a0 completion:(id /* block */)a1;

@end
