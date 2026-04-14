@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (BOOL)systemPairingAvailable;
+ (id)pairingManager;

- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (BOOL)shouldAutoRetryPairingExchange:(id)a0;
- (id)addPeer;
- (id)removePeer;
- (id)updatePeer;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)mediaRemotePairedDevices;

@end
