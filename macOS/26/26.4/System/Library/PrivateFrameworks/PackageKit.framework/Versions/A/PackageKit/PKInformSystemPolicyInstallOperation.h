@interface PKInformSystemPolicyInstallOperation : PKInstallOperation {
    BOOL _isBeforeInstallScripts;
}

- (void)main;
- (int)installState;
- (BOOL)informSystemPolicyReturningError:(id *)a0;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
