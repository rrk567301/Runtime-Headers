@class SFDeviceOperationCDPSetup, NSString, HMHomeManager, SFDevice, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVSession : NSObject {
    BOOL _activateCalled;
    int _finishState;
    BOOL _invalidateCalled;
    int _proxSetupActiveToken;
    BOOL _useSFSession;
    int _preflightWiFiState;
    int _preflightiTunesState;
    int _preflightHomeKitState;
    NSString *_iTunesUserID;
    SFSession *_sfSession;
    int _sfSessionState;
    int _preAuthState;
    int _basicConfigState;
    BOOL _iCloudAccountMatches;
    int _pairSetupState;
    double _pairSetupSecs;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    HMHomeManager *_homeManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForHomeHandler;
@property (copy, nonatomic) id /* block */ promptForHomeiCloudHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ promptForRoomHandler;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_cleanup;
- (void)_run;
- (void)pairSetupTryPIN:(id)a0;
- (int)_runSFSessionStart;
- (int)_runCDPSetup;
- (void)_reportProgress:(unsigned int)a0 info:(id)a1;
- (int)_runFinish:(BOOL)a0;
- (int)_runPreflightWiFi;
- (int)_runPreflightiTunes;
- (int)_runPreflightHomeKit;
- (int)_runPreAuth;
- (int)_runPairSetup;
- (int)_runBasicConfig;
- (void)_reportError:(id)a0 label:(id)a1;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)a0 error:(id)a1;
- (void)_runBasicConfigRequest;
- (id)_videoSubscriberAccountData;
- (void)_runBasicConfigResponse:(id)a0 error:(id)a1;
- (BOOL)_verifyiCloudMatch:(unsigned long long)a0 error:(id *)a1;
- (void)homeiCloudEnable;
- (void)homeKitSelectHome:(id)a0;
- (void)homeKitSelectRoom:(id)a0;
- (void)_homeKitUpdateiCloudSwitchState:(BOOL)a0;

@end
