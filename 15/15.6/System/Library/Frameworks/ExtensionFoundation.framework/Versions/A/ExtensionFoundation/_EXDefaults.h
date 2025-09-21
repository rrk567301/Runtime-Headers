@class NSSet, NSString;

@interface _EXDefaults : NSObject

@property (readonly) char implementsNSExtension;
@property (readonly) char queryPredicatesEvaluatedOutOfProcess;
@property (readonly) char useLSDExtensionKitServiceForDiscovery;
@property (readonly) char preferInProcessDiscovery;
@property (readonly) char inProcessLaunch;
@property (readonly) char useItemProviderXPCConnection;
@property (readonly) char appleInternal;
@property (readonly) char allowsAppleInternalComponents;
@property (readonly) char supportExtensionKitConfigPath;
@property (readonly) char hostRequiresEntitlements;
@property (readonly) char enforceLegacyExtensionPointAllowList;
@property (readonly) char allowSimulatedJetsam;
@property (readonly) char allowPrototypeAPI;
@property (readonly) char allowPrototypeSPI;
@property (readonly) char assertOnDisallowedPrototypeAPIUse;
@property (readonly) char assertOnDisallowedPrototypeSPIUse;
@property (readonly) char startUIHostingSessionImmediately;
@property (readonly) char enforceXPCCacheCodeSigning;
@property (readonly) NSSet *errorTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *extensionItemTypes;
@property (readonly) NSSet *itemProviderTypes;
@property (readonly) NSSet *imageTypes;
@property (readonly) NSSet *alwaysEnabledExtensionBundleIdentifiers;
@property (readonly) NSString *defaultSandboxProfileName;
@property (readonly) char forceSandbox;
@property (readonly) NSSet *allowedUnsandboxedExtensionPoints;
@property (readonly) char platformShouldExhibitEmbeddedBehavior;
@property (readonly) char disableLaunchdCheckinTimeout;
@property (readonly) char queryAllowsDuplicates;

+ (id)sharedInstance;

- (id)_init;
- (id)imageTypes;
- (char)inProcessLaunch;
- (char)allowPrototypeAPI;
- (char)allowPrototypeSPI;
- (char)allowSimulatedJetsam;
- (id)allowedUnsandboxedExtensionPoints;
- (char)allowsAppleInternalComponents;
- (id)alwaysEnabledExtensionBundleIdentifiers;
- (char)assertOnDisallowedPrototypeAPIUse;
- (char)assertOnDisallowedPrototypeSPIUse;
- (id)defaultSandboxProfileName;
- (char)disableLaunchdCheckinTimeout;
- (char)enforceLegacyExtensionPointAllowList;
- (char)enforceXPCCacheCodeSigning;
- (id)errorTypes;
- (id)extensionItemTypes;
- (char)forceSandbox;
- (char)hostRequiresEntitlements;
- (char)implementsNSExtension;
- (id)itemProviderTypes;
- (char)platformShouldExhibitEmbeddedBehavior;
- (id)plistAndValueTypes;
- (id)plistTypes;
- (char)queryAllowsDuplicates;
- (char)startUIHostingSessionImmediately;
- (char)supportExtensionKitConfigPath;

@end
