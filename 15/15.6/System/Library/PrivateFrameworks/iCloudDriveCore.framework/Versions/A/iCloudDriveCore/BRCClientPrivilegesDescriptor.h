@class NSString, NSSet;

@interface BRCClientPrivilegesDescriptor : NSObject {
    NSString *_debugIdentifier;
    char _cloudEnabledStatusWithoutLogOutStatus;
    char _canGetApplicationInfo;
}

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) char isNonAppSandboxed;
@property (readonly, nonatomic) char isAllowedToAccessAnyCloudService;
@property (readonly, nonatomic) char isProxyEntitled;
@property (readonly, nonatomic) char isSharingProxyEntitled;
@property (readonly, nonatomic) char isFolderSharingProxyEntitled;
@property (readonly, nonatomic) char isSharingPrivateInterfaceEntitled;
@property (readonly, nonatomic) char isAutomationEntitled;
@property (readonly, nonatomic) char isSyncBubbleClientEntitled;
@property (readonly, nonatomic) char canFetchUserQuota;
@property (readonly, nonatomic) char isBRCTL;
@property (readonly, nonatomic) char isFPFSExtension;
@property (readonly, nonatomic) NSSet *appLibraryIDs;
@property (readonly, nonatomic) NSString *defaultAppLibraryID;
@property (readonly, nonatomic) char hasAuditToken;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;

+ (char)_isNonSandboxedForAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)description;
- (void).cxx_destruct;
- (int)pid;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (char)hasPid;
- (char)_computeCloudEnabledStatusWithoutLogOutStatus;
- (void)_finishSetupWithClientContainerIDs:(id)a0;
- (char)cloudEnabledStatusWithHasSession:(char)a0;
- (id)initWithNonSandboxedAppWithAppLibraryIDs:(id)a0 bundleID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;
- (void)updateCloudEnabledStatus;

@end
