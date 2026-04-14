@class MCMUserIdentity, NSString, MCMPOSIXUser, NSURL;
@protocol MCMClientAuthorizes, MCMClientIdentity, MCMClientHasEntitlementsAllowingOperation, MCMAllowsOperation, MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMClientIdentity> {
    BOOL _testClient;
    id<MCMClientIdentity> _proximateClient;
}

@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) BOOL cached;
@property (readonly, nonatomic) id<MCMAllowsOperation> entitlementAllowance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MCMClientHasEntitlementsAllowingOperation, MCMClientAuthorizes> proximateClient;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;

+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;

- (unsigned long long)isAllowedToPerformOperationType:(unsigned long long)a0 containerIdentity:(id)a1 part:(unsigned long long)a2 partDomain:(id)a3 access:(unsigned long long)a4;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToTest;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToStartDataMigration;
- (id)clientIdentityByChangingCached:(BOOL)a0;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 proximateClient:(id)a4 auditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 sandboxed:(BOOL)a7 sandboxContainerURL:(id)a8 testClient:(BOOL)a9 kernel:(BOOL)a10;
- (id)init;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToCheckAuthorization;
- (unsigned long long)isAllowedToPerformOperationType:(unsigned long long)a0 forAllContainersOfContainerConfig:(id)a1 part:(unsigned long long)a2 partDomain:(id)a3 access:(unsigned long long)a4;
- (id)initInternal;
- (BOOL)isTestClient;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToControlCaches;
- (struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *)createLibsystemClient;
- (id)shortDescription;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (void).cxx_destruct;
- (BOOL)isAllowedToDelete;

@end
