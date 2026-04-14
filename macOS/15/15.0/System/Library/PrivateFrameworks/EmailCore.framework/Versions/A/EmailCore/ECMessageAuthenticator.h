@class ECDKIMVerifier, ECDMARCVerifier;

@interface ECMessageAuthenticator : NSObject

@property (readonly, nonatomic) ECDKIMVerifier *dkimVerifier;
@property (readonly, nonatomic) ECDMARCVerifier *dmarcVerifier;

- (id)init;
- (void).cxx_destruct;
- (id)authenticateMessageData:(id)a0 sender:(id)a1;
- (BOOL)_isErrorStatus:(long long)a0;
- (id)_verifyMessage:(id)a0 withDKIMSignatureHeaders:(id)a1 sender:(id)a2 identifierAlignment:(long long)a3 dkimVerifierOptions:(long long)a4;
- (id)_verifyMessage:(id)a0 withSender:(id)a1 strictlyAlignedDKIMSignatureHeaders:(id)a2 relaxedAlignedDKIMSignatureHeaders:(id)a3 dkimVerifierOptions:(long long)a4;
- (id)initWithDKIMVerifier:(id)a0 dmarcVerifier:(id)a1;
- (id)initWithDNSClient:(id)a0;

@end
