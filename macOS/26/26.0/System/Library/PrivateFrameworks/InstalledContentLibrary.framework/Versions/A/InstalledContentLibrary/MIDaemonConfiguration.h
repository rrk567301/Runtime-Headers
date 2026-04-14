@class NSString, NSURL;

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) unsigned int installQOSOverride;
@property (readonly, nonatomic) BOOL skipDeviceFamilyCheck;
@property (readonly, nonatomic) BOOL skipThinningCheck;
@property (readonly, nonatomic) BOOL allowPatchWithoutSinf;
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled;
@property (readonly, nonatomic) BOOL localSigningIsUnrestricted;
@property (readonly, nonatomic) long long nSimultaneousInstallations;
@property (readonly, nonatomic) BOOL deviceHasPersonas;
@property (readonly, nonatomic) BOOL requireEligibilityChecksForAppsInDevelopment;
@property (readonly, nonatomic) BOOL relaxMetadataBundleRequirementForMacApps;
@property (readonly, nonatomic) BOOL relaxMetadataBundleSigningIDMatchRequirement;
@property (readonly, nonatomic) BOOL relaxGatekeeperPolicyRequirement;
@property (readonly, nonatomic) BOOL allowAdhocSignedMetadataBundle;
@property (readonly, nonatomic) NSString *iOSSupportVersion;
@property (readonly, nonatomic) NSURL *legacyExtensionCachePlist;

+ (id)sharedInstance;

- (id)init;
- (id)initForTesting;
- (void).cxx_destruct;

@end
