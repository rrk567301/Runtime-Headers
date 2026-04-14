@class NSString, NSURL;

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (readonly, nonatomic) unsigned int installQOSOverride;
@property (readonly, nonatomic) BOOL skipDeviceFamilyCheck;
@property (readonly, nonatomic) BOOL skipThinningCheck;
@property (readonly, nonatomic) BOOL allowPatchWithoutSinf;
@property (readonly, nonatomic) BOOL codeSigningEnforcementIsDisabled;
@property (readonly, nonatomic) BOOL localSigningIsUnrestricted;
@property (readonly, nonatomic) long long nSimultaneousInstallations;
@property (readonly, nonatomic) BOOL isSharediPad;
@property (readonly, nonatomic) NSString *iOSSupportVersion;
@property (readonly, nonatomic) NSURL *legacyExtensionCachePlist;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initForTesting;

@end
