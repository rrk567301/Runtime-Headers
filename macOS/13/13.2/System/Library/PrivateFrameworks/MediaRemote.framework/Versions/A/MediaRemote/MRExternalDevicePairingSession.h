@class MRCryptoPairingSessionBlockDelegate, MRCoreUtilsPairingSession;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession

@property (retain, nonatomic) MRCoreUtilsPairingSession *pairingSession;
@property (retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (readonly, nonatomic) BOOL hasExchangedMessage;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property (readonly, nonatomic) unsigned long long state;

- (BOOL)isValid;
- (void)open;
- (void)close;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)pairedDevices;
- (BOOL)isPaired;
- (id)removePeer;
- (id)updatePeer;
- (void)handlePairingExchangeData:(id)a0 completion:(id /* block */)a1;
- (void)handlePairingFailureWithStatus:(int)a0;
- (id)encryptData:(id)a0 withError:(id *)a1;
- (id)decryptData:(id)a0 withError:(id *)a1;
- (BOOL)deleteIdentityWithError:(id *)a0;

@end
