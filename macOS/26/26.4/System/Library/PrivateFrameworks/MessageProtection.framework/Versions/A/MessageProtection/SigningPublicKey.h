@interface SigningPublicKey : PublicKey

- (id)tetraWrapped;
- (BOOL)verifySignature:(id)a0 formatter:(id)a1;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;
- (id)description;

@end
