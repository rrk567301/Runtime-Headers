@class _DDUINotificationManager, _TtC21DeviceDiscoveryUICore11DDUIService, DDUIEndpointPairingListener;

@interface DDUICoreAgent : NSObject

@property (retain, nonatomic) DDUIEndpointPairingListener *endpointPairingListener;
@property (retain, nonatomic) _DDUINotificationManager *notificationManager;
@property (retain, nonatomic) _TtC21DeviceDiscoveryUICore11DDUIService *dduiService;
@property (nonatomic) BOOL started;

+ (id)sharedInstance;

- (void)_showNotificationForPairingSession:(id)a0 pairingMessage:(id)a1;
- (void)start;
- (void)stopNFCServer;
- (void)startNFCServerWithLocalIdentity:(id)a0 listenerUUID:(id)a1 remotePublicKey:(id)a2 contactID:(id)a3 deviceModel:(id)a4 deviceName:(id)a5;
- (void)_handleIncomingPairingSession:(id)a0 pairingMessage:(id)a1;
- (void)_handleIncomingContinuityCameraConfirmation:(id)a0;
- (void)_setupListenerIfNeededWithCompletion:(id /* block */)a0;
- (void)_startOnQueue;
- (void)_setupDDUIServiceIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
