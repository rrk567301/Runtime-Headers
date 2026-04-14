@class PKPackageSpecifier;

@interface PKVerifyMASPayloadInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _appStoreRequest;
    BOOL _testFlightRequest;
    BOOL _atomicUpdate;
}

- (int)installState;
- (void)main;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)currentPackageSpecifier;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (BOOL)_shouldSkipDRCheck;
- (BOOL)_verifyCodeSignaturesForPackageSpecifier:(id)a0 error:(id *)a1;

@end
