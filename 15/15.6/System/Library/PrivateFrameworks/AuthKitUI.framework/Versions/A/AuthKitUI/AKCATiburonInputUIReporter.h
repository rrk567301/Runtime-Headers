@interface AKCATiburonInputUIReporter : AKCAReporter

- (id)initWithRequestID:(id)a0;
- (void)didShowAppleID:(char)a0;
- (void)_clearMutuallyExclusiveProperties:(char)a0;
- (void)didComplete:(char)a0;
- (void)didModifyName:(char)a0;
- (void)didSelectAnonymousEmail:(char)a0;
- (void)didSelectAppleID:(char)a0;
- (void)didSelectPasswordCredential:(char)a0;
- (void)setPasswordCredentialCount:(unsigned long long)a0;

@end
