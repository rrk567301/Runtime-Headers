@interface _TtC15FindMyBluetoothP33_FB9F492088B4C388E3479FD29311B1A941DelegateTrampoline_CBPairingAgentDelegate : NSObject <CBPairingAgentDelegate> {
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ pairingAgent;
}

- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (void)pairingAgent:(id)a0 peerDidRequestPairing:(id)a1 type:(long long)a2 passkey:(id)a3;
- (id)init;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void).cxx_destruct;

@end
