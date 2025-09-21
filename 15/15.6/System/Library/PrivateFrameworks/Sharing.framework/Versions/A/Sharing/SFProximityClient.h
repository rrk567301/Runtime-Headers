@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFProximityClient : NSObject <NSSecureCoding> {
    char _activateCalled;
    char _invalidateCalled;
    char _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) id /* block */ deviceUpdateHandler;
@property (nonatomic) char wantsUpdates;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) char shouldAdvertise;
@property (copy, nonatomic) id /* block */ deviceEnteredImmediateHandler;
@property (copy, nonatomic) id /* block */ deviceExitedImmediateHandler;
@property (copy, nonatomic) id /* block */ deviceEnteredNearbyHandler;
@property (copy, nonatomic) id /* block */ deviceExitedNearbyHandler;
@property (copy, nonatomic) id /* block */ deviceWasSelectedHandler;
@property (copy, nonatomic) id /* block */ deviceWillTriggerHandler;
@property (copy, nonatomic) id /* block */ deviceDidUntriggerHandler;
@property (copy, nonatomic) id /* block */ deviceWasDismissedHandlerEx;
@property (copy, nonatomic) id /* block */ deviceWasDismissedHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_dismissContentForDevice:(id)a0 completion:(id /* block */)a1;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (void)_provideContent:(id)a0 forDevice:(id)a1 force:(char)a2 completion:(id /* block */)a3;
- (void)_stopSuppressingDevice:(id)a0 completion:(id /* block */)a1;
- (void)_suppressDevice:(id)a0 completion:(id /* block */)a1;
- (void)_updateContent:(id)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)dismissContentForDevice:(id)a0 completion:(id /* block */)a1;
- (void)provideContent:(id)a0 forDevice:(id)a1 force:(char)a2 completion:(id /* block */)a3;
- (void)proximityClientDeviceDidUntriggerHandler:(id)a0;
- (void)proximityClientDeviceEnteredImmediate:(id)a0;
- (void)proximityClientDeviceEnteredNearby:(id)a0;
- (void)proximityClientDeviceExitedImmediate:(id)a0;
- (void)proximityClientDeviceExitedNearby:(id)a0;
- (void)proximityClientDeviceUpdated:(id)a0 rssi:(long long)a1 state:(long long)a2;
- (void)proximityClientDeviceWasDismissedHandler:(id)a0 reason:(long long)a1;
- (void)proximityClientDeviceWasSelectedHandler:(id)a0;
- (void)proximityClientDeviceWillTriggerHandler:(id)a0;
- (void)requestScannerTimerReset;
- (void)stopSuppressingDevice:(id)a0 completion:(id /* block */)a1;
- (void)suppressDevice:(id)a0 completion:(id /* block */)a1;
- (void)updateContent:(id)a0 forDevice:(id)a1 completion:(id /* block */)a2;

@end
