@interface LAKeyStoreSecretCoder : NSObject

- (void)wrapData:(id)a0 completion:(id /* block */)a1;
- (void)unwrapData:(id)a0 completion:(id /* block */)a1;
- (id)_generateNonce;
- (BOOL)_isCoderAvailable;

@end
