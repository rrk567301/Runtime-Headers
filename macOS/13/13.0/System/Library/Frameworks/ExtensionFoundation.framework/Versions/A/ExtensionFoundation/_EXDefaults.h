@class NSSet, NSString;

@interface _EXDefaults : NSObject

@property (readonly) BOOL implementsNSExtension;
@property (readonly) BOOL queryPredicatesEvaluatedOutOfProcess;
@property (readonly) BOOL useLSDExtensionKitServiceForDiscovery;
@property (readonly) BOOL useLSDExtensionKitServiceForLaunch;
@property (readonly) BOOL preferInProcessDiscovery;
@property (readonly) BOOL rejectExtensionRequestsWithInsecureInputItems;
@property (readonly) BOOL requiresLoadOperatorSecureDecoding;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL allowsAppleInternalComponents;
@property (readonly) BOOL supportExtensionKitConfigPath;
@property (readonly) BOOL hostRequiresEntitlements;
@property (readonly) BOOL enforceLegacyExtensionPointAllowList;
@property (readonly) BOOL allowSimulatedJetsam;
@property (readonly) BOOL allowPrototypeAPI;
@property (readonly) BOOL allowPrototypeSPI;
@property (readonly) BOOL assertOnDisallowedPrototypeAPIUse;
@property (readonly) BOOL assertOnDisallowedPrototypeSPIUse;
@property (readonly) BOOL startUIHostingSessionImmediately;
@property (readonly) BOOL enforceXPCCacheCodeSigning;
@property (readonly) NSSet *errorTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *alwaysEnabledExtensionBundleIdentifiers;
@property (readonly) NSString *defaultSandboxProfileName;
@property (readonly) BOOL forceSandbox;
@property (readonly) NSSet *allowedUnsandboxedExtensionPoints;

+ (id)sharedInstance;

- (id)_init;
- (BOOL)implementsNSExtension;
- (BOOL)supportExtensionKitConfigPath;
- (BOOL)allowsAppleInternalComponents;
- (BOOL)hostRequiresEntitlements;
- (BOOL)enforceLegacyExtensionPointAllowList;
- (BOOL)allowSimulatedJetsam;
- (BOOL)allowPrototypeAPI;
- (BOOL)allowPrototypeSPI;
- (BOOL)assertOnDisallowedPrototypeAPIUse;
- (BOOL)assertOnDisallowedPrototypeSPIUse;
- (BOOL)startUIHostingSessionImmediately;
- (id)alwaysEnabledExtensionBundleIdentifiers;
- (BOOL)enforceXPCCacheCodeSigning;
- (BOOL)forceSandbox;
- (id)allowedUnsandboxedExtensionPoints;
- (id)defaultSandboxProfileName;

@end
