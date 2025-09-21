@class NSString;
@protocol MCMContainerConfiguration, MCMFileHandleHasSandboxProtection, MCMContainerPathCanBeTransient, MCMFileHandleHasOpenClose, MCMClientHasEntitlementsAllowingOperation, MCMContainerIdentityHasConfig, MCMAMFI, MCMEntitlements, MCMContainerPathHasParts, MCMContainerIdentityHasDataSeparation, MCMContainerPathHasRoot, MCMClientAuthorizes, MCMContainerIdentityHasIdentifier;

@interface MCMSandboxExtension : NSObject <MCMSandboxExtension> {
    void /* function */ identifier;
    void /* function */ clientIdentifier;
    void /* function */ clientTeamIdentifier;
    void /* function */ proximateClientIdentifier;
}

@property (nonatomic) BOOL useLegacyExtensionPolicy;
@property (nonatomic) BOOL useProxiedClientForTarget;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, readonly) id<MCMContainerPathCanBeTransient, MCMContainerPathHasParts, MCMContainerPathHasRoot> containerPath;
@property (nonatomic, readonly) id<MCMClientAuthorizes, MCMClientHasEntitlementsAllowingOperation> clientIdentity;
@property (nonatomic, readonly) id<MCMContainerIdentityHasConfig, MCMContainerIdentityHasDataSeparation, MCMContainerIdentityHasIdentifier> containerIdentity;
@property (nonatomic, readonly) id<MCMContainerConfiguration> containerConfig;
@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientTeamIdentifier;
@property (nonatomic, readonly) id<MCMEntitlements> entitlements;
@property (nonatomic, readonly) NSString *proximateClientIdentifier;
@property (nonatomic, readonly) BOOL isProxiedClient;
@property (nonatomic, retain) id<MCMFileHandleHasOpenClose, MCMFileHandleHasSandboxProtection> fhSandbox;
@property (nonatomic, retain) id<MCMAMFI> amfi;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientIdentity:(id)a0 containerPath:(id)a1 containerIdentity:(id)a2;
- (id)tokenForPart:(unsigned long long)a0 partDomain:(id)a1 error:(id *)a2;

@end
