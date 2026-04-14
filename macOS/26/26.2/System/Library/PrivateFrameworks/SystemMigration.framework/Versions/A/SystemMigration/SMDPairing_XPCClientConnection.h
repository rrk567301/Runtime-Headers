@class SMPairingManager;

@interface SMDPairing_XPCClientConnection : SMDXPCClientConnection <SMDPairingProtocol, SMPairingEventsListener>

@property (retain) SMPairingManager *pairingManager;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (id)listener;
- (void).cxx_destruct;
- (id)init;
- (void)pairingCompletedWithSystem:(id)a0;
- (void)pairingFailedWithError:(id)a0;
- (void)pairingInProgressWithSystem;
- (void)pairingStartedWithCode:(id)a0;
- (void)startPairing;
- (void)stopPairing;

@end
