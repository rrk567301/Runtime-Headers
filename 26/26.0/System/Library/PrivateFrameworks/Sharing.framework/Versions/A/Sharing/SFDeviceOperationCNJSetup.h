@class SKSetupCaptiveNetworkJoinClient, SKEventCaptiveNetworkPresent, SFSession, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinClient *_cnjClient;
    SKEventCaptiveNetworkPresent *_cnjEvent;
    BOOL _isShowingWebSheet;
    unsigned long long _startTicks;
    BOOL _invalidateCalled;
    NSError *_captivePathError;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isSetup;
@property (nonatomic) BOOL homePodHasCaptiveNetwork;
@property (copy, nonatomic) id /* block */ promptForConfirmationHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSError *reachabilityError;
@property (readonly, nonatomic) double metricTotalSeconds;

- (void)invalidate;
- (void)_complete:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)_handleCompletedEventWithError:(id)a0;
- (void)_handleCaptiveNetworkPresentEvent:(id)a0;
- (void)_showCaptiveSheet:(id)a0;
- (void)_startClient;
- (void)showWebSheet;

@end
