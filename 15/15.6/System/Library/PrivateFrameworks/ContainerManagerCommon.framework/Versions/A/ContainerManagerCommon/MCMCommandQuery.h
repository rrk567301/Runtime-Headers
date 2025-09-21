@class NSSet, MCMUserIdentity, NSUUID;
@protocol MCMContainerConfiguration;

@interface MCMCommandQuery : MCMCommand <MCMParametersQuery>

@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) NSSet *identifiers;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) char createIfNecessary;
@property (readonly, nonatomic) char includeInfoInResult;
@property (readonly, nonatomic) char includePathInResult;
@property (readonly, nonatomic) char issueSandboxExtensions;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) char transient;
@property (readonly, nonatomic) char includeUnowned;
@property (readonly, nonatomic) char expectSingleResult;
@property (readonly, nonatomic) char fuzzyMatchTransient;
@property (readonly, nonatomic) char fuzzyMatchInternalUUID;
@property (readonly, nonatomic) NSUUID *internalUUID;
@property (readonly, nonatomic) char extensionsUseProxiedClient;
@property (readonly, nonatomic) char extensionsPolicyUsesProxiedClient;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) char legacyPersonaPolicy;
@property (readonly, nonatomic) char legacyExtensionPolicy;
@property (readonly, nonatomic) char includeUserManagedAssetsRelPath;
@property (readonly, nonatomic) char includeCreator;
@property (readonly, nonatomic) unsigned int expectedPersonaKernelID;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)_containerIdentifiersIncludingUnownedForContainerClass:(unsigned long long)a0 canAccessAllContainers:(char *)a1 error:(id *)a2;
- (id)_executeQueryForContainerIdentity:(id)a0 error:(id *)a1;
- (char)_executeQueryPlan:(id)a0 resultContainers:(id)a1 error:(id *)a2;
- (void)_finalizeWithContainers:(id)a0 error:(id)a1;
- (id)_queryPlanWithIdentifiers:(id)a0 isGroupClass:(char)a1 clientIdentity:(id)a2 error:(id *)a3;
- (id)_setOfUserIdentities;
- (id)_setOfUserIdentitiesForIdentifiers:(id)a0 isGroupClass:(char)a1;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
