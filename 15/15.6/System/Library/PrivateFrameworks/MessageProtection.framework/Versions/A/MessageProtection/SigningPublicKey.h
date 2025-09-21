@interface SigningPublicKey : PublicKey

- (id)description;
- (id)tetraWrapped;
- (char)verifySignature:(id)a0 formatter:(id)a1;
- (char)verifySignature:(id)a0 ofData:(id)a1;

@end
