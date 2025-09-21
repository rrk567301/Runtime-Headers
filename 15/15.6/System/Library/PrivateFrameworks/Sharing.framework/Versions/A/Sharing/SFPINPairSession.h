@class SFSession, SFService, SFDevice, NSObject, NSData;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFPINPairSession : NSObject {
    char _activateCalled;
    char _clientStarted;
    NSData *_clientSessionUUID;
    char _invalidateCalled;
    unsigned long long _heartbeatLastTicks;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    char _heartbeatSending;
    char _pairSetupDone;
    struct PairingSessionPrivate { } *_pairSetupSession;
    char _pairSetupWaitingForUser;
    char _pairVerifyDone;
    struct PairingSessionPrivate { } *_pairVerifySession;
    SFSession *_sfSession;
    char _sfSessionActivated;
    unsigned long long _startTicks;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) SFService *sfService;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_invalidate;
- (void)_completed:(int)a0;
- (void)_clientHeartbeatSend;
- (void)_clientPairSetup:(id)a0 start:(char)a1;
- (void)_clientPairVerify:(id)a0 start:(char)a1;
- (void)_clientRun;
- (void)_clientSFSessionStart;
- (void)_clientTryPIN:(id)a0;
- (void)_handleServerRequest:(id)a0;
- (void)_hearbeatTimer;
- (void)clientTryPIN:(id)a0;
- (void)handleServerHeartbeat:(id)a0;
- (void)handleServerPairSetup:(id)a0 reset:(char)a1;
- (void)handleServerPairVerify:(id)a0 reset:(char)a1;
- (void)handleServerRequest:(id)a0;

@end
