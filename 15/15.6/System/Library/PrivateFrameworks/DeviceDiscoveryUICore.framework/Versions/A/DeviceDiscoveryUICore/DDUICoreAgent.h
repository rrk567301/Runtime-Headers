@class _DDUINotificationManager, DDUIEndpointPairingListener;

@interface DDUICoreAgent : NSObject

@property (retain, nonatomic) DDUIEndpointPairingListener *endpointPairingListener;
@property (retain, nonatomic) _DDUINotificationManager *notificationManager;
@property (nonatomic) char started;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)start;
- (void)_startOnQueue;
- (void)_handleIncomingContinuityCameraConfirmation:(id)a0;
- (void)_handleIncomingPairingSession:(id)a0 pairingMessage:(id)a1;
- (void)_setupListenerIfNeededWithCompletion:(id /* block */)a0;
- (void)_showNotificationForPairingSession:(id)a0 pairingMessage:(id)a1;

@end
