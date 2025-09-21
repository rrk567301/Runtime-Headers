@interface AKCASatoriReporter : AKCAReporter

- (id)initWithRequestID:(id)a0;
- (void)didCompleteVerificationWithSuccess:(char)a0 duration:(unsigned long long)a1;
- (void)didCompleteWithSuccess:(char)a0 authorizationAlreadyComplete:(char)a1;
- (void)didPerformVerificationWithSuccess:(char)a0 duration:(unsigned long long)a1;

@end
