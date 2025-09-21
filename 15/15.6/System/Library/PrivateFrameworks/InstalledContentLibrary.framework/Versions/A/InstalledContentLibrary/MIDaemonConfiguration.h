@class NSString, NSURL;

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) unsigned int installQOSOverride;
@property (readonly, nonatomic) char skipDeviceFamilyCheck;
@property (readonly, nonatomic) char skipThinningCheck;
@property (readonly, nonatomic) char allowPatchWithoutSinf;
@property (readonly, nonatomic) char codeSigningEnforcementIsDisabled;
@property (readonly, nonatomic) char localSigningIsUnrestricted;
@property (readonly, nonatomic) long long nSimultaneousInstallations;
@property (readonly, nonatomic) char deviceHasPersonas;
@property (readonly, nonatomic) char requireEligibilityChecksForAppsInDevelopment;
@property (readonly, nonatomic) NSString *iOSSupportVersion;
@property (readonly, nonatomic) NSURL *legacyExtensionCachePlist;
@property (readonly, nonatomic) NSURL *stagingRootForSystemContent;
@property (readonly, nonatomic) NSURL *stagingRootForUserContent;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initForTesting;
- (id)stagingRootForDevice:(int)a0 url:(id)a1 identifier:(unsigned long long *)a2 error:(id *)a3;
- (id)stagingRootForIdentifier:(unsigned long long)a0;
- (id)stagingRootForURL:(id)a0 identifier:(unsigned long long *)a1 error:(id *)a2;

@end
