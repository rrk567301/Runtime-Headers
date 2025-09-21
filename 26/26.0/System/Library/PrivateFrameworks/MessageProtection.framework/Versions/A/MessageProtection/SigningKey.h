@class SigningPublicKey;

@interface SigningKey : FullKey

@property (retain, nonatomic) SigningPublicKey *_publicKey;

- (id)signData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)description;
- (id)tetraWrapped;
- (void).cxx_destruct;

@end
