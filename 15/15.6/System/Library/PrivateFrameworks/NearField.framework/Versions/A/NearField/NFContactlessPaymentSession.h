@class NFApplet, NSString, NSDictionary;
@protocol NFContactlessPaymentSessionDelegate;

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks> {
    NSDictionary *_appletsById;
    id<NFContactlessPaymentSessionDelegate> _delegate;
    unsigned long long _numActiveSEs;
    char _fieldNotificationSent;
}

@property id<NFContactlessPaymentSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endSession;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)felicaAppletState:(id)a0 error:(id *)a1;
- (char)stopCardEmulation;
- (char)stopCardEmulation:(id *)a0;
- (id)transitAppletState:(id)a0 error:(id *)a1;
- (void)didDetectField:(char)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)a0;
- (void)didReceiveActivityTimeout:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)a0;
- (void)didStartSession:(id)a0;
- (void)didStartTransaction:(id)a0;
- (id)felicaAppletState:(id)a0;
- (char)setActivePaymentApplet:(id)a0 authorization:(id)a1;
- (char)setActivePaymentApplet:(id)a0 authorization:(id)a1 error:(id *)a2;
- (char)setActivePaymentApplet:(id)a0 makeDefault:(char)a1 authorization:(id)a2;
- (char)startCardEmulationWithAuthorization:(id)a0;
- (char)startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (char)startDeferredCardEmulationWithAuthorization:(id)a0;
- (char)startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;

@end
