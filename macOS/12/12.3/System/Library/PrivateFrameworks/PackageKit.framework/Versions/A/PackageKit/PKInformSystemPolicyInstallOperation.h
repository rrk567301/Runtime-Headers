@interface PKInformSystemPolicyInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (BOOL)informSystemPolicyReturningError:(id *)a0;

@end
