@class PKPackageSpecifier;

@interface PKVerifyMASPayloadInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _appStoreStage;
    BOOL _atomicUpdate;
}

- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (BOOL)_shouldSkipDRCheck;
- (BOOL)_verifyCodeSignaturesForPackageSpecifier:(id)a0 error:(id *)a1;

@end
