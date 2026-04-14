@interface _LSDTrustedSignatureClient : _LSDClient <_LSDTrustedSignatureProtocol>

- (void)trust:(BOOL)a0 URL:(id)a1 completionHandler:(id /* block */)a2;
- (void)getIsTrustedForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTrustExpirationDateForURL:(id)a0;
- (id)trustedSignatureForURL:(id)a0 error:(id *)a1;
- (BOOL)isURLQuarantined:(id)a0;

@end
