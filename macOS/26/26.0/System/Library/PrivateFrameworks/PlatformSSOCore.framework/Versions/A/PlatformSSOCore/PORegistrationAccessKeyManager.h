@interface PORegistrationAccessKeyManager : POAccessKeyManager

@property (copy, nonatomic) id /* block */ completion;

- (id)init;
- (void).cxx_destruct;
- (void)listenForTokenWithCompletion:(id /* block */)a0;
- (void)performTokenOperationsWithSigningKey:(struct __SecKey { } *)a0 encryptionKey:(struct __SecKey { } *)a1 tokenId:(id)a2;

@end
