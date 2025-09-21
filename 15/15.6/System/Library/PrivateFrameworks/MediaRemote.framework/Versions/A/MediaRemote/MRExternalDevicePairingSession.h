@class MRCryptoPairingSessionBlockDelegate, MRCoreUtilsPairingSession;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession

@property (retain, nonatomic) MRCoreUtilsPairingSession *pairingSession;
@property (retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (readonly, nonatomic) char hasExchangedMessage;
@property (readonly, nonatomic, getter=isUsingSystemPairing) char usingSystemPairing;
@property (readonly, nonatomic) unsigned long long state;

- (char)isValid;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (void)setDelegate:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)pairedDevices;
- (char)isPaired;
- (void)handlePairingFailureWithStatus:(int)a0;
- (id)decryptData:(id)a0 withError:(id *)a1;
- (char)deleteIdentityWithError:(id *)a0;
- (id)encryptData:(id)a0 withError:(id *)a1;
- (void)handlePairingExchangeData:(id)a0 completion:(id /* block */)a1;
- (id)removePeer;
- (id)updatePeer;

@end
