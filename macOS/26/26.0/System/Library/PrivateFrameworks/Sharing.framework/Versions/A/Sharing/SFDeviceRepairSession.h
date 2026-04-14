@class SFDeviceOperationCDPSetup, NSString, NSDictionary, SFDeviceOperationWiFiSetup, SFDevice, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _preflightWiFiEarlyState;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    unsigned long long _peerFeatureFlags;
    NSString *_peerSSID;
    unsigned long long _peerProblemFlags;
    int _pairVerifyState;
    unsigned long long _pairVerifyType;
    BOOL _sessionSecured;
    int _getProblemsState;
    unsigned long long _problemFlags;
    NSString *_peerOSBuild;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    BOOL _wifiIsCaptive;
    int _finishState;
}

@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (nonatomic) long long operationType;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (nonatomic) NSDictionary *preferredWiFiConfiguration;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;
@property (nonatomic) BOOL disableSilentAuth;

- (void)_cleanup;
- (void)_run;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (int)_runFinish;
- (int)_runGetProblems;
- (BOOL)_remotePeerNeedsAppleIDRepair;
- (void)_reportError:(id)a0 isPreflight:(BOOL)a1;
- (void)_reportRepairResultMetrics:(id)a0;
- (int)_runAppleIDSetupRepair;
- (int)_runCDPSetup;
- (int)_runPairVerify;
- (int)_runPreflightWiFiEarly;
- (int)_runPreflightWiFiFull;
- (int)_runSFSessionStart;
- (int)_runWiFiSetup;

@end
