@class NFApplet, NSSet, NSDictionary;
@protocol NFLoyaltyAndPaymentSessionDelegate;

@interface NFLoyaltyAndPaymentSession : NFSession {
    char _pendingServerRequest;
    char _vasTransactionInProgress;
    id<NFLoyaltyAndPaymentSessionDelegate> _delegate;
    char _emulationActive;
    NSDictionary *_appletsById;
    unsigned long long _numActiveSEs;
    char _fieldNotificationSent;
}

@property id<NFLoyaltyAndPaymentSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NSSet *activeKeys;
@property (readonly, retain) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;

- (void).cxx_destruct;
- (void)endSession;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (char)enablePlasticCardMode:(char)a0 error:(id *)a1;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)felicaAppletState:(id)a0 error:(id *)a1;
- (char)setActivePaymentApplet:(id)a0 error:(id *)a1;
- (char)setActivePaymentApplet:(id)a0 keys:(id)a1 error:(id *)a2;
- (char)setHostCards:(id)a0;
- (char)startCardEmulation:(unsigned char)a0 authorization:(id)a1 error:(id *)a2;
- (char)startDeferredCardEmulation:(unsigned char)a0 authorization:(id)a1 error:(id *)a2;
- (char)stopCardEmulation;
- (char)stopCardEmulation:(id *)a0;
- (id)transitAppletState:(id)a0 error:(id *)a1;
- (void)didDetectField:(char)a0;
- (char)_startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (char)_startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (char)_startHostCardEmulation:(id *)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)a0;
- (void)didPerformValueAddedServiceTransactions:(id)a0;
- (void)didReceiveActivityTimeout:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)a0;
- (void)didSelectValueAddedService:(char)a0;
- (void)didStartSession:(id)a0;
- (void)didStartTransaction:(id)a0;
- (char)enablePlasticCardMode:(char)a0;
- (id)felicaAppletState:(id)a0;
- (char)setActivePaymentApplet:(id)a0;
- (char)setActivePaymentApplet:(id)a0 makeDefault:(char)a1;
- (char)startCardEmulation:(unsigned char)a0 authorization:(id)a1;
- (char)startDeferredCardEmulation:(unsigned char)a0 authorization:(id)a1;
- (char)startExpressMode:(id *)a0;

@end
