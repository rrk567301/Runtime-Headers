@class CDPContext, CDPStateController, SFSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationCDPSetup : NSObject {
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double metricSeconds;
@property (retain, nonatomic) id presentingViewController;
@property (retain, nonatomic) SFSession *sfSession;
@property (nonatomic) BOOL skipSetupRequest;
@property (nonatomic) BOOL skipEscrowFetches;
@property (nonatomic) BOOL isRepair;

- (void)_run;
- (void)invalidate;
- (id)init;
- (void)_activate;
- (void)_complete:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (int)_runCDPApprovalServerStart;
- (int)_runCDPSetupRequest;

@end
