@class NSURL, NSString, NSArray, MICodeSigningInfo, NSError, MIPluginKitBundle, MIBundleContainer;

@interface MIExecutableBundle : MIBundle

@property (retain, nonatomic) NSError *wk2AppBundleError;
@property (retain, nonatomic) MICodeSigningInfo *codeSigningInfo;
@property (retain, nonatomic) NSError *codeSigningInfoError;
@property (retain, nonatomic) NSString *watchKitAppExecutableHash;
@property (retain, nonatomic) MIPluginKitBundle *watchKitPlugin;
@property (nonatomic) unsigned long long lsInstallType;
@property (nonatomic) unsigned int sinfDataType;
@property (nonatomic) char sinfDataTypeIsSet;
@property (retain, nonatomic) NSArray *executableImageSlices;
@property (weak, nonatomic) MIBundleContainer *bundleContainer;
@property (readonly, copy, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSURL *executableURL;
@property (readonly, nonatomic) NSURL *relativeExecutablePath;
@property (readonly, nonatomic) struct __CFBundle { } *cfBundle;
@property (readonly, nonatomic) NSURL *rootSinfURL;
@property (readonly, nonatomic) NSURL *rootSuppURL;
@property (readonly, nonatomic) NSURL *rootSupfURL;
@property (readonly, nonatomic) char needsSinf;
@property (readonly, nonatomic) char hasSinf;
@property (readonly, nonatomic) unsigned long long dataContainerContentClass;
@property (readonly, nonatomic) unsigned int maxLinkedSDKVersion;
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic) unsigned long long estimatedMemoryUsageToValidate;
@property (readonly, nonatomic) unsigned long long compatibilityState;
@property (readonly, nonatomic) unsigned long long codeSignatureVerificationState;

+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;
+ (char)isGrandfatheredNonContainerizedForSigningInfo:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForTesting;
- (char)_validateWithError:(id *)a0;
- (id)executableImageSlicesWithError:(id *)a0;
- (char)setLaunchWarningData:(id)a0 withError:(id *)a1;
- (id)_codeSigningInfoFromMCM;
- (char)_hasNoConflictWithSystemAppsForSigningInfo:(id)a0 error:(id *)a1;
- (char)_hasNonContainerizingEntitlement:(id)a0 checkSeatbeltProfiles:(char)a1;
- (int)_installEmbeddedProvisioningProfileAtURL:(id)a0 withProgress:(id /* block */)a1;
- (id)_nameListForPlatformSet:(id)a0;
- (char)allowsAppleAppExtensionsNotInExtensionCache;
- (void)bestEffortRollbackSinfData:(id)a0;
- (id)bundleSignatureVersionWithError:(id *)a0;
- (id)codeSigningInfoByValidatingResources:(char)a0 performingOnlineAuthorization:(char)a1 ignoringCachedSigningInfo:(char)a2 checkingTrustCacheIfApplicable:(char)a3 skippingProfileIDValidation:(char)a4 error:(id *)a5;
- (id)enumerateDylibsWithBlock:(id /* block */)a0;
- (char)executableExistsWithError:(id *)a0;
- (id)executablePlatformsWithError:(id *)a0;
- (id)fairPlaySinfInfoWithError:(id *)a0;
- (char)getSinfDataType:(unsigned int *)a0 withError:(id *)a1;
- (char)hasExecutableSliceForCPUType:(int)a0 subtype:(int)a1 error:(id *)a2;
- (char)hasExecutableSliceForPlatform:(unsigned int)a0 error:(id *)a1;
- (char)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)a0 forPersona:(id)a1 error:(id *)a2;
- (id)initWithBundleInContainer:(id)a0 withExtension:(id)a1 error:(id *)a2;
- (int)installEmbeddedProvisioningProfileWithProgress:(id /* block */)a0;
- (int)installMacStyleEmbeddedProvisioningProfileWithProgress:(id /* block */)a0;
- (id)lsInstallTypeWithError:(id *)a0;
- (char)makeExecutableWithError:(id *)a0;
- (char)needsDataContainer;
- (char)onlyHasExecutableSlicesForPlatform:(unsigned int)a0 error:(id *)a1;
- (void)removeSinf;
- (char)replicateRootSinfWithError:(id *)a0;
- (void)setBundleParentDirectoryURL:(id)a0;
- (char)setSinfDataType:(unsigned int)a0 withError:(id *)a1;
- (id)updateAndValidateSinf:(id)a0 error:(id *)a1;
- (id)updateAndValidateSinf:(id)a0 withRollback:(char)a1 error:(id *)a2;
- (char)updateMCMWithCodeSigningInfoAsAdvanceCopy:(char)a0 withError:(id *)a1;
- (char)updateSinfWithData:(id)a0 error:(id *)a1;
- (char)validateSinfWithError:(id *)a0;

@end
