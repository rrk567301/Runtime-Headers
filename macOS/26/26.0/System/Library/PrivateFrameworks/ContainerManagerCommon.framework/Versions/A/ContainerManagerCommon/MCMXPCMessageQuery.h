@class NSSet, MCMUserIdentity, NSUUID, NSString;
@protocol MCMContainerConfiguration;

@interface MCMXPCMessageQuery : MCMXPCMessageWithContainerClassBase <MCMParametersQuery>

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

- (unsigned int)disposition;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
