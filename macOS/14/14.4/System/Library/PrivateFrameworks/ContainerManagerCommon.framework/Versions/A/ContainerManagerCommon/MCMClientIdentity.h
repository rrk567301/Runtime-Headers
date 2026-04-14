@class MCMUserIdentity, MCMPOSIXUser, NSURL;
@protocol MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMAllows, NSCopying>

@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realAuditToken;
@property (readonly, nonatomic) struct { unsigned int val[8]; } effectiveAuditToken;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly, nonatomic) BOOL cached;

+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;
+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initInternal;
- (id)clientIdentityByChangingCached:(BOOL)a0;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (BOOL)isAllowedToTest;
- (BOOL)_appGroupContainerWithMetadata:(id)a0 needsSandboxExtension:(BOOL *)a1 error:(id *)a2;
- (struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)createLibsystemClient;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 effectiveAuditToken:(struct { unsigned int x0[8]; })a4 realAuditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 extension:(BOOL)a7 sandboxed:(BOOL)a8 sandboxContainerURL:(id)a9 kernel:(BOOL)a10;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToAccessContainerIdentity:(id)a0 error:(unsigned long long *)a1;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifiers:(id)a1;
- (BOOL)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (char *)issueSandboxExtensionWithMetadata:(id)a0 legacyExtensionPolicy:(BOOL)a1 error:(id *)a2;
- (BOOL)needsSandboxExtensionForContainerWithClass:(unsigned long long)a0 identifier:(id)a1;

@end
