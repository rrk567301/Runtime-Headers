@class FigCaptureDisplayLayoutMonitor, NSString, FigCaptureClientApplicationStateMonitorClient, FigCaptureDeviceLockStateMonitor;

@interface FigCaptureClientApplicationStateMonitor : NSObject <FigCaptureDisplayLayoutObserver, FigCaptureDeviceLockStateObserver> {
    FigCaptureClientApplicationStateMonitorClient *_client;
    struct OpaqueFigSimpleMutex { } *_stateChangeLock;
    BOOL _isBKSApplicationStateMonitoringRequiredForClient;
    unsigned int _bksApplicationState;
    BOOL _bksApplicationStateInitialized;
    int _applicationState;
    BOOL _isLayoutMonitoringRequiredForClient;
    int _layoutState;
    BOOL _layoutStateInitialized;
    BOOL _isExternalDisplayLayoutMonitoringRequiredForClient;
    int _externalDisplayLayoutState;
    BOOL _isExternalDisplayLayoutStateInitialized;
    int _aggregateLayoutState;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
    FigCaptureDisplayLayoutMonitor *_externalDisplayLayoutMonitor;
    BOOL _isDeviceLockStateMonitoringRequiredForClient;
    BOOL _deviceIsLocked;
    BOOL _deviceLockStateInitialized;
    FigCaptureDeviceLockStateMonitor *_deviceLockStateMonitor;
    BOOL _invalid;
}

@property (readonly) NSString *applicationID;
@property (readonly) int applicationState;
@property (readonly) int clientType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)startContinuityCaptureTerminationMonitorWithHandler:(id /* block */)a0;
+ (void)startPrewarmingMonitorWithHandler:(id /* block */)a0;
+ (void)stopPrewarmingMonitor;

- (void)dealloc;
- (void)invalidate;
- (void)deviceLockStateMonitor:(id)a0 didUpdateDeviceLockState:(BOOL)a1;
- (id)initWithClientAuditToken:(struct { unsigned int x0[8]; })a0 forThirdPartyTorch:(BOOL)a1 applicationAndLayoutStateHandler:(id /* block */)a2;
- (void)layoutMonitor:(id)a0 didUpdateLayout:(id)a1;
- (void)updateApplicationState;

@end
