@class SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession, NSObject, ACAccountStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceRepairService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    SFService *_sfService;
    SFSession *_sfSession;
    ACAccountStore *_accountStore;
    BOOL _prefCDPEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    unsigned long long _startTicks;
    unsigned long long _startProblemFlags;
    NSObject<OS_dispatch_source> *_repairMetricsTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long problemFlags;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)_sfServiceStart;
- (void)_authenticateAccount:(id)a0 serviceType:(long long)a1 companionDevice:(id)a2 anisetteDataProvider:(id)a3 completion:(id /* block */)a4;
- (void)_authenticateAccount:(id)a0 serviceType:(long long)a1 password:(id)a2 completion:(id /* block */)a3;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleGetProblemsRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionStarted:(id)a0;
- (unsigned long long)_lastProblemRecorded;
- (void)_recordNewProblem:(unsigned long long)a0;
- (void)_repairMetricsDailyPush;
- (void)_repairMetricsNewProblemFlags:(unsigned long long)a0;
- (id)_whenLastProblemWasRecorded;

@end
