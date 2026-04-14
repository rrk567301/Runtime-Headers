@class SigningPublicKey;

@interface SigningKey : FullKey

@property (retain, nonatomic) SigningPublicKey *_publicKey;

- (id)publicKey;
- (id)tetraWrapped;
- (id)signData:(id)a0 error:(id *)a1;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;

@end
