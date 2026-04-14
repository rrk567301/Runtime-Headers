@class NFApplet, NSString;
@protocol NFDigitalCarKeySessionDelegate, NFDigitalCarKeySessionPassthroughDelegate;

@interface NFDigitalCarKeySession : NFSession

@property (weak) id<NFDigitalCarKeySessionPassthroughDelegate> passthroughDelegate;
@property (weak) id<NFDigitalCarKeySessionDelegate> delegate;
@property (readonly) NFApplet *activeApplet;
@property (readonly) NSString *activeKey;
@property (readonly) NFApplet *defaultApplet;
@property (readonly, nonatomic) BOOL supportsSecureRanging;

+ (id)vehicleReports:(id *)a0;
+ (id)getVehicleReports:(id *)a0;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(id)a1;
+ (id)resumeRangingForReaderIdentifier:(id)a0;
+ (id)requestAssertionForKeyID:(id)a0 options:(id)a1 outError:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)setAuthorization:(id)a0;
- (void)endSession;
- (BOOL)startCardEmulationAuthorization:(id)a0 deferred:(BOOL)a1 error:(id *)a2;
- (id)createSessionHandoffToken:(id *)a0;
- (BOOL)setActiveApplet:(id)a0 key:(id)a1 outError:(id *)a2;
- (id)sendRKEFunction:(id)a0 rkeAction:(id)a1 authorization:(id)a2;
- (void)sendRKEFunction:(id)a0 action:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (id)allApplets;
- (id)activateWithToken:(id)a0;
- (BOOL)stopCardEmulation:(id *)a0;
- (id)appletWithIdentifier:(id)a0;
- (id)cancelRKEFunction:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)a0;
- (void)handleSessionSuspended:(id)a0;
- (void)handleSessionResumed;
- (id)_getAppletsFromNFCD;
- (void)releaseSesdSession;
- (BOOL)sendPassthroughMessage:(id)a0 error:(id *)a1;
- (void)didDetectField:(BOOL)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didSelectApplet:(id)a0;
- (void)didStartTransaction:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didFailDeferredAuthorization;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didFelicaStateChange:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didReceiveActivityTimeout:(id)a0;

@end
