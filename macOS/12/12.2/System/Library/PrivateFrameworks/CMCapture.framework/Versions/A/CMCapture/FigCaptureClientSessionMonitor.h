@class FigCaptureDisplayLayoutMonitor, NSString, FigCaptureClientSessionMonitorClient, FigCaptureDeviceLockStateMonitor;

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver, FigCaptureDeviceLockStateObserver> {
    FigCaptureClientSessionMonitorClient *_client;
    struct OpaqueFigSimpleMutex { } *_stateChangeLock;
    BOOL _isBKSApplicationStateMonitoringRequiredForClient;
    unsigned int _bksApplicationState;
    BOOL _bksApplicationStateInitialized;
    int _applicationState;
    BOOL _isLayoutMonitoringRequiredForClient;
    int _layoutState;
    BOOL _layoutStateInitialized;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
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
+ (BOOL)_isSupportedExtensionClientType:(int)a0;
+ (int)_applicationStateForBKSApplicationState:(unsigned int)a0 clientType:(int)a1;
+ (int)_applicationStateForClientLayoutState:(int)a0 clientType:(int)a1;
+ (void)startPrewarmingMonitorWithHandler:(id /* block */)a0;
+ (void)stopPrewarmingMonitor;

- (void)dealloc;
- (void)invalidate;
- (id)initWithAVConferenceClientApplicationIDs:(id)a0 applicationAndLayoutStateHandler:(id /* block */)a1 interruptionHandler:(id /* block */)a2;
- (id)_initWithClient:(id)a0;
- (id)loggingPrefix;
- (int)_resolveApplicationState;
- (id)_resolveApplicationID;
- (void)_updateClientStateCondition:(void *)a0 newValue:(id)a1;
- (void)layoutMonitor:(id)a0 didUpdateLayoutWithForegroundApps:(id)a1 obscuredApps:(id)a2 transitioningApps:(id)a3 pipApps:(id)a4;
- (void)deviceLockStateMonitor:(id)a0 didUpdateDeviceLockState:(BOOL)a1;
- (id)initWithClientAuditToken:(struct { unsigned int x0[8]; })a0 forThirdPartyTorch:(BOOL)a1 applicationAndLayoutStateHandler:(id /* block */)a2 interruptionHandler:(id /* block */)a3;

@end
