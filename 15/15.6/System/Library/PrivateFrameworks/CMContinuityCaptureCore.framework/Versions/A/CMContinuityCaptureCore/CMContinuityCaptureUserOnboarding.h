@class AVContinuityCaptureOnBoardingManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureUserOnboarding : NSObject {
    long long _state;
    char _enforceOnboarding;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pairedActiveProcessPIDsByBundleID;
    NSMutableDictionary *_clientProcessPIDByBundleIDWithStreamIntent;
    AVContinuityCaptureOnBoardingManager *_continuityCaptureOnBoardingUIManager;
    char _invalidated;
    char _logTryItNowAnalytics;
}

@property (readonly, nonatomic) char invalidated;
@property (readonly) long long state;
@property (nonatomic) char logTryItNowAnalytics;

+ (void)invalidate;
+ (id)sharedInstance;
+ (id)bundleIDForClient:(id)a0;
+ (char)clientHasCameraUseIntent:(int)a0;
+ (char)hasBuiltInCamera;
+ (id)stateToString:(long long)a0;
+ (char)validContinuityCameraDeviceToOnboard:(char *)a0;

- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (void)updateState;
- (void)_registerStreamingClient:(int)a0 clientBundleID:(id)a1;
- (void)_reportClientState:(long long)a0 forClient:(id)a1;
- (void)_unRegisterStreamingClient:(int)a0 clientBundleID:(id)a1;
- (void)displayOnBoardingUI:(char)a0 allVideoEffectsSupported:(char)a1;
- (char)hasValidClientForTryItNow;
- (char)remindLaterActiveForClientsWithStreamIntent;
- (char)remindLaterActiveForPairedClients;
- (void)reportClientState:(long long)a0 forClient:(id)a1;
- (void)setupDeviceStatusNotification;
- (void)setupSystemStatusNotification;
- (char)streamIntentForPairedClients;

@end
