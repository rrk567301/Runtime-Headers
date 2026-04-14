@class SFDeviceOperationCDPSetup, NSString, SFDeviceOperationWiFiSetup, SFDevice, NSObject, SFSession;
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

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;
@property (nonatomic) BOOL disableSilentAuth;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_reportError:(id)a0;
- (void)_run;
- (int)_runFinish;
- (int)_runGetProblems;
- (int)_runCDPSetup;
- (int)_runPairVerify;
- (int)_runPreflightWiFiEarly;
- (int)_runPreflightWiFiFull;
- (int)_runSFSessionStart;
- (int)_runWiFiSetup;

@end
