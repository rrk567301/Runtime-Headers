@class MCMUserIdentity, NSString, MCMPOSIXUser, NSURL;
@protocol MCMAMFI, MCMClientIdentity, MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMClientIdentity> {
    Class _amfiClass;
    id<MCMAMFI> _amfi;
    char _testClient;
}

@property (retain, nonatomic, setter=setAMFIClass:) Class amfiClass;
@property (readonly, nonatomic, getter=isTestClient) char testClient;
@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) char sandboxed;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) id<MCMClientIdentity> proximateClient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) char kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;
@property (readonly, nonatomic) char cached;
@property (readonly, nonatomic) id<MCMAMFI> amfi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;
+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initInternal;
- (id)clientIdentityByChangingCached:(char)a0;
- (char)isAllowedToWipeAnyDataContainer;
- (char)_isClientAffordedSandboxForContainerIdentifier:(id)a0 containerConfig:(id)a1;
- (char)isAllowedToTest;
- (char)_checkIsAllowedToHaveSandboxExtensionForIdentity:(id)a0 containerPath:(id)a1 containerConfig:(id)a2 allowed:(char *)a3 error:(id *)a4;
- (char)_checkIsAllowedToHaveSandboxExtensionForRestrictedContainerPath:(id)a0 identifier:(id)a1 containerConfig:(id)a2 allowed:(char *)a3 error:(id *)a4;
- (char)_checkShouldIssueExtensionForIdentity:(id)a0 containerPath:(id)a1 legacyExtensionPolicy:(char)a2 extensionsPolicyUsesProxiedClient:(char)a3 issueExtension:(char *)a4 error:(id *)a5;
- (char)_isAllowedAccessToNonRestrictedProtectedContainerWithIdentifier:(id)a0 clientIdentifier:(id)a1 containerConfig:(id)a2;
- (char)_shouldAttemptToIssueSandboxExtensionUsingLegacyPolicyForContainerConfig:(id)a0 identifier:(id)a1;
- (Class)amfiClass;
- (struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *)createLibsystemClient;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 proximateClient:(id)a4 auditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 sandboxed:(char)a7 sandboxContainerURL:(id)a8 testClient:(char)a9 kernel:(char)a10;
- (char)isAllowedToAccessCodesignMapping;
- (char)isAllowedToAccessContainerIdentity:(id)a0 error:(unsigned long long *)a1;
- (char)isAllowedToAccessInfoMetadata;
- (char)isAllowedToAccessUserAssets;
- (char)isAllowedToChangeReferences;
- (char)isAllowedToControlCaches;
- (char)isAllowedToDelete;
- (char)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (char)isAllowedToLookupContainerIdentity:(id)a0;
- (char)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifiers:(id)a1;
- (char)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)a0 identifier:(id)a1;
- (char)isAllowedToReadReferences;
- (char)isAllowedToRecreateContainerStructure;
- (char)isAllowedToRegenerateDirectoryUUIDs;
- (char)isAllowedToReplaceContainers;
- (char)isAllowedToRestoreContainer;
- (char)isAllowedToSetDataProtection;
- (char)isAllowedToStageSharedContent;
- (char)isAllowedToStartDataMigration;
- (char)isAllowedToStartUserDataMigration;
- (char)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (char *)issueSandboxExtensionWithIdentity:(id)a0 containerPath:(id)a1 legacyExtensionPolicy:(char)a2 extensionsUseProxiedClient:(char)a3 extensionsPolicyUsesProxiedClient:(char)a4 error:(id *)a5;

@end
