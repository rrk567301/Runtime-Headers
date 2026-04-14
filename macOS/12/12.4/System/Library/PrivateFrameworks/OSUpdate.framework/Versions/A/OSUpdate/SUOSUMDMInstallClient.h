@class OSISClient, NSString, NSMutableDictionary;

@interface SUOSUMDMInstallClient : NSObject <OSISDelegateProtocol>

@property (retain) OSISClient *installClient;
@property BOOL runLoopAbort;
@property (copy) id /* block */ installBlock;
@property (retain) NSString *installerFrameworkPath;
@property BOOL forceRestart;
@property (retain) NSMutableDictionary *mdmInstallStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_authData;
- (void)_unloadInstallerSetupFramework;
- (void)prepareOSInstallDidStart;
- (void)prepareOSInstallProgess:(double)a0;
- (void)prepareOSInstallTimeRemaining:(double)a0;
- (void)prepareOSInstallMessage:(id)a0;
- (void)prepareOSInstallDidFailWithError:(id)a0;
- (void)prepareOSInstallDidSucceed;
- (void)prepareRecoveryDidStart;
- (void)prepareRecoveryDidFailWithError:(id)a0;
- (void)prepareRecoveryDidSucceed;
- (void)helperToolDied;
- (void)clientShouldRebootWithShutdownOverReboot:(BOOL)a0 withResponse:(id /* block */)a1;
- (BOOL)isMDMInitiated;
- (BOOL)initiateMajorOSUpgradeAtPath:(id)a0 toVolume:(id)a1 forceRestart:(BOOL)a2 withCompletion:(id /* block */)a3;
- (BOOL)cancelOSInstallerPreparation;

@end
