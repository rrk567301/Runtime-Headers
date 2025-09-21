@class NSArray, MCMClientIdentity;

@interface MCMResultQuery : MCMResultBase

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) char includePath;
@property (readonly, nonatomic) char includeInfo;
@property (readonly, nonatomic) char issueSandboxExtensions;
@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) char legacyPersonaPolicy;
@property (readonly, nonatomic) char legacyExtensionPolicy;
@property (readonly, nonatomic) char includeUserManagedAssetsRelPath;
@property (readonly, nonatomic) char includeCreator;
@property (readonly, nonatomic) char extensionsUseProxiedClient;
@property (readonly, nonatomic) char extensionsPolicyUsesProxiedClient;
@property (nonatomic) char issuedAnyExtensions;

- (void).cxx_destruct;
- (void)_compileContainerDataForIndex:(unsigned long long)a0 container:(struct container_object_s **)a1 infos:(id)a2 tokens:(id)a3;
- (char)encodeResultOntoReply:(id)a0;
- (id)initWithContainers:(id)a0 clientIdentity:(id)a1 issueSandboxExtensions:(char)a2 includePath:(char)a3 includeInfo:(char)a4 legacyPersonaPolicy:(char)a5 legacyExtensionPolicy:(char)a6 includeUserManagedAssetsRelPath:(char)a7 includeCreator:(char)a8 extensionsUseProxiedClient:(char)a9 extensionsPolicyUsesProxiedClient:(char)a10;

@end
