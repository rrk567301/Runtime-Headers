@class NSArray, MCMClientIdentity, NSString;

@interface MCMResultQuery : MCMResultBase

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) BOOL includePath;
@property (readonly, nonatomic) BOOL includeInfo;
@property (readonly, nonatomic) unsigned long long sandboxExtensionType;
@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) BOOL legacyPersonaPolicy;
@property (readonly, nonatomic) BOOL legacyExtensionPolicy;
@property (readonly, nonatomic) BOOL includeUserManagedAssetsRelPath;
@property (readonly, nonatomic) BOOL includeCreator;
@property (readonly, nonatomic) BOOL extensionsUseProxiedClient;
@property (readonly, nonatomic) BOOL extensionsPolicyUsesProxiedClient;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) unsigned long long part;
@property (readonly, nonatomic) NSString *partDomain;
@property (nonatomic) BOOL issuedAnyExtensions;

- (BOOL)encodeResultOntoReply:(id)a0;
- (BOOL)_compileContainerDataForIndex:(unsigned long long)a0 container:(struct container_object_s **)a1 infos:(id)a2 tokens:(id)a3 error:(id *)a4;
- (id)initWithContainers:(id)a0 clientIdentity:(id)a1 sandboxExtensionType:(unsigned long long)a2 includePath:(BOOL)a3 includeInfo:(BOOL)a4 legacyPersonaPolicy:(BOOL)a5 legacyExtensionPolicy:(BOOL)a6 includeUserManagedAssetsRelPath:(BOOL)a7 includeCreator:(BOOL)a8 extensionsUseProxiedClient:(BOOL)a9 extensionsPolicyUsesProxiedClient:(BOOL)a10 generation:(unsigned long long)a11 part:(unsigned long long)a12 partDomain:(id)a13;
- (id)_tokenForContainerPath:(id)a0 containerIdentity:(id)a1;
- (void).cxx_destruct;

@end
