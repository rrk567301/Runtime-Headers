@class HMUserCameraAccess, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl

@property (getter=isOwner) BOOL owner;
@property (nonatomic, getter=isAdministrator) BOOL administrator;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property (getter=isAccessAllowed) BOOL accessAllowed;
@property (nonatomic) unsigned long long accessNotAllowedReasonCode;
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (retain, nonatomic) HMUserCameraAccess *camerasAccess;
@property (getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 allowAccess:(BOOL)a1 owner:(BOOL)a2 administratorPrivilege:(BOOL)a3 remoteAccess:(BOOL)a4 presenceAuthStatus:(id)a5 presenceComputeStatus:(id)a6 announceAccess:(BOOL)a7 camerasAccess:(id)a8;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (unsigned long long)camerasAccessLevel;
- (void)updateAdministratorAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateRemoteAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateCamerasAccessLevel:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateAnnounceAccess:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
