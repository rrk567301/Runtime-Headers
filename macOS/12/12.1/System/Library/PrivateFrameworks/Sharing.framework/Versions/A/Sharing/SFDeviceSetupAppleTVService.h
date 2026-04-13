@class SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFClient, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVService : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    BOOL _prefCDPEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_handleSessionStarted:(id)a0;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handlePreAuthRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleBasicConfigRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_reportProgress:(unsigned int)a0 info:(id)a1;

@end
