@class PKPackageSpecifier;

@interface PKVerifyMASPayloadInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    char _appStoreRequest;
    char _testFlightRequest;
    char _atomicUpdate;
}

- (int)installState;
- (void)main;
- (char)_boolForPreferencesKey:(id)a0 wasSet:(char *)a1;
- (char)_shouldSkipDRCheck;
- (char)_verifyCodeSignaturesForPackageSpecifier:(id)a0 error:(id *)a1;
- (id)currentPackageSpecifier;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
