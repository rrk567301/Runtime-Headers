@class MIExecutableBundle, MICodeSigningInfo;

@interface MICodeSigningVerifier : NSObject

@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (nonatomic) BOOL allowAdhocSigning;
@property (nonatomic) BOOL logResourceVerificationErrors;
@property (nonatomic) BOOL validateResources;
@property (nonatomic) BOOL performOnlineAuthorization;
@property (nonatomic) BOOL validateUsingDetachedSignature;
@property (nonatomic) BOOL verifyTrustCachePresence;
@property (nonatomic) BOOL skipProfileIDValidation;
@property (readonly, nonatomic) MICodeSigningInfo *signingInfo;

+ (id)codeSigningVerifierForBundle:(id)a0;
+ (id)_validateSignatureAndCopyInfoForURL:(id)a0 withOptions:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)_loadSystemDetachedSignatureForBundleID:(id)a0 error:(id *)a1;
- (BOOL)_getMICodeSignerTypeFromMISInfoDict:(id)a0 codeSignerType:(unsigned long long *)a1 profileType:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)performValidationWithError:(id *)a0;

@end
