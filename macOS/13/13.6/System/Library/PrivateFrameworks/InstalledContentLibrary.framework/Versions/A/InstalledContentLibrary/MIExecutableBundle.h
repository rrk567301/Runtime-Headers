@class NSURL, NSString, NSArray, MICodeSigningInfo, NSError, MIPluginKitBundle, MIBundleContainer;

@interface MIExecutableBundle : MIBundle

@property (retain, nonatomic) NSError *wk2AppBundleError;
@property (retain, nonatomic) MICodeSigningInfo *codeSigningInfo;
@property (retain, nonatomic) NSError *codeSigningInfoError;
@property (retain, nonatomic) NSString *watchKitAppExecutableHash;
@property (retain, nonatomic) MIPluginKitBundle *watchKitPlugin;
@property (nonatomic) unsigned long long lsInstallType;
@property (retain, nonatomic) NSArray *executableImageSlices;
@property (weak, nonatomic) MIBundleContainer *bundleContainer;
@property (readonly, copy, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSURL *executableURL;
@property (readonly, nonatomic) struct __CFBundle { } *cfBundle;
@property (readonly, nonatomic) NSURL *rootSinfURL;
@property (readonly, nonatomic) NSURL *rootSuppURL;
@property (readonly, nonatomic) NSURL *rootSupfURL;
@property (readonly, nonatomic) BOOL needsSinf;
@property (readonly, nonatomic) BOOL hasSinf;
@property (readonly, nonatomic) unsigned long long dataContainerContentClass;
@property (readonly, nonatomic) unsigned int maxLinkedSDKVersion;
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic) unsigned long long estimatedMemoryUsageToValidate;
@property (readonly, nonatomic) unsigned long long compatibilityState;
@property (readonly, nonatomic) unsigned long long codeSignatureVerificationState;

+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;
+ (BOOL)isGrandfatheredNonContainerizedForSigningInfo:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForTesting;
- (id)_codeSigningInfoFromMCM;
- (BOOL)_hasNoConflictWithSystemAppsForSigningInfo:(id)a0 error:(id *)a1;
- (BOOL)_hasNonContainerizingEntitlement:(id)a0 checkSeatbeltProfiles:(BOOL)a1;
- (int)_installEmbeddedProvisioningProfileAtURL:(id)a0 withProgress:(id /* block */)a1;
- (BOOL)_validateWithError:(id *)a0;
- (BOOL)allowsAppExtensionsNotInExtensionCache;
- (void)bestEffortRollbackSinfData:(id)a0;
- (id)bundleSignatureVersionWithError:(id *)a0;
- (id)codeSigningInfoByValidatingResources:(BOOL)a0 performingOnlineAuthorization:(BOOL)a1 ignoringCachedSigningInfo:(BOOL)a2 checkingTrustCacheIfApplicable:(BOOL)a3 skippingProfileIDValidation:(BOOL)a4 error:(id *)a5;
- (id)fairPlaySinfInfoWithError:(id *)a0;
- (BOOL)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)a0 error:(id *)a1;
- (BOOL)hasPlatformSlice:(unsigned int)a0;
- (id)initWithBundleInContainer:(id)a0 withExtension:(id)a1 error:(id *)a2;
- (int)installEmbeddedProvisioningProfileWithProgress:(id /* block */)a0;
- (int)installMacStyleEmbeddedProvisioningProfileWithProgress:(id /* block */)a0;
- (id)lsInstallTypeWithError:(id *)a0;
- (BOOL)makeExecutableWithError:(id *)a0;
- (BOOL)needsDataContainer;
- (BOOL)onlyHasPlatformSlice:(unsigned int)a0;
- (void)removeSinf;
- (BOOL)replicateRootSinfWithError:(id *)a0;
- (void)setBundleParentDirectoryURL:(id)a0;
- (id)updateAndValidateSinf:(id)a0 error:(id *)a1;
- (id)updateAndValidateSinf:(id)a0 withRollback:(BOOL)a1 error:(id *)a2;
- (BOOL)updateMCMWithCodeSigningInfoAsAdvanceCopy:(BOOL)a0 withError:(id *)a1;
- (BOOL)updateSinfWithData:(id)a0 error:(id *)a1;
- (BOOL)validateSinfWithError:(id *)a0;

@end
