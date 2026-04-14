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

- (id)init;
- (void).cxx_destruct;
- (id)setAuthorization:(id)a0;
- (void)endSession;
- (BOOL)setActiveApplet:(id)a0 key:(id)a1 outError:(id *)a2;
- (BOOL)startCardEmulationAuthorization:(id)a0 deferred:(BOOL)a1 error:(id *)a2;
- (BOOL)stopCardEmulation:(id *)a0;
- (id)sendRKEFunction:(id)a0 rkeAction:(id)a1 authorization:(id)a2;
- (id)cancelRKEFunction:(id)a0;
- (id)appletWithIdentifier:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)createSessionHandoffToken:(id *)a0;
- (id)activateWithToken:(id)a0;
- (id)allApplets;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)a0;
- (void)handleSessionSuspended:(id)a0;
- (void)handleSessionResumed;
- (id)_getAppletsFromNFCD;
- (BOOL)sendPassthroughMessage:(id)a0 error:(id *)a1;
- (BOOL)sendSignedPassthroughMessage:(id)a0 authorization:(id)a1 reply:(id /* block */)a2;
- (BOOL)sendPassthroughMessage:(id)a0 reply:(id /* block */)a1;
- (BOOL)getSignedMessage:(id)a0 authorization:(id)a1 reply:(id /* block */)a2;
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
