@class NSSet, MCMUserIdentity, NSUUID, NSString;
@protocol MCMContainerConfiguration;

@interface MCMCommandQuery : MCMCommand <MCMParametersQuery>

@property (readonly, nonatomic) unsigned int platform;
@property (nonatomic) unsigned long long generation;
@property (readonly, nonatomic) BOOL isAboutSelf;
@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) NSSet *identifiers;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) BOOL includeInfoInResult;
@property (readonly, nonatomic) BOOL includePathInResult;
@property (readonly, nonatomic) unsigned long long sandboxExtensionType;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) BOOL includeUnowned;
@property (readonly, nonatomic) BOOL expectSingleResult;
@property (readonly, nonatomic) BOOL fuzzyMatchTransient;
@property (readonly, nonatomic) BOOL fuzzyMatchInternalUUID;
@property (readonly, nonatomic) NSUUID *internalUUID;
@property (readonly, nonatomic) BOOL extensionsUseProxiedClient;
@property (readonly, nonatomic) BOOL extensionsPolicyUsesProxiedClient;
@property (readonly, nonatomic) BOOL requireSecureByPlatformPolicy;
@property (readonly, nonatomic) BOOL includeUserManagedAssetsRelPath;
@property (readonly, nonatomic) BOOL includeCreator;
@property (readonly, nonatomic) unsigned long long part;
@property (readonly, nonatomic) NSString *partDomain;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) BOOL legacyPersonaPolicy;
@property (readonly, nonatomic) BOOL legacyExtensionPolicy;
@property (readonly, nonatomic) BOOL restrictivePersonaPolicy;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (id)_legacySetOfUserIdentitiesForIdentifiers:(id)a0 targetUserIdentity:(id)a1 containerConfig:(id)a2 error:(id *)a3;
- (BOOL)_checkIfSecureContainer:(id)a0 prefixes:(id)a1 error:(id *)a2;
- (id)_containerIdentifiersIncludingUnownedForContainerConfig:(id)a0 canAccessAllContainers:(BOOL *)a1 error:(id *)a2;
- (id)_queryPlanWithIdentifiers:(id)a0 containerConfig:(id)a1 clientIdentity:(id)a2 error:(id *)a3;
- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)_executeQueryPlan:(id)a0 resultContainers:(id)a1 error:(id *)a2;
- (id)_executeQueryForContainerIdentity:(id)a0 error:(id *)a1;
- (void)_finalizeWithContainers:(id)a0 error:(id)a1;
- (id)_setOfAvailableUserIdentitiesWithError:(id *)a0;
- (BOOL)_checkIfSecureContainers:(id)a0 error:(id *)a1;
- (id)_setOfUserIdentities;
- (BOOL)_checkIfSecureURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
