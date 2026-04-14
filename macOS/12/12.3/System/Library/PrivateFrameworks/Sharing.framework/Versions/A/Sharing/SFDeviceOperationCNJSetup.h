@class SFSession, SKSetupCaptiveNetworkJoinClient, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinClient *_cnjClient;
    BOOL _isShowingWebSheet;
    unsigned long long _startTicks;
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isSetup;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) double metricTotalSeconds;

- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_complete:(id)a0;
- (void)_startClient;
- (void)_showCaptiveSheet:(id)a0;
- (void)_dismissWebSheetSheet:(id)a0;

@end
