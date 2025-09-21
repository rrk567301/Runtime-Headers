@class NSSet, MCMUserIdentity, NSUUID;
@protocol MCMContainerConfiguration;

@interface MCMXPCMessageQuery : MCMXPCMessageWithContainerClassBase <MCMParametersQuery>

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

- (void).cxx_destruct;
- (unsigned int)disposition;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
