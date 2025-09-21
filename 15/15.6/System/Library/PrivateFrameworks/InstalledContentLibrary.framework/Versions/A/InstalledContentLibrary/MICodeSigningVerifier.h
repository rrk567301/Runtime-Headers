@class MIExecutableBundle, MICodeSigningInfo;

@interface MICodeSigningVerifier : NSObject

@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (nonatomic) char allowAdhocSigning;
@property (nonatomic) char logResourceVerificationErrors;
@property (nonatomic) char validateResources;
@property (nonatomic) char performOnlineAuthorization;
@property (nonatomic) char validateUsingDetachedSignature;
@property (nonatomic) char verifyTrustCachePresence;
@property (nonatomic) char skipProfileIDValidation;
@property (readonly, nonatomic) MICodeSigningInfo *signingInfo;

+ (id)_validateSignatureAndCopyInfoForURL:(id)a0 withOptions:(id)a1 error:(id *)a2;
+ (id)codeSigningVerifierForBundle:(id)a0;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (char)_getMICodeSignerTypeFromMISInfoDict:(id)a0 codeSignerType:(unsigned long long *)a1 profileType:(unsigned long long *)a2 error:(id *)a3;
- (id)_loadSystemDetachedSignatureForBundleID:(id)a0 error:(id *)a1;
- (char)performValidationWithError:(id *)a0;

@end
