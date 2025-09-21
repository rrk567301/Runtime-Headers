@interface LAKeyStoreSecretCoder : NSObject

- (id)_generateNonce;
- (char)_isCoderAvailable;
- (void)unwrapData:(id)a0 completion:(id /* block */)a1;
- (void)wrapData:(id)a0 completion:(id /* block */)a1;

@end
