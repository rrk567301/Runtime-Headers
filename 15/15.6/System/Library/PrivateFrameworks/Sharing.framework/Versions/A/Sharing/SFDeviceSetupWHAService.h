@class SFService, SFSession, NSObject, SFDeviceOperationHandlerCDPSetup;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHAService : NSObject {
    char _activateCalled;
    char _invalidateCalled;
    char _prefCDPEnabled;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) char needsCDPRepair;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_sfServiceStart;
- (void)_handleInfoExchange:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleRequest:(id)a0 flags:(unsigned int)a1 session:(id)a2 responseHandler:(id /* block */)a3;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionStarted:(id)a0;

@end
