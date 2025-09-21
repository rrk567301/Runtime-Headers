@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)pairingManager;
+ (char)systemPairingAvailable;

- (id)addPeer;
- (char)shouldAutoRetryPairingExchange:(id)a0;
- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (id)mediaRemotePairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)removePeer;
- (id)updatePeer;

@end
