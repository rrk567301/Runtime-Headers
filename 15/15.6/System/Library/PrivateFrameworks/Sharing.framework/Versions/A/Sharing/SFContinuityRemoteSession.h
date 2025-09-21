@class SFSession, SFDevice, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFContinuityRemoteSession : NSObject {
    char _activateCalled;
    id /* block */ _activateHandler;
    char _invalidateCalled;
    NSMutableArray *_messageQueue;
    char _pairVerifyDone;
    char _pairVerifyRunning;
    SFSession *_sfSession;
    char _sfSessionActivated;
    char _started;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_run;
- (void)_sfSessionStart;
- (void)_sendCommand:(int)a0 options:(id)a1;
- (void)_sendQueuedMesssages;
- (void)sendCommand:(int)a0;
- (void)sendCommand:(int)a0 options:(id)a1;

@end
