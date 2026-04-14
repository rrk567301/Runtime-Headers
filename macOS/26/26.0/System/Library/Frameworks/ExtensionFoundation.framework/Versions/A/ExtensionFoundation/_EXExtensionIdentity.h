@class NSUUID, NSString, NSURL, LSBundleRecord, NSArray, LSApplicationExtensionRecord, NSDictionary, ISIcon;

@interface _EXExtensionIdentity : NSObject <RBSExtensionIdentityFactoryProtocol, NSSecureCoding, NSCoding, _EXExtensionRepresenting> {
    void /* unknown type, empty encoding */ _inner;
}

@property (class, nonatomic, readonly) _EXExtensionIdentity *current;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSDictionary *requiredHostEntitlements;
@property (nonatomic, readonly) NSURL *containingURL;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSURL *executableURL;
@property (nonatomic, readonly) NSDictionary *sdkDictionary;
@property (nonatomic, readonly) NSDictionary *extensionDictionary;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) unsigned char userElection;
@property (nonatomic, readonly) unsigned char defaultUserElection;
@property (nonatomic, readonly) NSString *sandboxProfileName;
@property (nonatomic, readonly) NSArray *alternateSandboxProfileNames;
@property (nonatomic, readonly) NSString *privateSandboxProfileEntitlement;
@property (nonatomic, readonly) BOOL hasSandboxEntitlement;
@property (nonatomic, readonly) BOOL disableLaunchdCheckinTimeout;
@property (nonatomic, readonly) BOOL performsUserInteractiveWork;
@property (nonatomic, readonly) BOOL requiresMultiInstance;
@property (nonatomic, readonly) BOOL launchesViaExtensionKitService;
@property (nonatomic, readonly) BOOL systemComponent;
@property (nonatomic, readonly) BOOL supportsNSExtensionPlistKeys;
@property (nonatomic, readonly) Class extensionContextClass;
@property (nonatomic, readonly) Class hostContextClass;
@property (nonatomic, readonly) Class principalClass;
@property (nonatomic, readonly) Class extensionClass;
@property (nonatomic, readonly) Class connectionHandlerClass;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) LSBundleRecord *containingBundleRecord;
@property (nonatomic, readonly) LSApplicationExtensionRecord *applicationExtensionRecord;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) ISIcon *icon;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *developerName;
@property (nonatomic, readonly) BOOL presentsUserInterface;
@property (nonatomic, readonly) BOOL requiresMacCatalystBehavior;
@property (nonatomic, readonly) BOOL requiresSceneHosting;
@property (nonatomic, readonly) BOOL requiresFBSceneHosting;
@property (nonatomic, readonly) BOOL requiresUIKitSceneHosting;
@property (nonatomic, readonly) BOOL requiresLibXPCConnection;
@property (nonatomic, readonly) BOOL requiresNetworkAttribution;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) BOOL requiresLegacyInfrastructure;
@property (nonatomic, readonly) BOOL builtForNSExtension;
@property (nonatomic, readonly) BOOL targetsSystemExtensionPoint;
@property (nonatomic, readonly) BOOL requiresHostToBeContainerApp;
@property (nonatomic, readonly) BOOL targetsServiceExtensionPoint;
@property (nonatomic, readonly) BOOL spotlightIndexable;
@property (nonatomic, readonly) NSArray *spotlightImporterIdentifiers;
@property (nonatomic, readonly) BOOL showsInExtensionsManager;
@property (nonatomic, readonly) BOOL canDisable;
@property (nonatomic, readonly) NSDictionary *nsExtensionAttributes;
@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) BOOL unelected;
@property (nonatomic, readonly) NSArray *roles;

+ (id)identityFromDataRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)enableExtension:(id)a0 host:(id)a1 error:(id *)a2;
+ (BOOL)disableExtension:(id)a0 host:(id)a1 error:(id *)a2;
+ (BOOL)disableExtension:(id)a0 error:(id *)a1;
+ (BOOL)enableExtension:(id)a0 error:(id *)a1;

- (id)makeXPCConnectionWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationExtensionRecord:(id)a0;
- (id)entitlementNamed:(id)a0 ofClass:(Class)a1;
- (id)initWithNSExtension:(id)a0 error:(id *)a1;
- (id)initWithPlugInKitProxy:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 error:(id *)a1;

@end
