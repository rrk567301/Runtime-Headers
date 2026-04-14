@class NSString, NSDictionary, NSSet, NSURL;

@interface MCMContainerConfiguration : MCMPlistReadOnly <MCMContainerConfiguration_Internal, MCMContainerConfiguration>

@property (readonly, nonatomic) BOOL supportedOnPlatform;
@property (readonly, nonatomic) BOOL autoRollsPathOnBuildUpdate;
@property (readonly, nonatomic) BOOL handledDirectly;
@property (readonly, nonatomic) BOOL handledByProxy;
@property (readonly, nonatomic) BOOL usesGlobalBundleUserIdentity;
@property (readonly, nonatomic) BOOL usesGlobalSystemUserIdentity;
@property (readonly, nonatomic) BOOL personaAndUserSpecific;
@property (readonly, nonatomic) BOOL migrateCodeSignInfoFromMetadataToDB;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForMatchingTeamIDPrefix;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForAppStoreSigned;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForPlatformBinary;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForiPadAppsOnMac;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForProfileValidatedEntitlements;
@property (readonly, nonatomic) BOOL honorGroupContainerEntitlementForTestFlight;
@property (readonly, nonatomic) BOOL registerDynamicProtectionWithRestrictedEntitlement;
@property (readonly, nonatomic) BOOL hasDynamicProtection;
@property (readonly, nonatomic) BOOL enforceBasedOnDynamicProtectionState;
@property (readonly, nonatomic) BOOL enforceBasedOnStrictSignatureScrutiny;
@property (readonly, nonatomic) BOOL ownerIssuedSandboxExtension;
@property (readonly, nonatomic) BOOL cleanTransientsEachBoot;
@property (readonly, nonatomic) BOOL alwaysRequireSignatureScrutiny;
@property (readonly, nonatomic) BOOL singleOwner;
@property (readonly, nonatomic) BOOL trustAppMigrationEntitlement;
@property (readonly, nonatomic) BOOL containsUserGeneratedData;
@property (readonly, nonatomic) BOOL honorsWipeEntitlement;
@property (readonly, nonatomic) BOOL securedByPlatformPolicy;
@property (readonly, nonatomic) BOOL associatedWithParent;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *sandboxAffordances;
@property (readonly, nonatomic) NSString *requiredEntitlement;
@property (readonly, nonatomic) NSSet *genericExtensionsAllowedForClients;
@property (readonly, nonatomic) NSString *sandboxExtensionClass;
@property (readonly, nonatomic) unsigned long long normalizedContainerClass;
@property (readonly, nonatomic) NSSet *identifierPrefixesExemptFromAutomaticProtection;
@property (readonly, nonatomic) NSURL *sourceFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)disposition;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreprocessedPlist:(id)a0 name:(id)a1;
- (id)_clientIdentifiersSetFromPlistValue:(id)a0 error:(id *)a1;
- (unsigned long long)_containerClassFromPlistValue:(id)a0;
- (id)_containerIdentifierSetFromPlistValue:(id)a0 error:(id *)a1;
- (id)_identifierPrefixesExemptFromAutomaticProtectionFromPlistValue:(id)a0 error:(id *)a1;
- (unsigned long long)_normalizedContainerClassFromPlistValue:(id)a0 defaultContainerClass:(unsigned long long)a1;
- (id)_requiredEntitlementFromPlistValue:(id)a0 error:(id *)a1;
- (id)_sandboxAffordancesFromPlistValue:(id)a0 error:(id *)a1;
- (id)_sandboxExtensionClassFromPlistValue:(id)a0;
- (id)debugDescriptionWithIndentString:(id)a0;
- (BOOL)isEqualToContainerConfig:(id)a0;
- (BOOL)override_initNonBoolPropertiesWithPlist:(id)a0 error:(id *)a1;

@end
