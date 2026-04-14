@class NSString, PKPackageSpecifier;

@interface PKRunPackageScriptInstallOperation : PKInstallOperation {
    NSString *_scriptType;
    PKPackageSpecifier *_currentPackageSpecifier;
    unsigned int _original_bootstrap_port;
    unsigned int _original_security_session_port;
}

+ (id)_sanitizeEnvironment:(id)a0;

- (void)dealloc;
- (id)description;
- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)initForScriptType:(id)a0 request:(id)a1 sandbox:(id)a2 analyzer:(id)a3;
- (BOOL)_shouldSkipScriptForPackageSpecifier:(id)a0;
- (id)_scriptTaskEnvironmentForPackage:(id)a0 destination:(id)a1 scriptName:(id)a2;
- (void)_switchToUserContext;
- (void)_restoreContext;
- (SEL)_scriptPathSelectorForPackage:(id)a0 returningScriptName:(id *)a1;
- (int)_runPackageScript:(id)a0 packageSpecifier:(id)a1 component:(id)a2 scriptName:(id)a3 error:(id *)a4;

@end
