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
- (BOOL)cancelOSInstallerPreparation;
- (void)clientShouldRebootWithShutdownOverReboot:(BOOL)a0 withResponse:(id /* block */)a1;
- (void)helperToolDied;
- (BOOL)initiateMajorOSUpgradeAtPath:(id)a0 toVolume:(id)a1 forceRestart:(BOOL)a2 withCompletion:(id /* block */)a3;
- (BOOL)isMDMInitiated;
- (void)prepareOSInstallDidFailWithError:(id)a0;
- (void)prepareOSInstallDidStart;
- (void)prepareOSInstallDidSucceed;
- (void)prepareOSInstallMessage:(id)a0;
- (void)prepareOSInstallProgess:(double)a0;
- (void)prepareOSInstallTimeRemaining:(double)a0;
- (void)prepareRecoveryDidFailWithError:(id)a0;
- (void)prepareRecoveryDidStart;
- (void)prepareRecoveryDidSucceed;

@end
