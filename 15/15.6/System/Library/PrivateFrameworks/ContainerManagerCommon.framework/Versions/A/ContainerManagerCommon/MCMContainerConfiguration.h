@class NSString, NSDictionary, NSURL;

@interface MCMContainerConfiguration : MCMPlistReadOnly <MCMContainerConfiguration>

@property (readonly, nonatomic) char supportedOnPlatform;
@property (readonly, nonatomic) char autoRollsPathOnBuildUpdate;
@property (readonly, nonatomic) char handledDirectly;
@property (readonly, nonatomic) char handledByProxy;
@property (readonly, nonatomic) char usesGlobalBundleUserIdentity;
@property (readonly, nonatomic) char usesGlobalSystemUserIdentity;
@property (readonly, nonatomic) char personaAndUserSpecific;
@property (readonly, nonatomic) char migrateCodeSignInfoFromMetadataToDB;
@property (readonly, nonatomic) char honorGroupContainerEntitlementForMatchingTeamIDPrefix;
@property (readonly, nonatomic) char honorGroupContainerEntitlementForAppStoreSigned;
@property (readonly, nonatomic) char honorGroupContainerEntitlementForPlatformBinary;
@property (readonly, nonatomic) char honorGroupContainerEntitlementForiPadAppsOnMac;
@property (readonly, nonatomic) char honorGroupContainerEntitlementForProfileValidatedEntitlements;
@property (readonly, nonatomic) char honorGroupContainerEntitlementForTestFlight;
@property (readonly, nonatomic) char supportsProtectedContainerWithRestrictedEntitlement;
@property (readonly, nonatomic) char ownerIssuedSandboxExtension;
@property (readonly, nonatomic) char cleanTransientsEachBoot;
@property (readonly, nonatomic) char alwaysRequireSignatureScrutiny;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *sandboxAffordances;
@property (readonly, nonatomic) NSURL *sourceFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)disposition;
- (id)initWithPreprocessedPlist:(id)a0 name:(id)a1;
- (unsigned long long)_containerClassFromPlistValue:(id)a0;
- (id)_containerIdentifierSetFromPlistValue:(id)a0 error:(id *)a1;
- (id)_sandboxAffordancesFromPlistValue:(id)a0 error:(id *)a1;
- (id)debugDescriptionWithIndentString:(id)a0;
- (char)isEqualToContainerConfig:(id)a0;
- (char)override_initNonBoolPropertiesWithPlist:(id)a0 error:(id *)a1;

@end
